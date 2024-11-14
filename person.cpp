#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        string occupation;
        int age;

        void eat() {
            cout << "Eating\n";
        }
        void walk() {
            cout <<"Walking\n";
        }
        void sleep() {
            cout <<"Mimir\n";
        }
        void kys() {
            cout << "Has commited suicide\n";
        }
};



int main() {
    Person person1;

    person1.name = "Jay";
    person1.occupation = "Stripper";
    person1.age = 99;

    cout<<person1.name<<'\n';
    cout<<person1.occupation<<'\n';
    cout<<person1.age<<'\n';

    person1.kys();

    cout << '\n';

    Person person2;

    person2.name = "kai";
    person2.occupation = "builder";
    person2.age = 12;

    cout<<person2.name<<'\n';
    cout<<person2.occupation<<'\n';
    cout<<person2.age<<'\n';

    person2.walk();


    return 0;
}