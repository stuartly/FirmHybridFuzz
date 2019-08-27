/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_UTIL_GENERATED_TRACERS_H
#define TRACE_UTIL_GENERATED_TRACERS_H

#include "qemu-common.h"
#include "trace/control.h"

extern TraceEvent _TRACE_RUN_POLL_HANDLERS_BEGIN_EVENT;
extern TraceEvent _TRACE_RUN_POLL_HANDLERS_END_EVENT;
extern TraceEvent _TRACE_POLL_SHRINK_EVENT;
extern TraceEvent _TRACE_POLL_GROW_EVENT;
extern TraceEvent _TRACE_AIO_CO_SCHEDULE_EVENT;
extern TraceEvent _TRACE_AIO_CO_SCHEDULE_BH_CB_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_SUBMIT_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_COMPLETE_EVENT;
extern TraceEvent _TRACE_THREAD_POOL_CANCEL_EVENT;
extern TraceEvent _TRACE_BUFFER_RESIZE_EVENT;
extern TraceEvent _TRACE_BUFFER_MOVE_EMPTY_EVENT;
extern TraceEvent _TRACE_BUFFER_MOVE_EVENT;
extern TraceEvent _TRACE_BUFFER_FREE_EVENT;
extern TraceEvent _TRACE_QEMU_COROUTINE_ENTER_EVENT;
extern TraceEvent _TRACE_QEMU_COROUTINE_YIELD_EVENT;
extern TraceEvent _TRACE_QEMU_COROUTINE_TERMINATE_EVENT;
extern TraceEvent _TRACE_QEMU_CO_QUEUE_RUN_RESTART_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_EVENT;
extern TraceEvent _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_EVENT;
extern TraceEvent _TRACE_QEMU_MEMALIGN_EVENT;
extern TraceEvent _TRACE_QEMU_ANON_RAM_ALLOC_EVENT;
extern TraceEvent _TRACE_QEMU_VFREE_EVENT;
extern TraceEvent _TRACE_QEMU_ANON_RAM_FREE_EVENT;
extern TraceEvent _TRACE_HBITMAP_ITER_SKIP_WORDS_EVENT;
extern TraceEvent _TRACE_HBITMAP_RESET_EVENT;
extern TraceEvent _TRACE_HBITMAP_SET_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FAST_PATH_SUCCESS_EVENT;
extern TraceEvent _TRACE_LOCKCNT_UNLOCK_ATTEMPT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_UNLOCK_SUCCESS_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_EVENT;
extern TraceEvent _TRACE_LOCKCNT_FUTEX_WAKE_EVENT;
extern uint16_t _TRACE_RUN_POLL_HANDLERS_BEGIN_DSTATE;
extern uint16_t _TRACE_RUN_POLL_HANDLERS_END_DSTATE;
extern uint16_t _TRACE_POLL_SHRINK_DSTATE;
extern uint16_t _TRACE_POLL_GROW_DSTATE;
extern uint16_t _TRACE_AIO_CO_SCHEDULE_DSTATE;
extern uint16_t _TRACE_AIO_CO_SCHEDULE_BH_CB_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_SUBMIT_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_COMPLETE_DSTATE;
extern uint16_t _TRACE_THREAD_POOL_CANCEL_DSTATE;
extern uint16_t _TRACE_BUFFER_RESIZE_DSTATE;
extern uint16_t _TRACE_BUFFER_MOVE_EMPTY_DSTATE;
extern uint16_t _TRACE_BUFFER_MOVE_DSTATE;
extern uint16_t _TRACE_BUFFER_FREE_DSTATE;
extern uint16_t _TRACE_QEMU_COROUTINE_ENTER_DSTATE;
extern uint16_t _TRACE_QEMU_COROUTINE_YIELD_DSTATE;
extern uint16_t _TRACE_QEMU_COROUTINE_TERMINATE_DSTATE;
extern uint16_t _TRACE_QEMU_CO_QUEUE_RUN_RESTART_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_LOCK_RETURN_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_DSTATE;
extern uint16_t _TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_DSTATE;
extern uint16_t _TRACE_QEMU_MEMALIGN_DSTATE;
extern uint16_t _TRACE_QEMU_ANON_RAM_ALLOC_DSTATE;
extern uint16_t _TRACE_QEMU_VFREE_DSTATE;
extern uint16_t _TRACE_QEMU_ANON_RAM_FREE_DSTATE;
extern uint16_t _TRACE_HBITMAP_ITER_SKIP_WORDS_DSTATE;
extern uint16_t _TRACE_HBITMAP_RESET_DSTATE;
extern uint16_t _TRACE_HBITMAP_SET_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FAST_PATH_ATTEMPT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FAST_PATH_SUCCESS_DSTATE;
extern uint16_t _TRACE_LOCKCNT_UNLOCK_ATTEMPT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_UNLOCK_SUCCESS_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAIT_RESUME_DSTATE;
extern uint16_t _TRACE_LOCKCNT_FUTEX_WAKE_DSTATE;
#define TRACE_RUN_POLL_HANDLERS_BEGIN_ENABLED 1
#define TRACE_RUN_POLL_HANDLERS_END_ENABLED 1
#define TRACE_POLL_SHRINK_ENABLED 1
#define TRACE_POLL_GROW_ENABLED 1
#define TRACE_AIO_CO_SCHEDULE_ENABLED 1
#define TRACE_AIO_CO_SCHEDULE_BH_CB_ENABLED 1
#define TRACE_THREAD_POOL_SUBMIT_ENABLED 1
#define TRACE_THREAD_POOL_COMPLETE_ENABLED 1
#define TRACE_THREAD_POOL_CANCEL_ENABLED 1
#define TRACE_BUFFER_RESIZE_ENABLED 1
#define TRACE_BUFFER_MOVE_EMPTY_ENABLED 1
#define TRACE_BUFFER_MOVE_ENABLED 1
#define TRACE_BUFFER_FREE_ENABLED 1
#define TRACE_QEMU_COROUTINE_ENTER_ENABLED 1
#define TRACE_QEMU_COROUTINE_YIELD_ENABLED 1
#define TRACE_QEMU_COROUTINE_TERMINATE_ENABLED 1
#define TRACE_QEMU_CO_QUEUE_RUN_RESTART_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_ENTRY_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_LOCK_RETURN_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY_ENABLED 1
#define TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN_ENABLED 1
#define TRACE_QEMU_MEMALIGN_ENABLED 1
#define TRACE_QEMU_ANON_RAM_ALLOC_ENABLED 1
#define TRACE_QEMU_VFREE_ENABLED 1
#define TRACE_QEMU_ANON_RAM_FREE_ENABLED 1
#define TRACE_HBITMAP_ITER_SKIP_WORDS_ENABLED 1
#define TRACE_HBITMAP_RESET_ENABLED 1
#define TRACE_HBITMAP_SET_ENABLED 1
#define TRACE_LOCKCNT_FAST_PATH_ATTEMPT_ENABLED 1
#define TRACE_LOCKCNT_FAST_PATH_SUCCESS_ENABLED 1
#define TRACE_LOCKCNT_UNLOCK_ATTEMPT_ENABLED 1
#define TRACE_LOCKCNT_UNLOCK_SUCCESS_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_PREPARE_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAIT_RESUME_ENABLED 1
#define TRACE_LOCKCNT_FUTEX_WAKE_ENABLED 1
#include "qemu/log.h"


