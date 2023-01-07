cmake_minimum_required (VERSION 3.15.0)

add_compile_definitions(ANTLR4CPP_STATIC)

add_library(libComInterfaceGenerator STATIC)


set_property(TARGET libComInterfaceGenerator PROPERTY CXX_STANDARD 17)

set_property(TARGET libComInterfaceGenerator PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_include_directories(libComInterfaceGenerator 
	PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/generated/Grammar"
	PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/antlr_cpp_runtime_src/runtime/src"
)

add_subdirectory(Src)

target_sources(libComInterfaceGenerator 
	PRIVATE 
		generated/Grammar/CidlBaseListener.cpp 
		generated/Grammar/CidlLexer.cpp 
		generated/Grammar/CidlListener.cpp
		generated/Grammar/CidlParser.cpp
)



add_subdirectory(antlr_cpp_runtime_src)

target_link_libraries(libComInterfaceGenerator 
PRIVATE
antlr4_static
)

#target_link_libraries(libComInterfaceGenerator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/antlr/lib/$<IF:$<CONFIG:Debug>,Debug,Release>/antlr4-runtime-static.lib")