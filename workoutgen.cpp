#include <iostream>	//needed libraries
#include <cmath>
#include <vector>
#include <string.h>
#include <time.h>
using namespace std;

vector<string> legfocused(int num)
{
	string legs[12] = {"squats", "squat jumps", "squats and boxing", "lunges", "lunge pulses", "star jumps", "donkey kicks", "fire hydrants", "squat pulses", "30 second squat hold", "lunge and kick back", "jump lunges"};

	vector<string> legworkout;
	srand(time(NULL)); //initialize random number generator 

	for(int i = 0; i < num; i++)
	{
		int index = (rand()% 12);
		legworkout.push_back(legs[index]); //add the number of exercises into a string separated by + signs
	}
	
	return legworkout;
}

vector<string> abfocused(int num)
{
	string abs[11] = {"flutter kicks", "jack knifes", "leg raises", "crucnhes", "bicycles", "mountain climber", "plank", "high low plank", "high plank", "criss cross", "russian twist"};
	
	vector<string> abworkout;
	srand(time(NULL)); //initialize random number generator 

        for(int i = 0; i < num; i++)
        {
                int index = (rand()% 11);
                abworkout.push_back(abs[index]); //add the number of exercises into a vector
        }

	return abworkout;
}

vector<string> HITT(int num)
{
	string hitt[6] = {"jumping jacks", "burpees", "half burpees", "squat jumps", "high knees", "squats and leg extension"};

	srand(time(NULL)); //initialize random number generator
        vector<string> hittworkout;

        for(int i = 0; i < num; i++)
        {
                int index = (rand()% 6);
                hittworkout.push_back(hitt[index]); //add the number of exercises into a vector
        }

        return hittworkout;
}

int main()
{
	string name = "";
	int numabs = 0;
	int numlegs = 0;
	int numhitt = 0;	

	cout<<"Enter your name: ";
	getline(cin, name);
	
	cout<<"Enter the number of leg exercises: ";
	cin>>numlegs;

	cout<<"Enter the number of ab exercises: ";
	cin >>numabs;

	cout<<"Enter the number of HITT exercises: ";
	cin>>numhitt;


	vector<string>legs = legfocused(numlegs);
	vector<string>abs = abfocused(numabs);
	vector<string>hitt = HITT(numhitt);

	cout<<endl<<endl<<endl;
	cout<<"Here is your workout for today: "<<endl;
	cout<<"Repeat this set of exercises 3 times. "<<endl;
	cout<<"Do each exercise for 45 seconds" <<endl;
	
	cout<<"L E G S: "<<endl;
	for(int i = 0; i < legs.size(); i++)
	{
		cout<< (i + 1)<<". \t"<<legs[i]<<endl;
	}
	
	cout<<endl;

	cout<<"A B S: "<<endl;
	for(int i = 0; i < abs.size(); i++)
	{
		cout<<(i + 1)<< ". \t"<<abs[i]<<endl;
	}
	 
	cout<<endl;
	
	cout<<"H I T T: "<<endl;
	for(int i = 0; i < hitt.size(); i++)
	{
		cout<<(i+1)<<". \t"<<hitt[i]<<endl;
	}
	cout<<endl;
	cout<<"Enjoy your workout "<<name<<endl;
	return 0;	
}
