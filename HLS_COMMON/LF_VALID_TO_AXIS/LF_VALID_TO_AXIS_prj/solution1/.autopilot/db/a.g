#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/andrea/Documenti/vision/Ultrascale/hls/LF_VALID_TO_AXIS/LF_VALID_TO_AXIS_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}