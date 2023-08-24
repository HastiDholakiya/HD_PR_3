#include<iostream>
using namespace std;

class A
{
	public:
		int id;
		string name;
		string role;
		double salary;
		int experience;
		string comp_name;
		string address;
		string email;
		double contact;
		
		setInfo()
		{
			cout << "Employee ID : ";
			cin >> id;
			cout << "Employee Name : ";
			cin >> name;
			cout << "Employee Role : ";
			cin >> role;
				
		}
};

class B : public A
{
	public:
		
		setInfo2()
		{
			cout << "Employee Salary : ";
			cin >> salary;
			cout << "Employee Experience : ";
			cin >> experience;
				
		}
};

class C : public B
{
	public:
		
		setInfo3()
		{
			cout << "Employee Company name : ";
			cin >> comp_name;
			cout << "Employee Address : ";
			cin >> address;
				
		}
};

class D : public C
{
	public:
		
		setInfo4()
		{
			cout << "Employee Email : ";
			cin >> email;
			cout << "Employee Contact : ";
			cin >> contact;
				
		}
		
		getInfo()
		{
			cout << "ID : " << id << endl;
			cout << "Name : " << name << endl;
			cout << "Role : " << role << endl;
			cout << "Salary : " << salary << endl;
			cout << "Experience : " << experience << endl;
			cout << "Company name : " << comp_name << endl;
			cout << "Address : " << address << endl;
			cout << "Email : " << email << endl;
			cout << "Contact : " << contact << endl;
		}
};

int main()
{
	D data;
	
	data.setInfo();
	data.setInfo2();
	data.setInfo3();
	data.setInfo4();
	data.getInfo();
	
	return 0;
	
}
