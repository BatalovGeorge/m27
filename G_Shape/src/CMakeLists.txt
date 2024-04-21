set (headers ${CMAKE_SOURCE_DIR}/headers)

add_executable(G_Shape main.cpp
triangle.cpp
circle.cpp
rectangle.cpp

${headers}/AbstractShape.h
${headers}/triangle.h
${headers}/circle.h
${headers}/rectangle.h
${headers}/square.h)

target_include_directories(G_Shape PUBLIC ${headers})
