// Qns 2)
// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.


// Solution

#include <iostream>

using namespace std;

class Rectangle
{
    
    private:
        int length;
        int breadth;
    public:
       
        Rectangle(int length, int breadth)
        {
            
            this->length = length;
            this->breadth = breadth;
        }
        
        int Area()
        {
            // calculating and returning Area
            return length * breadth;
        }
};

int main()
{
    
    Rectangle rectangle1(4,5); 
   
    Rectangle rectangle2(5,8); 

    cout<<"\nArea of first rectangle  :"<<rectangle1.Area();
     
    cout<<"\nArea of second rectangle :"<<rectangle2.Area();
    return 0;
}