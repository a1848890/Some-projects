#include<iostream>
#include<string>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

Vehicle :: Vehicle(){
    _vehicle_ID = 0;
    _price = 0;
    _brand = "";
}

Vehicle :: Vehicle(int price, int vehicle_ID, string brand): _price(price), _vehicle_ID(vehicle_ID), _brand(brand){} // initializer list

int Vehicle :: get_price(){
    return _price;
}

int Vehicle :: get_ID() {return _vehicle_ID;}

string Vehicle :: get_brand(){
    return _brand;
}

Vehicle :: ~Vehicle() {}

