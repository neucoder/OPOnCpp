# 查找所有源文件
# 保存名称 到 MATH_LIB 里面
aux_source_directory(. MATH_LIB)
# 生成MATH_LIB链接库
add_library(MathFuns SHARED ${MATH_LIB})
