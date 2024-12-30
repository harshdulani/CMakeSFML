# Add the Driver library
set(DriverSources 
	main.cpp
)

add_executable(GameTarget main.cpp)

target_sources(GameTarget PRIVATE ${DriverSources})