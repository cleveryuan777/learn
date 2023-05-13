cmake_minimum_required(VERSION 3.10)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

#aux_source_directory(src algorithm_src)

#set(CMAKE_CXX_FLAGS "-fno-elide-constructors")

file(GLOB files ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

set(LIBRARY_OUTPUT_PATH  ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)




foreach (file ${files})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file} )
    target_link_libraries(${name} pthread)
endforeach ()

#target_link_libraries(main pthread)


#add_executable(algorithm ${algorithm_src} main.cpp test1.cpp)
