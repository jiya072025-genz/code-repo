
#include <iostream>
using namespace std;
class marksvector
{
	int* marks;
	int size;
public:
	marksvector(int s)
	{
		size = s;
		marks = new int[size];
		for (int i=0;i<size;i++)
		{
			marks[i] = 0;
		}
	}
	marksvector(const marksvector& other)
	{
		size = other.size;
		marks = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			marks[i] = other.marks[i];
		}
	}
	marksvector& operator =(const marksvector& other)
	{
		if (this == &other)
			return *this;
		delete[] marks;
		size = other.size;
		marks = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			marks[i] = other.marks[i];
		}
		return *this;
	}
	~marksvector()
	{
		delete[]marks;
	}
	void setMark(int index, int value)
	{
		if (index >= 0 && index < size) {
			marks[index] = value;
		}
		else {
			cout << "Invalid index!" << endl;
		}
	}
	int getMark(int index) {
		if (index >= 0 && index < size) {
			return marks[index];
		}
		else {
			cout << "Invalid index!" << endl;
			return -1;
		}
	}
	void displayMarks()
	{
		cout << "Marks: ";
		for (int i = 0; i < size; i++) {
			cout << marks[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	marksvector c1(3);
	c1.setMark(2, 99);
	c1.setMark(1, 79);
	c1.setMark(0, 59);
	cout << "Marks foe c1: ";
	c1.displayMarks();
	marksvector c2 = c1;
	cout << "Marks for c2: ";
	c2.displayMarks();
	c1.setMark(2, 29);
	cout << " after modifying Marks foe c1: ";
	c1.displayMarks();
	cout << " after modifying Marks foe c2 without changes: ";
	c2.displayMarks();
}
