
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"
#include"Sedan.h"

using namespace std;

Sedan :: Sedan(){}

Sedan :: Sedan(int price, int vehicle_ID, string brand, string name, double fuel_consumption_100km, int seats_number):Vehicle(price, vehicle_ID, brand),
_name (name), _fuel_consumption_100km(fuel_consumption_100km), _seats_number(seats_number){} // using initialize list

double Sedan :: get_fuel_consumption_100km(){ return _fuel_consumption_100km; }

int Sedan :: get_seats_number() { return _seats_number; }

int Sedan :: get_ID(){
    return _vehicle_ID;
}

string Sedan :: get_name(){ return _name; }

int Sedan :: get_price(){ return _price; }

void Sedan :: print_info() {
     cout << "This is a Sedan.\n";
     cout << "Vehicle ID               : " << get_ID() << endl;
     cout << "Price                    : " << get_price() << " AUD" <<endl;
     cout << "Fuel consumption / 100km : " << get_fuel_consumption_100km()<< "L/100km" <<endl;
     cout << "Seats number             : " << get_seats_number() << endl;
     cout << "Made                     : " << get_brand() << endl;
     cout << "Series                   : " << get_name() << endl;
 }

 Sedan :: ~Sedan() {}

