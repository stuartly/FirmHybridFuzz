/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: plog.proto */

#ifndef PROTOBUF_C_plog_2eproto__INCLUDED
#define PROTOBUF_C_plog_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Panda__AsidInfo Panda__AsidInfo;
typedef struct _Panda__CallStack Panda__CallStack;
typedef struct _Panda__DwarfCall Panda__DwarfCall;
typedef struct _Panda__SrcInfoPri Panda__SrcInfoPri;
typedef struct _Panda__AttackPointPri Panda__AttackPointPri;
typedef struct _Panda__TaintQueryPri Panda__TaintQueryPri;
typedef struct _Panda__TaintQueryUniqueLabelSet Panda__TaintQueryUniqueLabelSet;
typedef struct _Panda__SrcInfo Panda__SrcInfo;
typedef struct _Panda__TaintQuery Panda__TaintQuery;
typedef struct _Panda__AttackPoint Panda__AttackPoint;
typedef struct _Panda__TaintQueryHypercall Panda__TaintQueryHypercall;
typedef struct _Panda__TaintedBranch Panda__TaintedBranch;
typedef struct _Panda__TaintedBranchSummary Panda__TaintedBranchSummary;
typedef struct _Panda__TaintedInstr Panda__TaintedInstr;
typedef struct _Panda__TaintedInstrSummary Panda__TaintedInstrSummary;
typedef struct _Panda__LogEntry Panda__LogEntry;


/* --- enums --- */


/* --- messages --- */

struct  _Panda__AsidInfo
{
  ProtobufCMessage base;
  uint64_t asid;
  char *name;
  uint32_t pid;
  uint64_t start_instr;
  uint64_t end_instr;
  uint64_t count;
};
#define PANDA__ASID_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__asid_info__descriptor) \
    , 0, NULL, 0, 0, 0, 0 }


struct  _Panda__CallStack
{
  ProtobufCMessage base;
  size_t n_addr;
  uint64_t *addr;
};
#define PANDA__CALL_STACK__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__call_stack__descriptor) \
    , 0,NULL }


struct  _Panda__DwarfCall
{
  ProtobufCMessage base;
  char *file_callee;
  char *function_name_callee;
  uint64_t line_number_callee;
  char *file_caller;
  uint64_t line_number_caller;
};
#define PANDA__DWARF_CALL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__dwarf_call__descriptor) \
    , NULL, NULL, 0, NULL, 0 }


struct  _Panda__SrcInfoPri
{
  ProtobufCMessage base;
  char *filename;
  uint32_t linenum;
  char *astnodename;
  protobuf_c_boolean has_insertionpoint;
  uint32_t insertionpoint;
  protobuf_c_boolean has_ast_loc_id;
  uint32_t ast_loc_id;
};
#define PANDA__SRC_INFO_PRI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__src_info_pri__descriptor) \
    , NULL, 0, NULL, 0,0, 0,0 }


struct  _Panda__AttackPointPri
{
  ProtobufCMessage base;
  uint32_t info;
  Panda__CallStack *call_stack;
  Panda__SrcInfoPri *src_info;
};
#define PANDA__ATTACK_POINT_PRI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__attack_point_pri__descriptor) \
    , 0, NULL, NULL }


struct  _Panda__TaintQueryPri
{
  ProtobufCMessage base;
  uint64_t buf;
  uint32_t len;
  size_t n_data;
  uint32_t *data;
  uint32_t num_tainted;
  Panda__CallStack *call_stack;
  Panda__SrcInfoPri *src_info;
  size_t n_taint_query;
  Panda__TaintQuery **taint_query;
};
#define PANDA__TAINT_QUERY_PRI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__taint_query_pri__descriptor) \
    , 0, 0, 0,NULL, 0, NULL, NULL, 0,NULL }


struct  _Panda__TaintQueryUniqueLabelSet
{
  ProtobufCMessage base;
  uint64_t ptr;
  size_t n_label;
  uint32_t *label;
};
#define PANDA__TAINT_QUERY_UNIQUE_LABEL_SET__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__taint_query_unique_label_set__descriptor) \
    , 0, 0,NULL }


struct  _Panda__SrcInfo
{
  ProtobufCMessage base;
  uint32_t filename;
  uint32_t linenum;
  uint32_t astnodename;
  protobuf_c_boolean has_insertionpoint;
  uint32_t insertionpoint;
  protobuf_c_boolean has_ast_loc_id;
  uint32_t ast_loc_id;
};
#define PANDA__SRC_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__src_info__descriptor) \
    , 0, 0, 0, 0,0, 0,0 }


