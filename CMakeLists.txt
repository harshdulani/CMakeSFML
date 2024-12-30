cmake_minimum_required(VERSION 3.30.0-rc3)
project(GameProject)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(
    SFML 
    GIT_REPOSITORY http://github.com/SFML/SFML.git
    GIT_TAG 2.6.1)

FetchContent_MakeAvailable(SFML)

set(CMAKE_CXX_STANDARD 17)

# Add standard build types
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

add_subdirectory(src)

target_link_libraries(GameTarget sfml-graphics)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT GameTarget)