cmake_minimum_required(VERSION 2.8)
project( DrawLine )
find_package( OpenCV REQUIRED )
add_executable( DrawLine DrawLine.cpp )
target_link_libraries( DrawLine ${OpenCV_LIBS} )

