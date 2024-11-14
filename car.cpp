#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string model;
    string make;
    int year;

    
    Car(string x, string y, string z);

    Car(string x, string y, int z) {
        make = x;
        model = y;
        year = z;
    }
};

int main() {
    Car obj1("Ford", "GT" , 2005);
    Car obj2("Dodge", "Charger Hellcat", 2023);

    cout <<obj1.make<<" "<<obj1.model<<" "<<obj1.year <<"\n";
    cout <<obj2.make<<" "<<obj2.model<<" "<<obj2.year <<"\n";
}