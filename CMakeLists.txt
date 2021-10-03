cmake_minimum_required (VERSION 3.15.0)

add_library(libComInterfaceGenerator STATIC)


set_property(TARGET libComInterfaceGenerator PROPERTY CXX_STANDARD 17)

set_property(TARGET libComInterfaceGenerator PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_include_directories(libComInterfaceGenerator 
	PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/generated/"
	PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/antlr/runtime/"
)

add_subdirectory(Src)

target_sources(libComInterfaceGenerator 
	PRIVATE 
		generated/CidlBaseListener.cpp 
		generated/CidlLexer.cpp 
		generated/CidlListener.cpp
		generated/CidlParser.cpp
)

target_compile_definitions(libComInterfaceGenerator PUBLIC ANTLR4CPP_STATIC)


target_link_libraries(libComInterfaceGenerator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/antlr/lib/$<IF:$<CONFIG:Debug>,Debug,Release>/antlr4-runtime-static.lib")