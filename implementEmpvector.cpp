#include<iostream>
#include<vector>
#include "header/Employee.h"
int main()
{
	int ch,n,ele,f;
	Employee ob;
	vector<Employee> v;
	do
	{
		cout<<"\n 1.Display selected Emp\n 2.Display All\n";
		cout<<"\n 3.Insert\n 4.Delete 5.Exit\n";
		cout<<"\n Enter choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n Enter emp Id to search = ";
			cin>>ele;
			f=1;
			for(int i=0;i<v.size();i++)
			{
				if(v[i].getId()==ele)
				{
					f=0;
					v[i].display();
				}
			}
			if(f==1)
			cout<<"\n Emp does not exist\n";
			break;
			case 2:cout<<"\n ALL RECORDS \n";
			       for(int i=0;i<v.size();i++)
			       v[i].display();
			       break;
			case 3:ob.setData();
			       v.push_back(ob);
			       break;
			case 4:cout<<"\n Enter emp Id to delete =";
			       cin>>ele;
			       f=1;
			       for(auto i=v.begin(); i!=v.end(); ++i)
			       {
			       	  if(i->getId()==ele)
			       	  {
			       	  	f=0;
			       	  	v.erase(i);
			       	  	break;
					  }
				   }
			case 5:break;
			default:cout<<"\n Invalid\n";
		}
	}while(ch!=5);
}
