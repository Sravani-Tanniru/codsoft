#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>

using namespace std;

int main()
{
	system("color Df");
	
	srand(time(0));
	int guessing = (rand()%100)+1;
	int n=0;
	int temp = 1;
	int chances=5;
	cout<<"\n";
	cout<<"\n";
	cout<<"--> WELCOME TO THE NUMBER GUESSING GAME <--"<<endl;
	cout<<"You have to guess a number between 1-100"<<endl;
	cout<<"Let's starts the game!!"<<endl;
	cout<<"\n";
	
	do{
		cout<<"Remaining chances-"<<chances<<endl;
		cout<<"Enter your guess : ";
		cin>>n;

		if(n==guessing)
		{
			cout<<"Congratulations!!You won!!"<<endl;
			temp = 0;
		}
		else if(n<guessing)
		{
			cout<<"Guess higher"<<endl;
		}
		else if(n>guessing)
		{
			cout<<"Guess lower"<<endl;
		}
		if(chances==0 && n!=guessing)
		{
			cout<<"***Sorry your chances has been completed***"<<endl;
			cout<<"Thanks for playing"<<endl;
			cout<<"The random number is - "<<guessing<<endl;
			temp=0;
		}
		chances--;
	}while(temp == 1);
	
	return 0;
}
