#!/bin/bash

# turn off trace
echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing off"

# disable event
echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled"

# set function name to trace
echo secondary_start_kernel > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "set_ftrace_filter init"

# select tracer( 'nop' or 'function' or 'graph_function' )
echo function > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "function tracer enabled"

# set function name to trace
#echo rpi_get_interrupt_info > /sys/kernel/debug/tracing/set_ftrace_filter
echo bcm2835_mmc_irq >> /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "set_ftrace_filter enabled"

# enable specific event
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
echo "event enabled"

# trace functions in set_ftrace_filter
echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo "function stack trace enabled"

# sym-offset is format of ftrace output
echo 1 > /sys/kernel/debug/tracing/options/func_stack_trace
echo 1 > /sys/kernel/debug/tracing/options/sym-offset
echo "function stack trace enabled"

# turn on trace
echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing on"
