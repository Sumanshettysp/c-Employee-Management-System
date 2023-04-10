#include<iostream>
using namespace std;
class Employee
{
	private:
		string empName;
		int empId;
		float empSal;
		string empEmail;
		string empSkills[3];
	public:
		void setData();
	    float getSal();
		string getEmail();
		string getName();
		int getId();
		void display();
};
void Employee::setData()
{
	cout<<"\n ENTER EMP NAME = ";
	cin.ignore();
	getline(cin,empName);
	cout<<"\n ENTER EMP ID = ";
	cin>>empId;
	cout<<"\n ENTER EMP SALARY = ";
	cin>>empSal;
	cout<<"\n ENTER EMP EMAIL = ";
	cin>>empEmail;
	cout<<"\n ENTER 3 SKILLS ";
	for(int i=0;i<3;i++)
	{
		cout<<"\n SKILL ["<<i+1<<"] = ";
	    cin>>empSkills[i];
	}
}
float Employee::getSal()
{
	return empSal;
}
string Employee::getName()
{
	return empName;
}
int Employee::getId()
{
	return empId;
}
void Employee::display()
{
	cout<<"\n----------------------\n";
	cout<<"\n EMPID    = " <<empId;
	cout<<"\n EMPNAME    = " <<empName;
	cout<<"\n EMPSAL    = " <<empSal;
	cout<<"\n EMPEMAIL    = " <<empEmail;
	cout<<"\n SKILLS   \n";
	for(int i=0;i<3;i++)
	   cout<<i+1<<" i "<<empSkills[i]<<endl;
}
