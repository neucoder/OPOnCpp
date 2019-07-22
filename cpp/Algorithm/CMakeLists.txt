# 查找所有源文件
# 保存名称 到 MATH_LIB 里面
set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. BEIBAO)
# 生成MATH_LIB链接库
add_library(BeiBao SHARED ${BEIBAO})
