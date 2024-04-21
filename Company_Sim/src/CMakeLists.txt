set(HEAD ${CMAKE_SOURCE_DIR}/headers)

add_executable(Company_Sim
    main.cpp
worker.cpp
manager.cpp
ceo.cpp
company.cpp

${HEAD}/worker.h
${HEAD}/manager.h
${HEAD}/ceo.h
${HEAD}/company.h
)

target_include_directories(Company_Sim PUBLIC ${HEAD})
