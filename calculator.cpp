#include<iostream>
using namespace std;
int main()
{
	float sum=0, sub, multi=1, div;
	float num1, num2;
	int choice;

	
	cout<<"\n       Calulator ";
	menu:
	cout<<"\n\nEnter 1 for addtion";
	cout<<"\nEnter 2 for subtraction";
	cout<<"\nEnter 3 for multiplication";
	cout<<"\nEnter 4 for division";
	cout<<"\nEnter 5 to power off\n";

	cout<<"\nEnter your choice: ";
	cin>>choice;


	if (choice==1)
	{
		cout<<"Enter the first number:";
		cin>>num1;
		cout<<"Enter the second number:";
		cin>>num2;
		sum=num1+num2;
		cout<<"\n";
	cout<<"  "<<num1<<" + "<<num2<<" = "<<sum;
	goto menu;

	}
	
		else if (choice==2)
	{
		cout<<"Enter the first number:";
		cin>>num1;
		cout<<"Enter the second number:";
		cin>>num2;
		sub=num1-num2;
		cout<<"\n";
	cout<<"  "<<num1<<" - "<<num2<<" = "<<sub;
	goto menu;
	}
	
	else	if (choice==3)
	{
		cout<<"Enter the first number:";
		cin>>num1;
		cout<<"Enter the second number:";
		cin>>num2;
		sub=num1*num2;
		cout<<"\n";
	cout<<"  "<<num1<<" * "<<num2<<" = "<<sub;
	goto menu;	
	}
	
	else	if (choice==4)
	{
	    cout<<"Enter the first number:";
		cin>>num1;
		cout<<"Enter the second number:";
		cin>>num2;
		sub=num1/num2;
		cout<<"\n";
	cout<<"  "<<num1<<" / "<<num2<<" = "<<sub;
	goto menu;
	}

		else	if (choice==5)
	{ 
		system("cls");
		cout<<"\t\tPower off";
		return 0;
	
	}
	
		
	
	
}
