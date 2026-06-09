cmake_minimum_required(VERSION 3.16)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(MDPV)

add_executable(MDPV 
        Main.cpp
)

set_target_properties(MDPV PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/"
)

target_include_directories(MDPV PRIVATE 
        )

target_link_directories(MDPV PRIVATE
        )

target_link_libraries(MDPV
        
)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options(MDPV PRIVATE 
        -O3            
    )
endif()