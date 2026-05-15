#include<iostream>
#include<string>
using namespace std;
/*class shape*///  abstract class cant make objects of this class
{
public:
	virtual void draw() = 0; //pure virtual function
};
class circle :public shape
{
public:
	void draw()
	{
		cout << "Drawing a circle\n";
	}

};
class parent
{
public:
	void showinfo()
	{
		cout << "This is parent class\n";
	}
	virtual void hello()
	{
		cout << "HEllo from parent\n";
	}

};
class child :public parent
{
public:
	void showinfo()
	{
		cout << "This is child class\n";
	}
	void hello()
	{
		cout << "HEllo from child\n";
	}
};
int main()
{
	parent pp;
	pp.hello();
	pp.showinfo();
	child p;
	p.hello();
	p.showinfo();
	circle c;
	c.draw();
	return 0;
}
