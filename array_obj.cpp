#include<iostream>
using namespace std;

class emp
{
	public:
		int id;
		char name[50];
		int salary;

		void get()
		{
			cout << "Please Enter the emp id :" <<endl;
			cin >> id;
			cout << "Please enter the emp name :" <<endl;
			cin >>name;
			cout << "Please enter the emp salary" <<endl;
			cin >>salary;
		}
		void display()
		{
			cout << "Employee id is :" << id <<endl;
			cout << "Employee name is :" << name <<endl;
			cout << "Employee salary :" << salary << endl;
		}
};

int main()
{
	emp obj[3];
	int i;

	for(i=0;i<3;i++)
		obj[i].get();
	for(i=0;i<3;i++)
		obj[i].display();

	return 0;
}
