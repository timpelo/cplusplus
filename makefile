create: 05/point.cpp 05/e6.cpp 05/line.cpp 05/pixel.cpp 05/rectangle.cpp 05/circle.cpp 05/shape.cpp
	g++ -ansi 05/point.cpp 05/pixel.cpp 05/e6.cpp 05/line.cpp 05/rectangle.cpp 05/circle.cpp 05/shape.cpp -o 05/e6app

style: 05/e6.cpp 05/point.cpp 05/pixel.cpp
	astyle --style=allman 05/e6.cpp 05/line.cpp 05/pixel.cpp 05/rectangle.cpp 05/circle.cpp 05/shape.cpp 05/point.cpp 05/point.h