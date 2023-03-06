#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;

class Wagon : public Vehicle{ // Wagon is a DERIIVED CLASS from Vehicle
    protected:
        string _name; // the series of the wagon

    public:
        Wagon(); // constructor
        Wagon(int price, int vehicle_ID,string brand, string name); // Using initializer liat to initialize the wagon
        string get_name(); // return the name of the vehicle
        int get_price(); // return the price of the vehicle
        int get_ID(); // return the ID of the vehicle
        void print_info(); // print all the related information
        ~Wagon(); // destructor 
};
