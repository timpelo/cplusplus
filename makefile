create: 06/e4.cpp 06/car.cpp 06/customer.cpp 06/shop.cpp
	g++ -Wall -ansi 06/e4.cpp 06/car.cpp 06/customer.cpp 06/shop.cpp -o 06/e4app

style: 06/e4.cpp
	astyle --style=allman 06/e4.cpp 06/car.cpp 06/car.h