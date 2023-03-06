
#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Ute : public Vehicle{ // Ute is a DERIVED CLASS  from vehicle
    protected:
        string _fuel_type; // The fuel type of the Ute
        double _fuel_tank_capacity;  // the capacity of the fuel tank
        int _load_capacity;  // the load capacity of the UTE
        int _fuel_average_distance;  // fuel average distance of the ute
        string _name; // the series of the UTE
    public:
        Ute(); // Constructor 
        Ute(int price, int vehicle_ID, string brand, string fuel_type, double fuel_tank_capacity, int load_capacity, int fuel_average_distance, string name);
                                                // Using initializer list to initialize the member variables
        int get_ID(); // return the ID of the car
        string get_fuel_type();  // return fuel type
        double get_fuel_tank_capacity();  // return fuel tank capacity 
        int get_load_capacity();  // return load capacity 
        int get_fuel_average_distance();  // return the fuel average distance 
        string get_name();  // return name of the UTE
        int get_price();  // return the price of the car
        void print_info();  // This function will be implenmented in 'Ute' class, this is a PURE VIRTUAL FUNCTION. 

        ~Ute();  // destructor
};

