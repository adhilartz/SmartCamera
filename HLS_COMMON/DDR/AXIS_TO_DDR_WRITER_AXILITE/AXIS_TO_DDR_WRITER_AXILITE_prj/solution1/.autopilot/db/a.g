#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/andrea/Documenti/vision/Ultrascale/hls/DDR/AXIS_TO_DDR_WRITER_AXILITE/AXIS_TO_DDR_WRITER_AXILITE_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}