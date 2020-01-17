cmake_minimum_required(VERSION 3.0)


project(run)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/answers)


add_subdirectory(src)
add_subdirectory(answers)


