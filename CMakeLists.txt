cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(MDPV)

add_executable(MDPV 
        src/Main/Main.cpp
)

set_target_properties(MDPV PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/"
)

target_include_directories(MDPV PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/ 
)

target_link_directories(MDPV PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/libs/
)

target_link_libraries(MDPV
    libSDL_uclibc.a
    libSDL3_test.a
    libSDL3.dll.a
)

target_compile_options(MDPV PRIVATE 
    -O3            
 )
