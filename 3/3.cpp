// Qns 3
// Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters.
//  The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the area of square
//  has one parameter which is the side of the square.



// Solution_

#include <iostream>
using namespace std;
class A{
 public :
 A(int length , int width)
 {
 cout<<"area  of rectangle is = : "<<length*width<<endl;
 }
 A(float a)
 {
 cout<<"area of sqauare is = "<<a*a<<endl;
 }
};
int main ()

{
  A aa(3); 
  A bb(3,3); 
}