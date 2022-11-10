#include <iostream>
using std::cin;
using std::cout;
using std::string;

class Car {       
    public: 
        string brand;         
        int speed, price;

        Car (string brand_info, int speed_val, int price_val) {
            brand =  brand_info; speed = speed_val; price = price_val;
        }
};


int main() {
    Car MyCars[3] = { Car("Audi", 500, 10000), 
                      Car("BMW", 400, 8000), 
                      Car("Ferrari", 800, 20000) };

    for (int i = 0; i < 3; i++) {
        cout << "Car" << i << "'s brand, speed & price: "
             << MyCars[i].brand << " " 
             << MyCars[i].speed << " "
             << MyCars[i].price << "\n";
    }

  return 0;
}
