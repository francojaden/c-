#include <iostream>
using namespace std;

class Circle{
    public:
       
        Circle(double r) {
            radius = r;
        }

        double getArea() {
            return 3.14 * radius * radius;
        }

        double getCircumference() {
            return 2 * 3.14 * radius;
        }

        double getDiamter() {
            return 2*radius;
        }

        double getRadius() {
            return radius;
        }

        void setRadius(double r) {
            radius = r;
        }
            
        


    private:
    double radius;
};


int main() {
    double radius;
    cout <<"Enter the Radius of the Circle: ";
    cin >> radius;

    Circle circle(radius);
    cout <<"The area of the circle is:  " << circle.getArea() << endl;
    cout <<"The circumference of the circle is: " << circle.getCircumference() << endl;
    cout <<"The diameter of the circle is: " << circle.getDiamter() << endl;
    cout <<"The radius of the circle is: " << circle.getRadius() << '\n';

    circle.setRadius(4);
    cout <<"The area of the new circle is:  " << circle.getArea() << endl;
    cout <<"The circumference of the new circle is: " << circle.getCircumference() << endl;
    cout <<"The diameter of new the circle is: " << circle.getDiamter() << endl;
    cout <<"The radius of new the circle is: " << circle.getRadius() << endl;


    return 0;
}