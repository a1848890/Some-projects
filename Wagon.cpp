#include<iostream>
#include<string>
#include"printable.h"
#include"Vehicle.h"
#include"Wagon.h"
using namespace std;

Wagon :: Wagon(){}

Wagon :: Wagon(int price, int vehicle_ID,string brand, string name) : Vehicle(price, vehicle_ID, brand), _name(name){}

string Wagon :: get_name(){return _name;}

int Wagon :: get_price(){return _price;}

//int Wagon :: get_ID(){return _vehicle_ID;}

void Wagon :: print_info(){
    cout << "This is a Wagon \n";
    cout << "Price          : " << _price <<" AUD" << endl;
    cout << "Brand          : " << get_brand() << endl;
    cout << "Series         : " << _name << endl;
}
Wagon :: ~Wagon(){}

