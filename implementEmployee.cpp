#include<iostream>
#include "header/Employee.h"
int main()
{
	int ch,n,ele,f;
	cout<<"\n Enter n ele = ";
	cin>>n;
	Employee e[n];
	cout<<"\n Inserting elements .....\n";
	for(int i=0;i<n;i++)
	   e[i].setData();
	do
	{
		cout<<"\n 1.Display selected Emp\n 2.Display All\n";
		cout<<"\n 3.------ 4.Exit\n";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n Enter emp Id to search = ";
			cin>>ele;
			f=1;
			for(int i=0;i<n;i++)
			{
				if(e[i],getId()==ele)
				{
					f=0;
					e[i].display();
				}
			}
			if(f==1)
			cout<<"\n Emp does not exist\n";
			break;
			case 2:cout<<"\n ALL RECORDS \n";
			       for(int i=0;i<n;i++)
			       e[i].display();
			       break;
			case 4:break;
			default:cout<<"\n Invalid\n";
		}
	}while(ch!=4);
}
