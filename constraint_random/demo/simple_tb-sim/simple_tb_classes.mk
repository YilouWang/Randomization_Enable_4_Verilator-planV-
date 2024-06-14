# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See simple_tb.mk for the caller.

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
	simple_tb \
	simple_tb___024root__DepSet_hd1d9735c__0 \
	simple_tb___024root__DepSet_hc7b92edd__0 \
	simple_tb___024unit__03a__03acls__Vclpkg__DepSet_hb230894e__0 \
	simple_tb___024unit__03a__03acls__Vclpkg__DepSet_h6b91b8cb__0 \
	simple_tb___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_h750b96a4__0 \
	simple_tb___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_h1735f61a__0 \
	simple_tb___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_h0e8caa17__0 \
	simple_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	simple_tb___024root__Slow \
	simple_tb___024root__DepSet_he8598e68__0__Slow \
	simple_tb___024root__DepSet_hc7b92edd__0__Slow \
	simple_tb___024unit__Slow \
	simple_tb___024unit__DepSet_h8a73a78a__0__Slow \
	simple_tb___024unit__03a__03acls__Vclpkg__Slow \
	simple_tb___024unit__03a__03acls__Vclpkg__DepSet_h6b91b8cb__0__Slow \
	simple_tb___024unit__03a__03aw_sequence_item__Vclpkg__Slow \
	simple_tb___024unit__03a__03aw_sequence_item__Vclpkg__DepSet_h0e8caa17__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	simple_tb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	simple_tb__Syms \
	simple_tb__Trace__0__Slow \
	simple_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_random \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
