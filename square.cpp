#include <iostream>
using namespace std;

class Square{
    public:

    Square(double side){
        this->SideOfSquare = side;
    }

    double getPerimeter() {
        return 4 * SideOfSquare;
    }

    double getArea() {
        return SideOfSquare * SideOfSquare;
    }

    double getSide() {
        return SideOfSquare;
    }

    void setSide(double newSide) {
        SideOfSquare = newSide; 
    }



    private:
    double SideOfSquare;
};

int main() {

Square s_1(3);

cout << s_1.getArea()<<'\n';
cout << s_1.getPerimeter()<<'\n';
cout << s_1.getSide()<<'\n';

s_1.setSide(6);

cout << s_1.getArea()<<'\n';
cout << s_1.getPerimeter()<<'\n';
cout << s_1.getSide()<<'\n';

    return 0;
}