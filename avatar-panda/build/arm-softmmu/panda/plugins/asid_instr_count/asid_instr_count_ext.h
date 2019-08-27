#ifndef __ASID_INSTR_COUNT_EXT_H__
#define __ASID_INSTR_COUNT_EXT_H__
/*
 * DO NOT MODIFY. This file is automatically generated by scripts/apigen.py,
 * based on the <plugin>_int.h file in your plugin directory.
 *
 * Note: Function pointers for API calls are declared as extern.
 * The definition of the pointers is guarded by the PLUGIN_MAIN macro.
 * This plugin is defined only for the compilation unit matching the
 * name of the plugin.
 * This allows us to initialize API function pointers once, in the main
 * compilation unit, rather than in every compilation unit.
 */
#include <dlfcn.h>
#include "panda/plugin.h"

typedef Instr(*get_instr_count_current_asid_t)(void);
extern get_instr_count_current_asid_t __get_instr_count_current_asid;
#ifdef PLUGIN_MAIN
get_instr_count_current_asid_t __get_instr_count_current_asid = NULL;
#endif
static inline Instr get_instr_count_current_asid(void);
static inline Instr get_instr_count_current_asid(void) {
    assert(__get_instr_count_current_asid);
    return __get_instr_count_current_asid();
}

typedef Instr(*get_instr_count_by_asid_t)(target_ulong asid);
extern get_instr_count_by_asid_t __get_instr_count_by_asid;
#ifdef PLUGIN_MAIN
get_instr_count_by_asid_t __get_instr_count_by_asid = NULL;
#endif
static inline Instr get_instr_count_by_asid(target_ulong asid);
static inline Instr get_instr_count_by_asid(target_ulong asid) {
    assert(__get_instr_count_by_asid);
    return __get_instr_count_by_asid(asid);
}

bool init_asid_instr_count_api(void);

#ifdef PLUGIN_MAIN
#define API_PLUGIN_NAME "asid_instr_count"
#define IMPORT_PPP(module, func_name) { \
    __##func_name = (func_name##_t) dlsym(module, #func_name); \
    char *err = dlerror(); \
    if (err) { \
        printf("Couldn't find %s function in library %s.\n", #func_name, API_PLUGIN_NAME); \
        printf("Error: %s\n", err); \
        return false; \
    } \
}
bool init_asid_instr_count_api(void) {
    void *module = panda_get_plugin_by_name(API_PLUGIN_NAME);
    if (!module) {
        fprintf(stderr, "Couldn't load %s plugin: %s\n", API_PLUGIN_NAME, dlerror());
        return false;
    }
    IMPORT_PPP(module, get_instr_count_current_asid)
    IMPORT_PPP(module, get_instr_count_by_asid)
    return true;
}
#undef API_PLUGIN_NAME
#undef IMPORT_PPP
#endif

#endif
