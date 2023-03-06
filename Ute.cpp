
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"
#include"Ute.h"

using namespace std;

Ute :: Ute(){};

Ute :: Ute(int price, int vehicle_ID, string brand, string fuel_type, double fuel_tank_capacity, int load_capacity, int fuel_average_distance, string name)
: Vehicle(price, vehicle_ID,brand), _fuel_type(fuel_type), _fuel_tank_capacity(fuel_tank_capacity), _load_capacity(load_capacity), _fuel_average_distance(fuel_average_distance), _name(name){
} // using initializer list to initialize a UTE

int Ute :: get_ID() { return _vehicle_ID; }

string Ute :: get_fuel_type() { return _fuel_type; }

double Ute :: get_fuel_tank_capacity(){ return _fuel_tank_capacity; }

int Ute :: get_load_capacity() { return _load_capacity; }

int Ute :: get_fuel_average_distance(){ return _fuel_average_distance; }

string Ute :: get_name() {return _name; }


int Ute :: get_price(){ return _price;}

void Ute :: print_info(){
    cout << "This is an Ute.\n";
    cout << "Vehicle ID            : " << get_ID() << endl;
    cout << "Price                 : " << get_price() << " AUD" << endl;
    cout << "Details               : " << get_name() << endl;
    cout << "Fuel Type             : " << get_fuel_type() << endl;
    cout << "Fuel Tank Capacity    : " << get_fuel_tank_capacity() << "L" << endl;
    cout << "Load capacity         : " << get_load_capacity() <<"Kg"<< endl;
    cout << "Fuel average distance : " << get_fuel_average_distance() << "Km" << endl;
}

Ute :: ~Ute(){}

