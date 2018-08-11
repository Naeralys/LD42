cmake_minimum_required( VERSION 3.7 )

project( LDJAM )

set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14" )
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${PROJECT_SOURCE_DIR}" )
set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin )
set( source_dir "${PROJECT_SOURCE_DIR}/src/" )

find_package( SDL2 REQUIRED )

file( GLOB source_files "${source_dir}/*.cpp" )

add_executable( LDJAM ${source_files} )

target_link_libraries( LDJAM ${SDL2_LIBRARY} )
