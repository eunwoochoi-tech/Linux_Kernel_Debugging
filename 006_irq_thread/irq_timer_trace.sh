#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing off"

echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "event disabled"

echo secondary_start_kernel > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "function_graph tracer enabled"

echo function_graph > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "function_graph enabled"

echo bcm2835_mmc_irq bcm2835_mmc_thread_irq > /sys/kernel/debug/tracing/set_ftrace_filter
echo bcm2835_mbox_irq bcm2835_mbox_thread_irq >> /sys/kernel/debug/tracing/set_ftrace_filter
echo bcm2835_sdhost_irq >> /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "set_ftrace_filter enabled"

echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
echo 1 > /sys/kernel/debug/tracing/events/sched/sched_wakeup/enable
sleep 1

echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
echo "event enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing on"
