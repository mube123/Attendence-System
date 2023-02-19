#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	float in,out;
	int status;
	cout<<"###################"<<endl;
	cout<<"Attendence System"<<endl;
	cout<<"###################"<<endl;
	
	cout<<"Maximum time to enter in the office is= 9:30:00"<<endl;
	// current date/time based on current system
   time_t now = time(0);
   tm *ltm = localtime(&now);
   cout << "Time: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   
   cout<<"Your arrival time: "<<ltm->tm_hour - 9 << ":";
   cout << ltm->tm_min-30<< ":";
   cout << ltm->tm_sec << endl;
   
   cout<<"ENTER YOUR TIME STATUE i.e IN(1) or OUT(2) time";
   cin>>status;
   
   switch(status)
   {
   	case 1:
	   {
	    cout<<"Enter your in time :";
   		cin>>in;
   		if(in>=9.0 && in<=9.30)
   		cout<<"Welcome to the office";
   		else if(in>9.30)
    		 cout<<"This is not good time to come in the office.";
    		 else if(in<9.0)
    			  cout<<"welcome: You are earlier from the office hours";
		break;
	   }
	case 2:
		{
		cout<<"Enter your out time :";
		cin>>out;
		if(out>=5.0 && out<=5.30)
		cout<<"Good Bye";
		else if(out>5.30)
				cout<<"You are leaving office late. It is better to leave in time.";
				else if(out<5.0)
						cout<<"You are leaving office earlier than office time.It is not good.";
		}
    
	
	}
	
}
