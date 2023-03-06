#pragma once
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"

using namespace std;


class Store{
    protected:
        Vehicle ** _store_vehicles; // This is an array of pointers to Vehicle.
        int _capacity; // The max capacity that the Store have (max number of car space)
    public:
        Store(); // Constructor
        Store(int capacity); // Initialize the store
        int get_capacity();  // get the capacity of the store
        void add_vehicle(Vehicle *new_car, int *num_added);  //  add vehicle to the store. the functino takes a pointer of new car and a pointer of counting variable
        void get_vehicle_by_brand(string target_brand, int *number_added); // this function does not actually have a return type, it will printout all 
                                                                        // all the information of the specified vehicle
        void get_vehicle_by_price(int target_price, int *number_added); // sort by price, then print all the info of the targeted vehicle
        void get_vehicle_by_brand_and_price(string target_brand, int target_price, int *number_added); // sort by price and brand, then print
        void print_menu(); // Print the functional menu.
        ~Store(); // destructor
};

