#include<iostream>
#include<string>
using namespace std;
class HeartRates
{
	string NAME;
	int ID;
	int Month;
	int Day;
	int Year;
	public:
		HeartRates(int month, int day, int year , int id, string name)
		{
			setNAME(name);
			setID(id);
			setMonth(month);
			setDay(day);
			setYear(year);
		}
		void setNAME(string name)
		{
			NAME=name;
		}
		void setID(int id)
		{
			ID=id;
		}
		string getNAME()
		{
			return NAME;
		}
		int getID()
		{
			return ID;
		}
		void setMonth(int month)
		{
			Month=month;
		}
		void setDay(int day)
		{
			Day=day;
		}
		void setYear(int year)
		{
			Year=year;
		}
		int getMonth()
		{
			return Month;
		}
		int getDay()
		{
			return Day;
		}
		int getYear()
		{
			return Year;
		}
		int getAge()
		{
			int age,m,d,y;
			y=2023-getYear();
			if(getMonth()>2)
			{
				y--;
			}
			else if(getDay()<19)
			{
				y--;
			}
			age=y;
			return age;
		}
		int getMaxiumumHeartRate()
		{
			int hrate;
			hrate= 220-getAge();
			return hrate;
		}
		void getTargetHeartRate()
		{
			int x= getMaxiumumHeartRate();
			cout << "Target heart rate is between " << x*0.5 << " to "<< x*0.85 << endl;
		}
        void display()
        {
        	cout << "\nName : " << getNAME() << endl;
        	cout << "DOB : "<< Month << "/" << Day << "/" << Year <<endl;
        	cout << "Age in years : "<< getAge()<< endl;
        	cout << "Maximum Heart Rate : " << getMaxiumumHeartRate() << endl;
        	getTargetHeartRate();
		}
};
main()
{
	cout << "SYEDA FAKHIRA SAGHIR : 22K-4413";
	string dob,name;
	char sid[9];
	int m,d,y;
	int id;
	cout << "\n\nEnter Your DOB month : " ;
	cin >> m;
	cout << "Enter Your DOB day : " ;
	cin >>d;
	cout << "Enter Your DOB year : " ;
	cin >> y;
	cout << "Enter Your Name : " ;
	cin >> name;
	cout << "Enter Your id : " ;
	cin>>sid;
	id=int(sid[6])-48;
	cout << "\n\n--------------------------------------------------------------------------------------------\n\n";
	HeartRates p1(m,d,y,id,name);
	p1.getMaxiumumHeartRate();
	p1.getTargetHeartRate();
	p1.display();}
