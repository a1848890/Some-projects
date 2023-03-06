#include<iostream>
#include<string>
#include"printable.h"
#include"Vehicle.h"
#include"Sedan.h"
#include"Wagon.h"
#include"Ute.h"
#include"Store.h"
#include"Customer.h"

using namespace std;



int main(){
    /*define store*/
    Store my_store(50);
    my_store.print_menu();
    cout << "################    Please enter 'Stocks' to add all stocks into the store initially       ################\n";


    /*define wagon*/
    Vehicle* wagon1 = new Wagon(23000, 1628, "Toyota", "Corolla Fielder"); // Toyota-ID : 1XXX
    Vehicle* wagon2 = new Wagon(44888, 3320, "Audi", "A4 allroad Auto quattro MY16"); // Audi-ID : 3XXX
    Vehicle* wagon3 = new Wagon(55900, 25220, "Volvo", "Volvo V60 T5 Momentum Auto AWD "); // Volvo-ID :25XXX
    Vehicle* wagon4 = new Wagon(32998, 26200, "SKODA", "SKODA Superb 162TSI Auto"); // SKODA-ID :26XXX
    Vehicle* wagon5 = new Wagon(35900, 5520, "Audi", "Subaru Levorg 2.0 GT-S VM Auto AWD"); // Subaru-ID :5XXX
    Vehicle* wagon6 = new Wagon(32800, 21111, "Volkswagon", "Volkswagen Golf 110TSI Highline 7 Auto"); // Volkswagon-ID :21XXX
    Vehicle* wagon7 = new Wagon(78888, 8920, "Benz", "Mercedes-Benz C-Class C43 AMG Auto 4MATIC"); // Benz-ID :8XXX
    Vehicle* wagon8 = new Wagon(43790, 16120, "Mazda", "Mazda 6 Atenza GL Series Auto"); // Mazda-ID :16XXX
    Vehicle* wagon9 = new Wagon(28950,27200, "Peugeot", "Peugeot 508 Allure Auto"); // Peugeot-ID : 27XXX
    Vehicle* wagon10 = new Wagon(71990, 28990, "Mini", "MINI Clubman John Cooper Works Auto ALL4"); // MINI-ID : 28XXX
    Vehicle* wagon11 = new Wagon(40690, 28991, "Mini", "MINI Clubman Cooper S Manual"); // MINI-ID :28XXX
    Vehicle* wagon12 = new Wagon(251689, 29901, "Porsche", " Porsche Panamera 4 971 Auto AWD MY22"); // Porsche-ID :29XXX

    /*define sedan*/
    Vehicle* sedan1 = new Sedan(30890, 1644,"Toyota", "Toyota Camry Ascent", 7.8 ,5); // Toyota-ID : 1XXX
    Vehicle* sedan2 = new Sedan(62950, 8012, "Benz", "Mercedes-Benz C-Class C300 Auto", 6.5, 5); //Benz-ID : 8XXX 
    Vehicle* sedan3 = new Sedan(79990, 4129, "Holden", "Holden Commodore SSV Readline VF Series II Auto", 12.9 , 5); //Holden-ID : 4XXX 
    Vehicle* sedan4 = new Sedan(48490, 5110,"Subaru","Subaru Liberty 2.5i 6GEN Auto AWD", 7.3, 5); // Subaru-ID : 5XXX
    Vehicle* sedan5 = new Sedan(27800, 6810,"Mitsubishi" ,"Mitsubishi Lancer LS CF Auto", 7.3, 5); //Mitsubishi-ID : 6XXX 
    Vehicle* sedan6 = new Sedan(39000, 7331,"Honda" ,"Honda Accord V6 Luxury Auto", 10, 5); //Honda-ID : 7XXX 
    Vehicle* sedan7 = new Sedan(99800, 18102,"Maserati" ,"Maserati Quattroporte S Auto", 9.6, 5); //Maserati-ID : 18XXX 
    Vehicle* sedan8 = new Sedan(25880, 10078,"Kia" ,"Kia Cerato Sport Auto", 7.4, 5); //Kia-ID : 10XXX 
    Vehicle* sedan9 = new Sedan(242990, 11002,"BMW" ,"BMW M5 Competition F90 LCI Auto", 10.6, 5); //BMW-ID : 11XXX 
    Vehicle* sedan10 = new Sedan(74888, 12102,"Lexus" ,"Lexus LS LS460 F Sport Auto", 10.7, 5); //Lexus-ID : 12XXX 
    Vehicle* sedan11 = new Sedan(43990, 13201,"Jaguar" ,"Jaguar XE 20d Prestige Auto", 4.2, 5); //Jaguar-ID : 13XXX 
    Vehicle* sedan12 = new Sedan(31081, 16143,"Mazda" ,"Mazda 2 G15 GT DL Series Auto", 5.3, 5); //Mazda-ID : 16XXX 
    Vehicle* sedan13 = new Sedan(25990, 15203,"Hyundai" ,"Hyundai Elantra Elite Auto", 7.2, 5); //Hyundai-ID : 15XXX 
    Vehicle* sedan14 = new Sedan(69888, 14234,"Ford" ,"Ford Falcon XR8 FG X Auto", 13.7, 5); //Ford-ID : 14XXX 
    Vehicle* sedan15 = new Sedan(23490, 17234,"Renault" ,"Renault Megane Zen Auto",6.1 , 5); //Renault-ID : 17XXX 
    Vehicle* sedan16 = new Sedan(15900, 19234,"Nissan" ,"Nissan Pulsar ST B17 Series2 Manual", 7.2, 5); //Nissan-ID : 19XXX 
    Vehicle* sedan17 = new Sedan(49000, 20234,"Chrysler" ,"Chrysler 300 SRT-8 Core Auto", 13, 5); //Chrysler-ID : 20XXX 
    
    /* define Ute 
    Ute :: Ute(int price, int vehicle_ID, string brand, string fuel_type, double fuel_tank_capacity, int load_capacity, int fuel_average_distance)
    : Vehicle(price, vehicle_ID,brand), _fuel_type(fuel_type), _fuel_tank_capacity(fuel_tank_capacity), _fuel_average_distance(fuel_average_distance){
    }
   */


    Vehicle* ute1 = new Ute(50888, 1789, "Toyota", "Diesel", 80, 2800, 899, "Toyota Hilux SR Hi-Rider Auto 4X2 Double Cab"); // Toyota-ID : 1XXX
    Vehicle* ute2 = new Ute(38500, 7001, "Holden", "Diesel", 76, 2300, 835, "Holden Colorado LTZ RG Auto 4X4"); // Holden-ID : 7XXX
    Vehicle* ute3 = new Ute(74900, 21002, "Volkswagon", "Diesel", 76, 2900, 875, "Volkswagen Amarok TDI580 Highline 2H Auto 4MOTION Perm"); // Volkswagon-ID : 21XXX
    Vehicle* ute4 = new Ute(115000, 22010, "RAM", "Diesel", 98, 4500, 803, "RAM 1500 Laramie SWB Auto 4X4 MY19" );//RAM-ID : 22XXX
    Vehicle* ute5 = new Ute(63996, 23004, "Isuzu", "Diesel", 76, 3500, 776, "Isuzu D-MAX LS-M Auto 4x4 MY22" );//Isuzu-ID : 23XXX
    Vehicle* ute6 = new Ute(41950, 16201,"Mazda", "Diesel", 80, 3500, 860, " Mazda BT-50 XTR Hi-Rider UR Auto 4x2 Dual Cab" );//Mazda-ID : 16XXX
    Vehicle* ute7 = new Ute(41990, 19010, "Nissan", "Diesel", 80, 3500, 899, "Nissan Navara ST-X D23 Series 2 Auto 4x4 Dual Cab" );//Nissan-ID :19XXX
    Vehicle* ute8 = new Ute(71990, 14020, "Ford", "Diesel", 80, 4500, 803, " Ford Ranger FX4 PX MkIII Auto 4x4 MY21.75 Double Cab" );//Ford-ID :14XXX
    Vehicle* ute9 = new Ute(86950, 24310, "Jeep", "Diesel", 83, 4500, 669, "2021 Jeep Gladiator Rubicon Auto 4x4 MY21 Dual Cab " );//Jeep-ID :24XXX



    int number_of_added = 0; // define counting variable as a pointer.

    string outer_input;

    while (cin >> outer_input){ // outer while loop
        if (outer_input == "Stocks" || outer_input == "stocks") {  // if-statement(add stock) begin here
            /*add vehicle*/
            ///////////////////////########  Add Wagon  ############//////////////////////////
            my_store.add_vehicle(wagon1, &number_of_added);
            my_store.add_vehicle(wagon2, &number_of_added);
            my_store.add_vehicle(wagon3, &number_of_added);
            my_store.add_vehicle(wagon4, &number_of_added);
            my_store.add_vehicle(wagon5, &number_of_added);
            my_store.add_vehicle(wagon6, &number_of_added);
            my_store.add_vehicle(wagon7, &number_of_added);
            my_store.add_vehicle(wagon8, &number_of_added);
            my_store.add_vehicle(wagon9, &number_of_added);
            my_store.add_vehicle(wagon10, &number_of_added);
            my_store.add_vehicle(wagon11, &number_of_added);
            my_store.add_vehicle(wagon12, &number_of_added);

            ///////////////////////########  Add Sedan  ############//////////////////////////
            my_store.add_vehicle(sedan1, &number_of_added);
            my_store.add_vehicle(sedan2, &number_of_added);
            my_store.add_vehicle(sedan3, &number_of_added);
            my_store.add_vehicle(sedan4, &number_of_added);
            my_store.add_vehicle(sedan5, &number_of_added);
            my_store.add_vehicle(sedan6, &number_of_added);
            my_store.add_vehicle(sedan7, &number_of_added);
            my_store.add_vehicle(sedan8, &number_of_added);
            my_store.add_vehicle(sedan9, &number_of_added);
            my_store.add_vehicle(sedan10, &number_of_added);
            my_store.add_vehicle(sedan11, &number_of_added);
            my_store.add_vehicle(sedan12, &number_of_added);
            my_store.add_vehicle(sedan13, &number_of_added);
            my_store.add_vehicle(sedan14, &number_of_added);
            my_store.add_vehicle(sedan15, &number_of_added);
            my_store.add_vehicle(sedan16, &number_of_added);
            my_store.add_vehicle(sedan17, &number_of_added);


            ///////////////////////########  Add Ute  ############//////////////////////////
            my_store.add_vehicle(ute1, &number_of_added);
            my_store.add_vehicle(ute2, &number_of_added);
            my_store.add_vehicle(ute3, &number_of_added);
            my_store.add_vehicle(ute4, &number_of_added);
            my_store.add_vehicle(ute5, &number_of_added);
            my_store.add_vehicle(ute6, &number_of_added);
            my_store.add_vehicle(ute7, &number_of_added);
            my_store.add_vehicle(ute8, &number_of_added);
            my_store.add_vehicle(ute9, &number_of_added);


            my_store.print_menu();

        } // if-statement (add stock) ends here
    
    /**/ 

        else if (outer_input == "Customer" || outer_input == "customer") { // if-statement(customer service) begin 
            Customer customer1(1);

            my_store.get_vehicle_by_brand_and_price(customer1.get_preference_brand(), customer1.get_max_budget(), &number_of_added);
            
            char show_lower_price;
            cout << "Are you willing to see vehicles which price are lower than your budget?\n";
            cout << "Enter [Y/y] for 'Yes',[N/n] for 'No'\n";
            

            while (cin >> show_lower_price) {
                if (show_lower_price == 'y' || show_lower_price == 'Y'){
                    my_store.get_vehicle_by_price(customer1.get_max_budget(), &number_of_added);
                    break;
                }
                else if (show_lower_price == 'N' || show_lower_price == 'n') break;
                else{
                    cout << "Please enter a valid input to continue\n";
                }
            }
    
            char show_same_brand;
            cout <<"Are you willing to see vehicles with the made you specify but may over your budget?\n";
            cout << "Enter [Y/y] for 'Yes',[N/n] for 'No'\n";
            
            while (cin >> show_same_brand) {
                if (show_same_brand == 'y' || show_same_brand == 'Y'){
                    my_store.get_vehicle_by_brand(customer1.get_preference_brand(), &number_of_added);
                    break;
                }
                else if (show_same_brand == 'N' || show_same_brand == 'n') break;
                else {
                    cout << "Please enter a valid input to continue\n";
                }
            }

            my_store.print_menu();

        } // if-statement (customer service) end



        else if (outer_input == "price" || outer_input == "Price") {
            int temp_input_price;
            cout << "Please enter the maximum price: \n";
            cin >> temp_input_price;
            my_store.get_vehicle_by_price(temp_input_price, &number_of_added);
            my_store.print_menu();
        
        }

        else if (outer_input == "brand" || outer_input == "Brand") {
            string temp_input_brand;   /*start coding here to check the input next time*/
            cout << "Please enter a brand: \n";
            cin >> temp_input_brand;
            my_store.get_vehicle_by_brand(temp_input_brand, &number_of_added);
            my_store.print_menu();

        }


        else if(outer_input == "Add" || outer_input == "add") { // add single vehicle
            string temp_body_type;
            cout  << "Please enter the body type: \n";
            cin >> temp_body_type;
            
            int temp_price;
            cout << "Please enter the price for the new vechcile: \n";
            cin >> temp_price;
            while(std::cin.fail()) {
                cout << "Please enter a integer for the price\n" << std::endl;
                cin.clear();
                cin.ignore(256,'\n');
                cin >> temp_price;
            }

            string temp_made;
            cout << "Please enter the made for the new vehicle: \n";
            cin >> temp_made;

            int temp_ID;
            cout << "Please enter the Vechicle ID for the new Vehicle: \n";
            cin >> temp_ID;

            if (temp_body_type == "sedan" || temp_body_type == "Sedan") {
          // Vehicle* sedan1 = new Sedan(30890, 1644,"Toyota", "Toyota Camry Ascent", 7.8 ,5); // Toyota-ID : 1XXX
                cout << "The Vechicle to be added is Sedan\n";

                string new_sedan_name;
                cout << "Please enter the name of the new Sedan\n";
                cin >> new_sedan_name;

                double new_sedan_fuel_consumption_100km;
                cout << "Please enter the fuel consumption Liter/100km for the new Sedan: \n";
                cin >> new_sedan_fuel_consumption_100km;
                while(std::cin.fail()) {
                    cout << "Please enter a valid number for fuel consumption \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_sedan_fuel_consumption_100km;
                }

                int new_sedan_seats_number;
                cout << "Please enter the seats number for the new Sedan: \n";
                cin >> new_sedan_seats_number;
                while(std::cin.fail()) {
                    cout << "Please enter an integer for seats number \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_sedan_seats_number;
                }

                Vehicle * new_sedan = new Sedan(temp_price, temp_ID, temp_made, new_sedan_name, new_sedan_fuel_consumption_100km, new_sedan_seats_number);
                my_store.add_vehicle(new_sedan, &number_of_added);
                cout << "\n#########################           New Sedan Added successfully           ##########################\n";
            }


            else if (temp_body_type == "Wagon" || temp_body_type == "wagon") {
                string new_wagon_series;
                cout << "Please enter the series for the new wagon: \n";
                cin >> new_wagon_series;
                while(std::cin.fail()) {
                    cout << "Please enter a valid string for series \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_wagon_series;
                }
                Vehicle* new_wagon = new Wagon(temp_price, temp_ID, temp_made, new_wagon_series);
                my_store.add_vehicle(new_wagon, &number_of_added);
                cout << "\n#########################           New Wagon Added successfully           ##########################\n";
            }

            else if (temp_body_type == "ute" || temp_body_type == "Ute") {
                string new_ute_fuel_type;
                cout << "Please enter the fuel type for the new Ute:\n";
                cin >> new_ute_fuel_type;
                while(std::cin.fail()) {
                    cout << "Please enter a valid string for fuel type: \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_ute_fuel_type;
                }
                
                
                int new_ute_fuel_tank_capacity;
                cout << "Please enter the fuel tank capacity fot the new Ute: \n";
                cin >> new_ute_fuel_tank_capacity;
                while(std::cin.fail()) {
                    cout << "Please enter a valid integer for fuel tank capacity: \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_ute_fuel_tank_capacity;
                }

                int new_ute_max_load_capacity;
                cout << "Please enter the max load capacity for the new Ute: \n";
                cin >> new_ute_max_load_capacity;
                while(std::cin.fail()) {
                    cout << "Please enter a valid integer for the max load capacity: \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_ute_max_load_capacity;
                }

                int new_ute_average_fuel_distance;
                cout << "Please enter the average fuel distance for the new Ute: ";
                cin >> new_ute_average_fuel_distance;
                while(std::cin.fail()) {
                    cout << "Please enter a valid integer for average fuel distance: \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_ute_average_fuel_distance;
                }

                string new_ute_name;
                cout << "Please enter the name of the new Ute: ";
                cin >> new_ute_name;
                while(std::cin.fail()) {
                    cout << "Please enter a valid string for the name: \n" << std::endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> new_ute_name;
                }

                Vehicle* new_ute = new Ute(temp_price, temp_ID, temp_made, new_ute_fuel_type, new_ute_fuel_tank_capacity,new_ute_max_load_capacity, new_ute_average_fuel_distance,new_ute_name);
                my_store.add_vehicle(new_ute, &number_of_added);
                cout << "\n#########################            New Ute Added successfully            ##########################\n";
            }

            else {
                cout << "Please enter a valid body type\n";
            }
            
            my_store.print_menu();
            cout << "#####################         Enter operations to continue or type 'qa' to end        #####################\n";
        }



        else if (outer_input == "qa") {
            break;  // end the outer while loop if the user typed "qa";
        }

        else {
            cout << "########################                      Command not found                    ########################\n"; // outer commmand Invalid input
            cout << "########################                 Please enter a VALID command              ########################\n";
        }
    
    } // end outer while loop    
    return 0;
 }



