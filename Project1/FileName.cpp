#include<iostream>
#include<string>
using namespace std;
class Myintroduction
{
	string name;
	int age;

public:
	Myintroduction(string n, int a)
	{
		this->name = n;
		this->age = a;
	}

	void display() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};
int main()
{
	string name;
	int age;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	cin >> age;
	Myintroduction intro(name, age);
	intro.display();
	return 0;
}