# Add the SubCalc library
set(SubCalcSources 
subcalc.cpp 
)

set(SubCalcHeaders 
	subcalc.h
)

target_sources(GameTarget PRIVATE ${SubCalcSources} ${SubCalcHeaders})

# Add include directory for this library
target_include_directories(GameTarget PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")