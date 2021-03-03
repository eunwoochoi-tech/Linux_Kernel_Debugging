#!/bin/bash

# trace off
echo 0 > /sys/kernel/debug/tracing/tracing_on
echo "ftrace off"
sleep 3

# get ftrace log file
cp /sys/kernel/debug/tracing/trace .
mv trace ftrace_log.c
