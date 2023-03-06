
#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;
class Customer{
    protected:
        int _customer_ID;
        string _name; // customer's name
        string _preference_brand;  // the brand that customer interested in
        int _max_budget; // The max budget that customer have.
    public:
        Customer(int customer_ID); // Constructor
        string get_preference_brand(); // return the customer's preference brand
        string get_name();  // return customer's name
        int get_max_budget();  // return the customer's max budget
        ~Customer(); // destructor
        
};

