#include<iostream>
using namespace std;

class Shape
{
	public:
		float height;
		float width;
		float area;
		
		setData(float height ,float width)
		{
			this -> height=height;
			this -> width=width;
			this -> area=area;
			
		}
};

class Triangle : public Shape
{
	public:
	getData1()
	{
		area = (height * width)/2;
		cout << "Area of triangle : " << area;
	}
};

class Rectangle : public Shape
{
	public:
	getData2()
	{
		area = height * width;
		cout << "Area of rectangle : " << area;
	}
};

int main()
{
		float height;
		float width;
		float area;
	
	        cout << "Enter height : ";
			cin >> height;
			cout << "Enter width : ";
			cin >> width;
			
	Triangle T;
	Rectangle R;
	
	T.setData(height , width);
	T.getData1();
	cout << endl;
	R.setData(height , width);
	R.getData2();
	
	 
}