static inline void trace_run_poll_handlers_begin(void * ctx, int64_t max_ns)
{
    if (true) {
        if (trace_event_get_state(TRACE_RUN_POLL_HANDLERS_BEGIN)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:run_poll_handlers_begin " "ctx %p max_ns %"PRId64 "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, max_ns);
        }
    }
}

static inline void trace_run_poll_handlers_end(void * ctx, bool progress)
{
    if (true) {
        if (trace_event_get_state(TRACE_RUN_POLL_HANDLERS_END)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:run_poll_handlers_end " "ctx %p progress %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, progress);
        }
    }
}

static inline void trace_poll_shrink(void * ctx, int64_t old, int64_t new)
{
    if (true) {
        if (trace_event_get_state(TRACE_POLL_SHRINK)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:poll_shrink " "ctx %p old %"PRId64" new %"PRId64 "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, old, new);
        }
    }
}

static inline void trace_poll_grow(void * ctx, int64_t old, int64_t new)
{
    if (true) {
        if (trace_event_get_state(TRACE_POLL_GROW)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:poll_grow " "ctx %p old %"PRId64" new %"PRId64 "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, old, new);
        }
    }
}

static inline void trace_aio_co_schedule(void * ctx, void * co)
{
    if (true) {
        if (trace_event_get_state(TRACE_AIO_CO_SCHEDULE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:aio_co_schedule " "ctx %p co %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, co);
        }
    }
}

