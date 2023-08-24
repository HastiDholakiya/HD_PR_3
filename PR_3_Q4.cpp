#include <iostream>
using namespace std;

class basicInfo 
{
public:	
    string name;
    int empId;
    string gender;

    getBasicInfo()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Emp. Id: ";
        cin >> empId;
        cout << "Enter Gender: ";
        cin >> gender;
    }
};

class deptInfo 
{
	public:
    string deptName;
    string assignedWork;
    int time;


    getDeptInfo()
    {
        cout << "Enter Department Name: ";
        cin >> deptName;
        cout << "Enter assigned work: ";
        cin >> assignedWork;
        cout << "Enter time in hours to complete work: ";
        cin >> time;
    }
};

class employee : public basicInfo, public deptInfo 
{
public:
    getEmployeeInfo()
    {
        cout << "Enter employee's basic info: " << endl;
        getBasicInfo();
        cout << "Enter employee's department info: " << endl;
        getDeptInfo(); 
    }
    printEmployeeInfo()
    {
        cout << "Employee's Information is: " << endl;
        cout << "Basic Information...:" << endl;
        cout << "Name: " << name << endl; 
        cout << "Employee ID: " << empId << endl;
        cout << "Gender: " << gender << endl << endl; 

        cout << "Department Information...:" << endl;
        cout << "Department Name: " << deptName << endl; 
        cout << "Assigned Work: " << assignedWork << endl;
        cout << "Time to complete work: " << time << endl;
    }
};

int main()
{
    employee emp;

    emp.getEmployeeInfo();
    emp.printEmployeeInfo();

    return 0;
}

