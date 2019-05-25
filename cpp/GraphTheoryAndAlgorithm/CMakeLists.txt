# 查找所有源文件
# 保存名称 到 GRAPH_LIB 里面
aux_source_directory(. GRAPH_LIB)
# 生成MATH_LIB链接库
add_library(GraphLib ${GRAPH_LIB})
