cmake_minimum_required(VERSION 2.8)
project( hough_line  )
find_package( OpenCV REQUIRED )
add_executable( hough_line hough_line.cpp )
target_link_libraries( hough_line ${OpenCV_LIBS} )