static inline void trace_aio_co_schedule_bh_cb(void * ctx, void * co)
{
    if (true) {
        if (trace_event_get_state(TRACE_AIO_CO_SCHEDULE_BH_CB)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:aio_co_schedule_bh_cb " "ctx %p co %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ctx, co);
        }
    }
}

static inline void trace_thread_pool_submit(void * pool, void * req, void * opaque)
{
    if (true) {
        if (trace_event_get_state(TRACE_THREAD_POOL_SUBMIT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:thread_pool_submit " "pool %p req %p opaque %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , pool, req, opaque);
        }
    }
}

static inline void trace_thread_pool_complete(void * pool, void * req, void * opaque, int ret)
{
    if (true) {
        if (trace_event_get_state(TRACE_THREAD_POOL_COMPLETE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:thread_pool_complete " "pool %p req %p opaque %p ret %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , pool, req, opaque, ret);
        }
    }
}

static inline void trace_thread_pool_cancel(void * req, void * opaque)
{
    if (true) {
        if (trace_event_get_state(TRACE_THREAD_POOL_CANCEL)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:thread_pool_cancel " "req %p opaque %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , req, opaque);
        }
    }
}

static inline void trace_buffer_resize(const char * buf, size_t olen, size_t len)
{
    if (true) {
        if (trace_event_get_state(TRACE_BUFFER_RESIZE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:buffer_resize " "%s: old %zd, new %zd" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , buf, olen, len);
        }
    }
}

static inline void trace_buffer_move_empty(const char * buf, size_t len, const char * from)
{
    if (true) {
        if (trace_event_get_state(TRACE_BUFFER_MOVE_EMPTY)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:buffer_move_empty " "%s: %zd bytes from %s" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , buf, len, from);
        }
    }
}

static inline void trace_buffer_move(const char * buf, size_t len, const char * from)
{
    if (true) {
        if (trace_event_get_state(TRACE_BUFFER_MOVE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:buffer_move " "%s: %zd bytes from %s" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , buf, len, from);
        }
    }
}

static inline void trace_buffer_free(const char * buf, size_t len)
{
    if (true) {
        if (trace_event_get_state(TRACE_BUFFER_FREE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:buffer_free " "%s: capacity %zd" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , buf, len);
        }
    }
}

static inline void trace_qemu_coroutine_enter(void * from, void * to, void * opaque)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_COROUTINE_ENTER)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_coroutine_enter " "from %p to %p opaque %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , from, to, opaque);
        }
    }
}

static inline void trace_qemu_coroutine_yield(void * from, void * to)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_COROUTINE_YIELD)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_coroutine_yield " "from %p to %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , from, to);
        }
    }
}

static inline void trace_qemu_coroutine_terminate(void * co)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_COROUTINE_TERMINATE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_coroutine_terminate " "self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , co);
        }
    }
}

static inline void trace_qemu_co_queue_run_restart(void * co)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_QUEUE_RUN_RESTART)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_queue_run_restart " "co %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , co);
        }
    }
}

static inline void trace_qemu_co_mutex_lock_uncontended(void * mutex, void * self)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_MUTEX_LOCK_UNCONTENDED)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_mutex_lock_uncontended " "mutex %p self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , mutex, self);
        }
    }
}

static inline void trace_qemu_co_mutex_lock_entry(void * mutex, void * self)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_MUTEX_LOCK_ENTRY)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_mutex_lock_entry " "mutex %p self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , mutex, self);
        }
    }
}

static inline void trace_qemu_co_mutex_lock_return(void * mutex, void * self)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_MUTEX_LOCK_RETURN)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_mutex_lock_return " "mutex %p self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , mutex, self);
        }
    }
}

static inline void trace_qemu_co_mutex_unlock_entry(void * mutex, void * self)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_MUTEX_UNLOCK_ENTRY)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_mutex_unlock_entry " "mutex %p self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , mutex, self);
        }
    }
}

static inline void trace_qemu_co_mutex_unlock_return(void * mutex, void * self)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_CO_MUTEX_UNLOCK_RETURN)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_co_mutex_unlock_return " "mutex %p self %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , mutex, self);
        }
    }
}

