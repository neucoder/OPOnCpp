cmake_minimum_required(VERSION 3.10)
project(OPOnCpp)

set(CMAKE_CXX_STANDARD 11)

# 设置动态库的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# 查找目录下所有源文件
# 把名称保存到 SRC 中
aux_source_directory(. SRC)


# 添加子目录
add_subdirectory(cpp/math)
add_subdirectory(cpp/GraphTheoryAndAlgorithm)
add_subdirectory(cpp/Algorithm)


add_executable(main ${SRC})


# 添加链接库
target_link_libraries(main MathFuns GraphLib BeiBao)