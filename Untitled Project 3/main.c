 model;
    int year;
    bool available;
    double rentPrice;
};

// Function to display car information
void displayCar(const Car& car) {
    cout << "-----------------------------------------------" << endl;
    cout << "Name: " << car.name << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Available: " << (car.available ? "Yes" : "No") << endl;
    cout << "Rent Price: ?" << car.rentPrice << "/day" << endl;
    cout << "-----------------------------------------------" << endl;#include <iostream>
using namespace std;

// Define a struct to represent a car
struct Car {
    string name;
    string
}

// Function to update car availability
void updateCarAvailability(Car& car, bool rent) {
    car.available = !rent;
    cout << (rent ? "Car rented successfully!" : "Car returned successfully!") << endl;
}
int main() {
    cout<<"**************"<<endl;
    cout<<"======================================"<<endl;
    cout<<"...    .     ....   ...."<<endl;
    cout<<".     . .    ....   .   "<<endl;
    cout<<" ||CAR RENTAL SYSTEM||  "<<endl;
    cout<<".    . . .   ..     ...."<<endl;
    cout<<".   .     .  . .       ."<<endl;
    cout<<"....       . .  .   ...."<<endl;
    cout<<"======================================"<<endl;
    cout<<"**************"<<endl;
  int a;
  do{
   a=0;
   system("CLS");
    string username, password;
    cout << "********" << endl;
    cout << "*       Login      *" << endl;
    cout << "********" << endl;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "carworld" && password == "12345") {
        Car cars[3] = {
            {"Toyota", "Camry", 2020, true, 5000},
            {"Honda", "Civic", 2019, true, 4500},
            {"Ford", "Mustang", 2018, true, 5500}
        };

        int choice;
        while (true) {
            cout << "********" << endl;
            cout << "*     Menu         *" << endl;
            cout << "********" << endl;
            cout << "1. Display cars" << endl;
            cout << "2. Rent a car" << endl;
            cout << "3. Return a car" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "********" << endl;
                    cout << "*  Available Cars  *" << endl;
                    cout << "********" << endl;
                    for (int i = 0; i < 3; i++) {
                        displayCar(cars[i]);
                    }
                    break;
                case 2:
                     
                    cout << "********" << endl;
                    cout << "*    Rent a Car    *" << endl;
                    cout << "********" << endl;
                    int carNumber;
                    cout << "Enter the car number to rent (1-3): ";
                    cin >> carNumber;
                    if (carNumber >= 1 && carNumber <= 3) {
                        if (cars[carNumber - 1].available) {
                            int duration;
                            cout << "Rent price for " << cars[carNumber - 1].name << " " << cars[carNumber - 1].model << " is ?" << cars[carNumber - 1].rentPrice << "/day" << endl;
                            cout << "Enter the number of days: ";
                            cin >> duration;
                            cout << "Total cost: ?" << cars[carNumber - 1].rentPrice * duration << endl;
                            updateCarAvailability(cars[carNumber - 1], true);
                        } else {
                            cout << "Car is not available" << endl;
                        }
                    } else {
                        cout << "Invalid car number" << endl;
                    }
                    break;
                case 3:
                     
                    cout << "********" << endl;
                    cout << "*    Return a Car  *" << endl;
                    cout << "********" << endl;
                    int returnCarNumber;
                    cout << "Enter the car number to return (1-3): ";
                    cin >> returnCarNumber;
                    if (returnCarNumber >= 1 && returnCarNumber <= 3) {
                        if (!cars[returnCarNumber - 1].available) {
                            updateCarAvailability(cars[returnCarNumber - 1], false);
                        } else {
                            cout << "Car is already available" << endl;
                        }
                    } else {
                        cout << "Invalid car number" << endl;
                    }
                    break;
                case 4:
                    return 0;
                default:
                    cout << "Invalid choice" << endl;
            }
        }
    }  
	else {
        cout << "Invalid username or password" << endl;
        system("PAUSE");
        a=a+1;
    }}while(a==1);

    return 0;
    
}