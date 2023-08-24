#include<iostream>
using namespace std;

class Animal
{
	public:
		string name;
		int age;
		string place;
		
		setData()
		{
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter origin : ";
			cin >> place;
	    }
		
};

class Zebra : public Animal
{
	public:
	getData1()
	{
		cout << "Zebra Name : " << name << endl;
        cout << "Zebra Age : " << age << endl;
        cout << "Origin : " << place << endl;
	}
};

class Dolphin : public Animal
{
	public:
	getData2()
	{
		cout << "Dolphin Name : " << name << endl;
        cout << "Dolphin Age : " << age << endl;
        cout << "Origin : " << place << endl;
	}
};

int main()
{
			
	Zebra Z;
	Dolphin D;
	
	Z.setData();
	Z.getData1();
	D.setData();
	D.getData2();
	
	return 0;
	
}
