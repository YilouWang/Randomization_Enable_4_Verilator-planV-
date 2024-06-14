# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See test_4_conditional_constrain.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	test_4_conditional_constrain \
	test_4_conditional_constrain___024root__DepSet_hdad5c523__0 \
	test_4_conditional_constrain___024root__DepSet_hf37766ac__0 \
	test_4_conditional_constrain___024unit__03a__03acls__Vclpkg__DepSet_h9253c0f9__0 \
	test_4_conditional_constrain___024unit__03a__03acls__Vclpkg__DepSet_haaf56a72__0 \
	test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_h27ca17ac__0 \
	test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_hc1728356__0 \
	test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_hfc14a8d7__0 \
	test_4_conditional_constrain__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	test_4_conditional_constrain___024root__Slow \
	test_4_conditional_constrain___024root__DepSet_hcc369634__0__Slow \
	test_4_conditional_constrain___024root__DepSet_hf37766ac__0__Slow \
	test_4_conditional_constrain___024unit__Slow \
	test_4_conditional_constrain___024unit__DepSet_h675536df__0__Slow \
	test_4_conditional_constrain___024unit__03a__03acls__Vclpkg__Slow \
	test_4_conditional_constrain___024unit__03a__03acls__Vclpkg__DepSet_haaf56a72__0__Slow \
	test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg__Slow \
	test_4_conditional_constrain___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_hfc14a8d7__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	test_4_conditional_constrain__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	test_4_conditional_constrain__Syms \
	test_4_conditional_constrain__Trace__0__Slow \
	test_4_conditional_constrain__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_random \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
