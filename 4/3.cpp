// Qns 3)
// Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.


// Solution

#include<iostream>
using namespace std;
class Area{
	public:
		int len,width;
		void getArea(){
			cout<<"Enter the length: ";
			cin>>len;
			cout<<"Enter width: ";
			cin>>width;
		}
		void returnArea(){
			cout<<"Area is: "<<len*width;
		}
};
int main(){
	Area A;
	A.getArea();
	A.returnArea();
}