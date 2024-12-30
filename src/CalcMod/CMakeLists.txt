# Add the calcModule library
set(CalcSources 
	calc.cpp
)

set(CalcHeaders
	calc.h
)

add_subdirectory(Driver)
add_subdirectory(SubCalc)

target_sources(GameTarget PRIVATE ${CalcSources} ${CalcHeaders})
target_include_directories(GameTarget PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")