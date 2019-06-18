#include<iostream>
using namespace std;
class time
{
	int hours,minutes,seconds;
	public:
		void read()
		{
			cout<<"Enter hour minute seconds"<<endl;
			cin>>hours>>minutes>>seconds;
		}
		time operator+(time ob)
		{
			time temp;
			temp.hours=hours+ob.hours;
			temp.minutes=minutes+ob.minutes;
			temp.seconds=seconds+ob.seconds;
			if(temp.seconds>60)
			{
			temp.minutes++;
			temp.seconds=temp.seconds%60;
		    }
		    if(temp.minutes>60)
		    {
		    	temp.hours++;
		    	temp.minutes=temp.minutes%60;
			}
			return temp;
		}
		void print()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds;
		}
	};

int main()
{
	time t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.print();
}
	
	

