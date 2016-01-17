e1: e1.cpp
	g++ -ansi -o e1 e1.cpp

style: e1.cpp
	astyle --style=allman e1.cpp