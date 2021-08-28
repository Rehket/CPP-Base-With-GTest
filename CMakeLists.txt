cmake_minimum_required(VERSION 3.6)
project(Project)

add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(project_run ${SOURCE_FILES})

include_directories(project)

add_subdirectory(project)
add_subdirectory(project_tests)

target_link_libraries(project_run project)


#if ($ENV{CLION_IDE})
#    message("Call cmake command from the CLion IDE")
#    set(CALENDAR_PATH_VAR "test")
#    set(CALENDAR_DIR_VAR "test")
#endif ()