struct  _Panda__TaintQuery
{
  ProtobufCMessage base;
  uint64_t ptr;
  uint32_t tcn;
  uint32_t offset;
  Panda__TaintQueryUniqueLabelSet *unique_label_set;
};
#define PANDA__TAINT_QUERY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__taint_query__descriptor) \
    , 0, 0, 0, NULL }


struct  _Panda__AttackPoint
{
  ProtobufCMessage base;
  uint32_t info;
  Panda__CallStack *call_stack;
  Panda__SrcInfo *src_info;
};
#define PANDA__ATTACK_POINT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__attack_point__descriptor) \
    , 0, NULL, NULL }


struct  _Panda__TaintQueryHypercall
{
  ProtobufCMessage base;
  uint64_t buf;
  uint32_t len;
  size_t n_data;
  uint32_t *data;
  uint32_t num_tainted;
  Panda__CallStack *call_stack;
  Panda__SrcInfo *src_info;
  size_t n_taint_query;
  Panda__TaintQuery **taint_query;
};
#define PANDA__TAINT_QUERY_HYPERCALL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__taint_query_hypercall__descriptor) \
    , 0, 0, 0,NULL, 0, NULL, NULL, 0,NULL }


struct  _Panda__TaintedBranch
{
  ProtobufCMessage base;
  Panda__CallStack *call_stack;
  size_t n_taint_query;
  Panda__TaintQuery **taint_query;
};
#define PANDA__TAINTED_BRANCH__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__tainted_branch__descriptor) \
    , NULL, 0,NULL }


struct  _Panda__TaintedBranchSummary
{
  ProtobufCMessage base;
  uint64_t asid;
  uint64_t pc;
};
#define PANDA__TAINTED_BRANCH_SUMMARY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__tainted_branch_summary__descriptor) \
    , 0, 0 }


struct  _Panda__TaintedInstr
{
  ProtobufCMessage base;
  Panda__CallStack *call_stack;
  size_t n_taint_query;
  Panda__TaintQuery **taint_query;
};
#define PANDA__TAINTED_INSTR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__tainted_instr__descriptor) \
    , NULL, 0,NULL }


struct  _Panda__TaintedInstrSummary
{
  ProtobufCMessage base;
  uint64_t asid;
  uint64_t pc;
};
#define PANDA__TAINTED_INSTR_SUMMARY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__tainted_instr_summary__descriptor) \
    , 0, 0 }


struct  _Panda__LogEntry
{
  ProtobufCMessage base;
  uint64_t pc;
  uint64_t instr;
  Panda__AsidInfo *asid_info;
  protobuf_c_boolean has_asid;
  uint64_t asid;
  Panda__CallStack *call_stack;
  Panda__DwarfCall *dwarf_call;
  Panda__DwarfCall *dwarf_ret;
  protobuf_c_boolean has_taint_label_virtual_addr;
  uint64_t taint_label_virtual_addr;
  protobuf_c_boolean has_taint_label_physical_addr;
  uint64_t taint_label_physical_addr;
  protobuf_c_boolean has_taint_label_number;
  uint32_t taint_label_number;
  Panda__TaintQueryPri *taint_query_pri;
  Panda__AttackPointPri *attack_point_pri;
  Panda__SrcInfoPri *pri_trace_src_info;
  Panda__TaintQueryHypercall *taint_query_hypercall;
  Panda__AttackPoint *attack_point;
  Panda__TaintedBranch *tainted_branch;
  Panda__TaintedBranchSummary *tainted_branch_summary;
  Panda__TaintedInstr *tainted_instr;
  Panda__TaintedInstrSummary *tainted_instr_summary;
};
#define PANDA__LOG_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&panda__log_entry__descriptor) \
    , 0, 0, NULL, 0,0, NULL, NULL, NULL, 0,0, 0,0, 0,0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL }


/* Panda__AsidInfo methods */
void   panda__asid_info__init
                     (Panda__AsidInfo         *message);
size_t panda__asid_info__get_packed_size
                     (const Panda__AsidInfo   *message);
size_t panda__asid_info__pack
                     (const Panda__AsidInfo   *message,
                      uint8_t             *out);
size_t panda__asid_info__pack_to_buffer
                     (const Panda__AsidInfo   *message,
                      ProtobufCBuffer     *buffer);
