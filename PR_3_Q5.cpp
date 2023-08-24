#include <iostream>
using namespace std;

class Number 
{
	public:
    int num;
    
    getNumber()
    {
        cout << "Enter an integer number: ";
        cin >> num;
    }

    int returnNumber()
    {
        return num;
    }
};

class Square : public Number {
public:
    getSquare()
    {
        int num, sqr;
        num = returnNumber(); 
        sqr = num * num;
        return sqr;
    }
};

class Cube : public Number 
{
public:
    getCube()
    {
        int num, cube;
        num = returnNumber(); 
        cube = num * num * num;
        return cube;
    }
};

int main()
{
    Square obj;
    Cube obj2;
    int sqr, cube;

    obj.getNumber();
    sqr = obj.getSquare();
    cout << "Square of is: " << sqr << endl;

    obj2.getNumber();
    cube = obj2.getCube();
    cout << "Cube   of is: " << cube << endl;

    return 0;
}

