main1.out: main.cpp Vehicle.cpp Sedan.cpp Wagon.cpp Ute.cpp Store.cpp Customer.cpp
	g++ -std=c++11 Vehicle.cpp Sedan.cpp Wagon.cpp Ute.cpp Store.cpp Customer.cpp main.cpp -o main1.out
	./main1.out
