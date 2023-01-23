// Qns 1
// Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
// 1 - having no parameter - values of both length and breadth are assigned zero.
// 2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
// 3 - having one number as parameter - both length and breadth are assigned that number.
// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.



// Solution -
                                                  
 #include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle() { length = 0; width = 0; }
    Rectangle(float l, float w) { length = l; width = w; }
    Rectangle(float l) { length = l; width = l; }

    float area() {return length * width; }


private:
    float length, width;
};

int main() {
    Rectangle r1;
    Rectangle r2(8,3);
    Rectangle r3(2);

cout<<"Area 1: "<<r1.area()     <<endl;
cout<<"Area 2: "<<r2.area()     <<endl;
cout<<"Area 3: "<<r3.area()     <<endl;

    return 0;
}