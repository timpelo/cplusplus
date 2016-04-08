create: 07/e3.cpp 07/array.h 
	g++ -Wall -ansi 07/e3.cpp 07/array.h  -o 07/e3app

style: 07/e3.cpp 07/array.h 
	astyle --style=allman 07/e3.cpp 07/array.h