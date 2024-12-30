# Add the updater library
set(UpdaterSources 
	updater.cpp 
)
set(UpdaterHeaders 
    updater.h
)

target_sources(GameTarget PRIVATE ${UpdaterSources} ${UpdaterHeaders})

# Add include directory for this library
target_include_directories(GameTarget PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")