cmake_minimum_required(VERSION 2.8)
project( basic_linear_transform )
find_package( OpenCV REQUIRED )
add_executable( basic_linear_transform basic_linear_transform.cpp )
target_link_libraries( basic_linear_transform ${OpenCV_LIBS} )

