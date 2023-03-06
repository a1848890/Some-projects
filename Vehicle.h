#pragma once

#include "printable.h"
#include <string>

using namespace std;

class Vehicle{ // this is a Base class
    
    protected: // here are some universal member variables for all body style of the vehicles: price, ID and brand 
        int _price;  //member variable : price
        int _vehicle_ID; //member variable : ID
        string _brand;  //member variable : brand
    public:
        Vehicle(); // constructor
        Vehicle(int price, int vehicle_ID, string brand); // Using initializer list to initialize the class
        int get_price(); // return the member variable: price 
        int get_ID();  // return the member variable : ID
        string get_brand();  // return the member variable : brand
        virtual void print_info() = 0; // This is a PURE VIRTUAL FUNCTION, we must implenment in the derived class

        ~Vehicle(); // destructor
};
