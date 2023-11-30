cmake_minimum_required(VERSION 3.5)

set(HEAD_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable(m27t1
    main.cpp
    elf_tree.cpp
    branch.cpp
    sub_branch.cpp
    rand_vals.cpp

    ${HEAD_DIR}/elf_tree.h
    ${HEAD_DIR}/branch.h
    ${HEAD_DIR}/sub_branch.h
    ${HEAD_DIR}/rand_vals.h)

target_include_directories(m27t1 PUBLIC ${HEAD_DIR})