static inline void trace_qemu_memalign(size_t alignment, size_t size, void * ptr)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_MEMALIGN)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_memalign " "alignment %zu size %zu ptr %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , alignment, size, ptr);
        }
    }
}

static inline void trace_qemu_anon_ram_alloc(size_t size, void * ptr)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_ANON_RAM_ALLOC)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_anon_ram_alloc " "size %zu ptr %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , size, ptr);
        }
    }
}

static inline void trace_qemu_vfree(void * ptr)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_VFREE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_vfree " "ptr %p" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ptr);
        }
    }
}

static inline void trace_qemu_anon_ram_free(void * ptr, size_t size)
{
    if (true) {
        if (trace_event_get_state(TRACE_QEMU_ANON_RAM_FREE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:qemu_anon_ram_free " "ptr %p size %zu" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , ptr, size);
        }
    }
}

static inline void trace_hbitmap_iter_skip_words(const void * hb, void * hbi, uint64_t pos, unsigned long cur)
{
    if (true) {
        if (trace_event_get_state(TRACE_HBITMAP_ITER_SKIP_WORDS)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:hbitmap_iter_skip_words " "hb %p hbi %p pos %"PRId64" cur 0x%lx" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , hb, hbi, pos, cur);
        }
    }
}

static inline void trace_hbitmap_reset(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
    if (true) {
        if (trace_event_get_state(TRACE_HBITMAP_RESET)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:hbitmap_reset " "hb %p items %"PRIu64",%"PRIu64" bits %"PRIu64"..%"PRIu64 "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , hb, start, count, sbit, ebit);
        }
    }
}

static inline void trace_hbitmap_set(void * hb, uint64_t start, uint64_t count, uint64_t sbit, uint64_t ebit)
{
    if (true) {
        if (trace_event_get_state(TRACE_HBITMAP_SET)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:hbitmap_set " "hb %p items %"PRIu64",%"PRIu64" bits %"PRIu64"..%"PRIu64 "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , hb, start, count, sbit, ebit);
        }
    }
}

static inline void trace_lockcnt_fast_path_attempt(const void * lockcnt, int expected, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FAST_PATH_ATTEMPT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_fast_path_attempt " "lockcnt %p fast path %d->%d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, expected, new);
        }
    }
}

static inline void trace_lockcnt_fast_path_success(const void * lockcnt, int expected, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FAST_PATH_SUCCESS)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_fast_path_success " "lockcnt %p fast path %d->%d succeeded" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, expected, new);
        }
    }
}

static inline void trace_lockcnt_unlock_attempt(const void * lockcnt, int expected, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_UNLOCK_ATTEMPT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_unlock_attempt " "lockcnt %p unlock %d->%d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, expected, new);
        }
    }
}

static inline void trace_lockcnt_unlock_success(const void * lockcnt, int expected, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_UNLOCK_SUCCESS)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_unlock_success " "lockcnt %p unlock %d->%d succeeded" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, expected, new);
        }
    }
}

static inline void trace_lockcnt_futex_wait_prepare(const void * lockcnt, int expected, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FUTEX_WAIT_PREPARE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_futex_wait_prepare " "lockcnt %p preparing slow path %d->%d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, expected, new);
        }
    }
}

static inline void trace_lockcnt_futex_wait(const void * lockcnt, int val)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FUTEX_WAIT)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_futex_wait " "lockcnt %p waiting on %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, val);
        }
    }
}

static inline void trace_lockcnt_futex_wait_resume(const void * lockcnt, int new)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FUTEX_WAIT_RESUME)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_futex_wait_resume " "lockcnt %p after wait: %d" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt, new);
        }
    }
}

static inline void trace_lockcnt_futex_wake(const void * lockcnt)
{
    if (true) {
        if (trace_event_get_state(TRACE_LOCKCNT_FUTEX_WAKE)) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
            qemu_log_mask(LOG_TRACE, "%d@%zd.%06zd:lockcnt_futex_wake " "lockcnt %p waking up one waiter" "\n",
                          getpid(),
                          (size_t)_now.tv_sec, (size_t)_now.tv_usec
                          , lockcnt);
        }
    }
}
#endif /* TRACE_UTIL_GENERATED_TRACERS_H */
