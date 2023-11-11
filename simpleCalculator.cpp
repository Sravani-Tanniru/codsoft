#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	system("color 0f");
	char c,q;
	float a,b;
	
	cout<<"'+'-Addition"<<endl;
	cout<<"'-'-Subraction"<<endl;
	cout<<"'*'-Multiplication"<<endl;
	cout<<"'/'-Division"<<endl;
	
	do{
		cout<<"Enter your choice : ";
		cin>>c;
		cout<<"Enter the numbers : ";
		cin>>a>>b;
		switch(c)
		{
			case'+' : cout<<"Result - "<<(a+b)<<endl;
						break;
			case'-' : cout<<"Result - "<<(a-b)<<endl;
						break;
		 	case'*' : cout<<"Result - "<<(a*b)<<endl;
						break; 
			case'/' : if(b!=0)
						cout<<"Result - "<<(a/b)<<endl;
					  else
					 	cout<<"--> Division with zero is not posiible <--"<<endl;
						break;
			default :cout<<"Enter correct operator!!!"<<endl;
		}
		cout<<"Do you want to continue ? ";
		cin>>q;
	}while(q == 'Y'|q == 'y');
	return 0;
}
