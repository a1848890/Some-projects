
#include<string>
#include<iostream>
#include"printable.h"
#include"Vehicle.h"
#include"Store.h"

using namespace std;


Store :: Store() {} // constructor

Store :: Store(int capacity) : _capacity(capacity) {
    _store_vehicles = new Vehicle*[get_capacity()]; // allocate memory for the array
}

int Store :: get_capacity(){ return _capacity;}

void Store :: add_vehicle(Vehicle* new_car,int *num_added){
    // Test : cout << "In the add function\n\n\n";

    cout << "\n\nAfter adding: \n";
    Vehicle* vehicle_pointers; // create pointers to vehicle
    vehicle_pointers = new_car;  // pass the pointer
    _store_vehicles[*num_added] = vehicle_pointers; // add the first element
    _store_vehicles[*num_added] ->print_info();
    (*num_added)++; // increment the num_adde by one after adding

    //Test : cout << "In the add function: num_added = " << *num_added << endl;
    cout << *num_added << " vehicles added into the store"<< endl;
}




void Store :: get_vehicle_by_brand(string target_brand, int *number_added){
    bool found = 0;
    for (int i=0; i<*number_added; i++){ // traverse the array
        if ((_store_vehicles[i])-> get_ID() == 0) break; // Note: we assume that the default vehicle ID is 0, which means there is no vehicle if vehicle_ID = 0

        if (_store_vehicles[i] ->get_brand() == target_brand) {
            cout << "\n\n##########################################################################" << endl;
            cout << "RESULT FOUND by BRAND\n";
            _store_vehicles[i] -> print_info(); // printout the info 
            found = 1;
        }
    }
    if (found == 0) { 
        cout << "Car not founded by brand.\n";
    }
}

void Store :: get_vehicle_by_price(int target_price, int *number_added){ 
    bool found = 0;
    for (int i=0; i<*number_added; i++){
        if ((_store_vehicles[i])-> get_ID() == 0) break; // Note: we assume that the default vehicle ID is 0, which means there is no vehicle if vehicle_ID = 0
        
        if(_store_vehicles[i] -> get_price() <= target_price) { // get all the vehicle which price are lower than the budget
            cout << "\n\n##########################################################################" << endl;
            cout << "RESULT FOUND by PRICE\n";
            _store_vehicles[i] -> print_info();
            found = 1;
        }
    }
    if (found == 0) { 
        cout << "Car not founded by price.\n";
    }
}

void Store :: get_vehicle_by_brand_and_price(string target_brand, int target_price, int *number_added){
    bool found = 0;
    for (int i=0; i<*number_added; i++){
        if ((_store_vehicles[i])-> get_ID() == 0) break; // Note: we assume that the default vehicle ID is 0, which means there is no vehicle if vehicle_ID = 0

        if ((_store_vehicles[i]->get_price() <= target_price) && (_store_vehicles[i] ->get_brand() == target_brand)) {
            cout << "\n\n##########################################################################" << endl;
            cout << "RESULT FOUND by PRICE & BRAND\n";
            _store_vehicles[i] ->print_info();
            found = 1;
        }
    }
    if (found == 0) { 
        cout << "Car not founded by brand and price.\n";
    }
}


void Store :: print_menu(){
    cout << "\n\n########### This is the car management system ############\n\n";

    cout <<     "        †††††††††††††††   MENU BAR   †††††††††††††††\n";
    cout <<     "  ## Functions ##                     ## Input commands ##   |\n";
    cout <<     "                                                           ––•\n";
    cout <<     " • Add and show current stocks       Command: 'Stocks'       |\n";
    cout <<     "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––•\n";
    cout <<     " • Add Vehicles                      Command: 'Add'          |\n";
    cout <<     "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––•\n";
    cout <<     " • Search by price                   Command: 'Price'        |\n";
    cout <<     "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––•\n";
    cout <<     " • Search by brand                   Command: 'Brand'        |\n";
    cout <<     "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––•\n";
    cout <<     " • Customer service                  Command: 'Customer'     |\n";
    cout <<     "–––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––•\n\n";
    cout << "#####################         Enter operations to continue or type 'qa' to end        #####################\n\n";

}


Store :: ~Store() { // delete all the allocated memory
    delete [] _store_vehicles;
}