Panda__AsidInfo *
       panda__asid_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__asid_info__free_unpacked
                     (Panda__AsidInfo *message,
                      ProtobufCAllocator *allocator);
/* Panda__CallStack methods */
void   panda__call_stack__init
                     (Panda__CallStack         *message);
size_t panda__call_stack__get_packed_size
                     (const Panda__CallStack   *message);
size_t panda__call_stack__pack
                     (const Panda__CallStack   *message,
                      uint8_t             *out);
size_t panda__call_stack__pack_to_buffer
                     (const Panda__CallStack   *message,
                      ProtobufCBuffer     *buffer);
Panda__CallStack *
       panda__call_stack__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__call_stack__free_unpacked
                     (Panda__CallStack *message,
                      ProtobufCAllocator *allocator);
/* Panda__DwarfCall methods */
void   panda__dwarf_call__init
                     (Panda__DwarfCall         *message);
size_t panda__dwarf_call__get_packed_size
                     (const Panda__DwarfCall   *message);
size_t panda__dwarf_call__pack
                     (const Panda__DwarfCall   *message,
                      uint8_t             *out);
size_t panda__dwarf_call__pack_to_buffer
                     (const Panda__DwarfCall   *message,
                      ProtobufCBuffer     *buffer);
Panda__DwarfCall *
       panda__dwarf_call__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__dwarf_call__free_unpacked
                     (Panda__DwarfCall *message,
                      ProtobufCAllocator *allocator);
/* Panda__SrcInfoPri methods */
void   panda__src_info_pri__init
                     (Panda__SrcInfoPri         *message);
size_t panda__src_info_pri__get_packed_size
                     (const Panda__SrcInfoPri   *message);
size_t panda__src_info_pri__pack
                     (const Panda__SrcInfoPri   *message,
                      uint8_t             *out);
size_t panda__src_info_pri__pack_to_buffer
                     (const Panda__SrcInfoPri   *message,
                      ProtobufCBuffer     *buffer);
Panda__SrcInfoPri *
       panda__src_info_pri__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__src_info_pri__free_unpacked
                     (Panda__SrcInfoPri *message,
                      ProtobufCAllocator *allocator);
/* Panda__AttackPointPri methods */
void   panda__attack_point_pri__init
                     (Panda__AttackPointPri         *message);
size_t panda__attack_point_pri__get_packed_size
                     (const Panda__AttackPointPri   *message);
size_t panda__attack_point_pri__pack
                     (const Panda__AttackPointPri   *message,
                      uint8_t             *out);
size_t panda__attack_point_pri__pack_to_buffer
                     (const Panda__AttackPointPri   *message,
                      ProtobufCBuffer     *buffer);
