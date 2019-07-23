# include src directory and find cuda
set(CUDA_DIR /usr/local/cuda)
include_directories(${PROJECT_SOURCE_DIR}/src)
link_directories(${CUDA_DIR}/lib64 ${PROJECT_BINARY_DIR}/bin)

# find and include Torch
list(APPEND CMAKE_PREFIX_PATH "/home/sherk/Workspace/pytorch/torch")
find_package(Torch REQUIRED)

message(STATUS "TORCH FOUND!")
message(STATUS "Torch inc: " ${TORCH_INCLUDE_DIRS})
message(STATUS "Torch lib: " ${TORCH_LIBRARIES})

include_directories(${TORCH_INCLUDE_DIRS})

# using gflag
find_package(gflags REQUIRED)



include_directories(${PROJECT_SOURCE_DIR}/answers)
include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${PROJECT_SOURCE_DIR}/lib)


add_executable(run main.cc)


set(OPENCV_LIBS opencv_core opencv_imgproc opencv_imgcodecs opencv_videoio opencv_highgui)
target_link_libraries(run ${OPENCV_LIBS})
target_link_libraries(run ${TORCH_LIBRARIES})
target_link_libraries(run gflags)
target_link_libraries(run feature_extract)





