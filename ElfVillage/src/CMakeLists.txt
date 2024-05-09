set (headers ${CMAKE_SOURCE_DIR}/headers)

add_executable(ElfVillage
    main.cpp
    elftree.cpp
    elfbranch.cpp

    ${headers}/elfbranch.h
    ${headers}/elftree.h
)

target_include_directories(ElfVillage PUBLIC ${headers})