Panda__AttackPointPri *
       panda__attack_point_pri__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__attack_point_pri__free_unpacked
                     (Panda__AttackPointPri *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintQueryPri methods */
void   panda__taint_query_pri__init
                     (Panda__TaintQueryPri         *message);
size_t panda__taint_query_pri__get_packed_size
                     (const Panda__TaintQueryPri   *message);
size_t panda__taint_query_pri__pack
                     (const Panda__TaintQueryPri   *message,
                      uint8_t             *out);
size_t panda__taint_query_pri__pack_to_buffer
                     (const Panda__TaintQueryPri   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintQueryPri *
       panda__taint_query_pri__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__taint_query_pri__free_unpacked
                     (Panda__TaintQueryPri *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintQueryUniqueLabelSet methods */
void   panda__taint_query_unique_label_set__init
                     (Panda__TaintQueryUniqueLabelSet         *message);
size_t panda__taint_query_unique_label_set__get_packed_size
                     (const Panda__TaintQueryUniqueLabelSet   *message);
size_t panda__taint_query_unique_label_set__pack
                     (const Panda__TaintQueryUniqueLabelSet   *message,
                      uint8_t             *out);
size_t panda__taint_query_unique_label_set__pack_to_buffer
                     (const Panda__TaintQueryUniqueLabelSet   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintQueryUniqueLabelSet *
       panda__taint_query_unique_label_set__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__taint_query_unique_label_set__free_unpacked
                     (Panda__TaintQueryUniqueLabelSet *message,
                      ProtobufCAllocator *allocator);
/* Panda__SrcInfo methods */
void   panda__src_info__init
                     (Panda__SrcInfo         *message);
size_t panda__src_info__get_packed_size
                     (const Panda__SrcInfo   *message);
size_t panda__src_info__pack
                     (const Panda__SrcInfo   *message,
                      uint8_t             *out);
size_t panda__src_info__pack_to_buffer
                     (const Panda__SrcInfo   *message,
                      ProtobufCBuffer     *buffer);
Panda__SrcInfo *
       panda__src_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__src_info__free_unpacked
                     (Panda__SrcInfo *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintQuery methods */
void   panda__taint_query__init
                     (Panda__TaintQuery         *message);
size_t panda__taint_query__get_packed_size
                     (const Panda__TaintQuery   *message);
size_t panda__taint_query__pack
                     (const Panda__TaintQuery   *message,
                      uint8_t             *out);
size_t panda__taint_query__pack_to_buffer
                     (const Panda__TaintQuery   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintQuery *
       panda__taint_query__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__taint_query__free_unpacked
                     (Panda__TaintQuery *message,
                      ProtobufCAllocator *allocator);
/* Panda__AttackPoint methods */
void   panda__attack_point__init
                     (Panda__AttackPoint         *message);
size_t panda__attack_point__get_packed_size
                     (const Panda__AttackPoint   *message);
size_t panda__attack_point__pack
                     (const Panda__AttackPoint   *message,
                      uint8_t             *out);
size_t panda__attack_point__pack_to_buffer
                     (const Panda__AttackPoint   *message,
                      ProtobufCBuffer     *buffer);
Panda__AttackPoint *
       panda__attack_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__attack_point__free_unpacked
                     (Panda__AttackPoint *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintQueryHypercall methods */
void   panda__taint_query_hypercall__init
                     (Panda__TaintQueryHypercall         *message);
size_t panda__taint_query_hypercall__get_packed_size
                     (const Panda__TaintQueryHypercall   *message);
size_t panda__taint_query_hypercall__pack
                     (const Panda__TaintQueryHypercall   *message,
                      uint8_t             *out);
size_t panda__taint_query_hypercall__pack_to_buffer
                     (const Panda__TaintQueryHypercall   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintQueryHypercall *
       panda__taint_query_hypercall__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__taint_query_hypercall__free_unpacked
                     (Panda__TaintQueryHypercall *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintedBranch methods */
void   panda__tainted_branch__init
                     (Panda__TaintedBranch         *message);
size_t panda__tainted_branch__get_packed_size
                     (const Panda__TaintedBranch   *message);
size_t panda__tainted_branch__pack
                     (const Panda__TaintedBranch   *message,
                      uint8_t             *out);
size_t panda__tainted_branch__pack_to_buffer
                     (const Panda__TaintedBranch   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintedBranch *
       panda__tainted_branch__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__tainted_branch__free_unpacked
                     (Panda__TaintedBranch *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintedBranchSummary methods */
void   panda__tainted_branch_summary__init
                     (Panda__TaintedBranchSummary         *message);
size_t panda__tainted_branch_summary__get_packed_size
                     (const Panda__TaintedBranchSummary   *message);
size_t panda__tainted_branch_summary__pack
                     (const Panda__TaintedBranchSummary   *message,
                      uint8_t             *out);
size_t panda__tainted_branch_summary__pack_to_buffer
                     (const Panda__TaintedBranchSummary   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintedBranchSummary *
       panda__tainted_branch_summary__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__tainted_branch_summary__free_unpacked
                     (Panda__TaintedBranchSummary *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintedInstr methods */
void   panda__tainted_instr__init
                     (Panda__TaintedInstr         *message);
size_t panda__tainted_instr__get_packed_size
                     (const Panda__TaintedInstr   *message);
size_t panda__tainted_instr__pack
                     (const Panda__TaintedInstr   *message,
                      uint8_t             *out);
size_t panda__tainted_instr__pack_to_buffer
                     (const Panda__TaintedInstr   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintedInstr *
       panda__tainted_instr__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__tainted_instr__free_unpacked
                     (Panda__TaintedInstr *message,
                      ProtobufCAllocator *allocator);
/* Panda__TaintedInstrSummary methods */
void   panda__tainted_instr_summary__init
                     (Panda__TaintedInstrSummary         *message);
size_t panda__tainted_instr_summary__get_packed_size
                     (const Panda__TaintedInstrSummary   *message);
size_t panda__tainted_instr_summary__pack
                     (const Panda__TaintedInstrSummary   *message,
                      uint8_t             *out);
size_t panda__tainted_instr_summary__pack_to_buffer
                     (const Panda__TaintedInstrSummary   *message,
                      ProtobufCBuffer     *buffer);
Panda__TaintedInstrSummary *
       panda__tainted_instr_summary__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__tainted_instr_summary__free_unpacked
                     (Panda__TaintedInstrSummary *message,
                      ProtobufCAllocator *allocator);
/* Panda__LogEntry methods */
void   panda__log_entry__init
                     (Panda__LogEntry         *message);
size_t panda__log_entry__get_packed_size
                     (const Panda__LogEntry   *message);
size_t panda__log_entry__pack
                     (const Panda__LogEntry   *message,
                      uint8_t             *out);
size_t panda__log_entry__pack_to_buffer
                     (const Panda__LogEntry   *message,
                      ProtobufCBuffer     *buffer);
Panda__LogEntry *
       panda__log_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   panda__log_entry__free_unpacked
                     (Panda__LogEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Panda__AsidInfo_Closure)
                 (const Panda__AsidInfo *message,
                  void *closure_data);
typedef void (*Panda__CallStack_Closure)
                 (const Panda__CallStack *message,
                  void *closure_data);
typedef void (*Panda__DwarfCall_Closure)
                 (const Panda__DwarfCall *message,
                  void *closure_data);
typedef void (*Panda__SrcInfoPri_Closure)
                 (const Panda__SrcInfoPri *message,
                  void *closure_data);
typedef void (*Panda__AttackPointPri_Closure)
                 (const Panda__AttackPointPri *message,
                  void *closure_data);
typedef void (*Panda__TaintQueryPri_Closure)
                 (const Panda__TaintQueryPri *message,
                  void *closure_data);
typedef void (*Panda__TaintQueryUniqueLabelSet_Closure)
                 (const Panda__TaintQueryUniqueLabelSet *message,
                  void *closure_data);
typedef void (*Panda__SrcInfo_Closure)
                 (const Panda__SrcInfo *message,
                  void *closure_data);
typedef void (*Panda__TaintQuery_Closure)
                 (const Panda__TaintQuery *message,
                  void *closure_data);
typedef void (*Panda__AttackPoint_Closure)
                 (const Panda__AttackPoint *message,
                  void *closure_data);
typedef void (*Panda__TaintQueryHypercall_Closure)
                 (const Panda__TaintQueryHypercall *message,
                  void *closure_data);
typedef void (*Panda__TaintedBranch_Closure)
                 (const Panda__TaintedBranch *message,
                  void *closure_data);
typedef void (*Panda__TaintedBranchSummary_Closure)
                 (const Panda__TaintedBranchSummary *message,
                  void *closure_data);
typedef void (*Panda__TaintedInstr_Closure)
                 (const Panda__TaintedInstr *message,
                  void *closure_data);
typedef void (*Panda__TaintedInstrSummary_Closure)
                 (const Panda__TaintedInstrSummary *message,
                  void *closure_data);
typedef void (*Panda__LogEntry_Closure)
                 (const Panda__LogEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor panda__asid_info__descriptor;
extern const ProtobufCMessageDescriptor panda__call_stack__descriptor;
extern const ProtobufCMessageDescriptor panda__dwarf_call__descriptor;
extern const ProtobufCMessageDescriptor panda__src_info_pri__descriptor;
extern const ProtobufCMessageDescriptor panda__attack_point_pri__descriptor;
extern const ProtobufCMessageDescriptor panda__taint_query_pri__descriptor;
extern const ProtobufCMessageDescriptor panda__taint_query_unique_label_set__descriptor;
extern const ProtobufCMessageDescriptor panda__src_info__descriptor;
extern const ProtobufCMessageDescriptor panda__taint_query__descriptor;
extern const ProtobufCMessageDescriptor panda__attack_point__descriptor;
extern const ProtobufCMessageDescriptor panda__taint_query_hypercall__descriptor;
extern const ProtobufCMessageDescriptor panda__tainted_branch__descriptor;
extern const ProtobufCMessageDescriptor panda__tainted_branch_summary__descriptor;
extern const ProtobufCMessageDescriptor panda__tainted_instr__descriptor;
extern const ProtobufCMessageDescriptor panda__tainted_instr_summary__descriptor;
extern const ProtobufCMessageDescriptor panda__log_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_plog_2eproto__INCLUDED */
