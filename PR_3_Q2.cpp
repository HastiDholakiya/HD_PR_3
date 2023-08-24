#include<iostream>
using namespace std;

class Mother
{
	public:
		dispMother()
		{
			cout << "I'm lucky to know you as a person and even luckier to have you as a mom..." << endl;			
		}
};

class Daughter : public Mother
{
	public:
		dispDaughter()
		{
			cout << "A mother's treasure is her daughter..." << endl;			
		}
};

int main()
{
	Daughter d;
	
	d.dispMother();
	d.dispDaughter();
	
	return 0;
	
}
