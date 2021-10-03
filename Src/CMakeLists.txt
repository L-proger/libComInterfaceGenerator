

file(GLOB_RECURSE SRC_FILES    
    "*.cpp"
)

file(GLOB_RECURSE HEADER_FILES    
    "*.h"
)

target_sources(libComInterfaceGenerator PRIVATE ${SRC_FILES} ${HEADER_FILES})

target_include_directories(libComInterfaceGenerator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})