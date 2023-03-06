#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Sedan : public Vehicle{   // class Sedan is a derived class from Vehicle
    protected:
        double _fuel_consumption_100km;  // member variables: fuel consumption
        int _seats_number; //member variables: seats number
        string _name; // member variables: name(series) of the car
    public:
        Sedan(); // Constructor
        Sedan(int price, int vehicle_ID, string brand, string name, double fuel_consumption_100km, int seats_number); // using initializer list to initialize the class
        double get_fuel_consumption_100km();  // return the member variables: fuel consumption
        int get_seats_number(); // return member variables: the seats numebr 
        int get_ID(); // return member variables: ID
        string get_name(); // return member variables: name
        int get_price();  // return member variables: price
        void print_info();  // This function will be implemented in 'Sedan' class, This is a PURE VIRTUAL FUNCTION

        ~Sedan();
};

