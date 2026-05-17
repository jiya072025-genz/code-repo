#include <iostream>
using namespace std;
class complex
{
	int real;
	int imaginary;
public:
	//default constructor
	complex()
	{
		real = 0;
		imaginary = 0;
	}
	complex(int r, int i)//parameterized constructor
	{
		real = r;
		imaginary = i;
	}
	complex(const complex& obj)//copy constructor
	{
		real = obj.real;
		imaginary = obj.imaginary;
	}
	complex& operator=(const complex& obj)// = operator defination
	{
		if (this != &obj)
		{
			real = obj.real;
			imaginary = obj.imaginary;
			return *this;
		}
	}
	complex& operator+(const complex& obj)// + operator defination
	{
		complex temp;
		temp.real = real + obj.real;
		temp.imaginary = imaginary + obj.imaginary;
		return temp;
	}
	complex& operator-(const complex& obj)// - operator defination
	{
		complex temp;
		temp.real = real - obj.real;
		temp.imaginary = imaginary - obj.imaginary;
		return temp;
	}
	complex& operator*(const complex& obj)// * operator defination
	{
		complex temp;
		temp.real = real* obj.real+ imaginary *obj.imaginary;
		temp.imaginary = imaginary * obj.real - real*obj.imaginary;
		return temp;
	}
	void display()
	{
		cout << real;
		if (imaginary >= 0)
		{
			cout << "+" << imaginary << "i";
		}
		else
			cout << "-" << -imaginary << "i";
	}
};
int main()
{
	complex j1(6,-6);
	complex j2(5, 3);
	complex sum=j1+j2;
	cout << "Sum is:";
	sum.display();
	cout << endl;
	complex prod = j1 * j2;
	cout << "prod is:";
	prod.display();
	cout << endl;
	complex sub = j1 - j2;
	cout << "Sub is:";
	sub.display();
	cout << endl;
}
