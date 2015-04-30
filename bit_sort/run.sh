#!/bin/bash
./random input
./toy input output
gprof toy > toy_report
gprof random > random_report