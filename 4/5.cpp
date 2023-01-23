// question 5-- Print the sum, difference and product of two complex numbers by creating a 
//  class named 'Complex' with separate functions for each operation whose real 
//  and imaginary parts are entered by the user

#include<iostream>

using namespace std;

class Complex
{
	double re;
	double im;
public:

	Complex(){}

	Complex(double _re, double _im)
	:re(_re),im(_im){}

	Complex(Complex& x)
	{
		re=x.re;
		im=x.im;
	}
	Complex operator+ (Complex& x)
	{
		re=re+x.re;
		im=im+x.im;
		return *this;
	}
	Complex operator- (Complex& x)
	{
		re=re-x.re;
		im=im-x.im;
		return *this;
	}
	Complex operator* (Complex& x)
	{
		re=re*x.re-im*x.im;
		im=re*x.im+x.re*im;
		return *this;
	}
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex&);

};
istream& operator>> (istream& is, Complex& x)
{
	cout<<"Please, enter a real part of complex number: ";
	is>>x.re;
	cout<<"Please, enter an imaginary part of complex number: ";
	is>>x.im;
	return is;
}

ostream& operator<< (ostream& os, Complex& x)
{
	os<<x.re;
	if(x.im>0)
	{
		os<<"+"<<x.im<<"i";	
	}
	else if(x.im<0)
	{
		os<<x.im<<"i";	
	}	
	return os;
}



int main()
{
	Complex a,b;
	cin>>a;
	cin>>b;
	cout<<"You entered two complex numbers:\n";
	cout<<"a= "<<a
		<<"\nb= "<<b<<endl;
	a+b;
	cout<<"a+b= "<<a<<endl;
	a-b;
	cout<<"a-b= "<<a<<endl;
	a*b;
	cout<<"a*b= "<<a<<endl;
}