cmake_minimum_required(VERSION 2.8)
project( remap  )
find_package( OpenCV REQUIRED )
add_executable( remap remap.cpp )
target_link_libraries( remap ${OpenCV_LIBS} )

