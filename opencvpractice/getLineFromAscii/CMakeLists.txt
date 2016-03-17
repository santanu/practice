cmake_minimum_required(VERSION 2.8)
project( GetLineFromASCII )
find_package( OpenCV REQUIRED )
add_executable( GetLineFromASCII getLineFromASCII.cpp )
target_link_libraries( GetLineFromASCII ${OpenCV_LIBS} )

