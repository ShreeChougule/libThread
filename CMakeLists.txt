cmake_minimum_required (VERSION 2.6)
project (LibThread)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -fstack-protector-all -pthread")
include_directories(${PROJECT_SOURCE_DIR})


#include_directories(${GLIB_INC_DIR})

#add_subdirectory()

set (SOURCES
    "threadt.cpp"
    "Sample.cpp"
    "tester.cpp"
)

set(LIBS 
 	${LIBS} 
)

add_executable(thread_lib_tester ${SOURCES})
#add_library(thread_lib SHARED ${SOURCES})
target_link_libraries(thread_lib ${LIBS})





















