#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Room{
	public:
	string roomName;
	int seatingCapacity; 
	int numRadiators=0; 
	Room(string rname)
	{
		roomName = rname;
		seatingCapacity = 12;
	}
	void isHeatedBy(int n)
	{
		if(numRadiators==1 && n==1)
		{
		numRadiators+=n;
		cout << "\n\nRadiator already added to room " << roomName << endl ;
		}
		else if(numRadiators==0 && (n==1 || n==2))
        {
        numRadiators+=n;
		cout << "\n\nRadiator successfully added to room " << roomName << endl ;
		}
		else if(numRadiators==2)
		{
		cout << "\n\nCannot add Radiator. Room has a maximum number of radiators " << roomName << endl ;
		}
	}
};

class radiator{
	private:
	bool isOn;
	static int RadiatorID;
	public:
		//constructor for id increment
		radiator(int I)
		{
			RadiatorID=I+15;
			isOn=0;
		}
		radiator()
		{
		     RadiatorID+=15;
		}
		int getRadiatorID()
		{
			return RadiatorID;
	}
	bool heats(string roomName, int seatingCapacity, int numRadiators)
	{
		if(numRadiators==1)
		{
			isOn=1;
			return isOn;
		}
		else if(numRadiators==0 )
        {
        	isOn=0;
        	return isOn;
		}
		else if(numRadiators==2)
		{
			isOn=1;
			return isOn;
		}
	}
	
};

int radiator::RadiatorID=0;

int main()
{
	cout << "SYEDA FAKHIRA SAGHIR : 22K-4413\n";
	string rname;
	int seats,x; 
	int numr; 
	char id[9];
	//index 5,6,7
	static int I;
	int five,six,seven;
	
	
	//room obj
	cout << "\nRoom Name : ";
	cin >> rname;
	Room room(rname);
	cout << "Number of radiators to be added : "<< endl;
	cin >> numr;
	
	
	//std id for radiators
	cout<<"\nEnter Student ID : ";
	cin >> id;
	five =int(id[5])-48;
	six=int(id[6])-48;
	seven=int(id[7])-48;
	I=seven+(six*10)+(five*100);
	//cout << I;
	
	room.isHeatedBy(numr);
	
	//radiator objects
	if(numr==2)
	{
	radiator rd1(I);
	radiator rd2;
	//cout << "\n" << rd1.getRadiatorID();
	x=rd1.heats(rname,seats,numr);
	if(x==1)
		{
			cout << "Ratiator 1 is On" << endl;
			cout << "\nRadiator ID : " << rd1.getRadiatorID();
		}
	x=rd2.heats(rname,seats,numr);
	if(x==1)
		{
			cout << "\n\n\nRatiator 2 is On" << endl;
			cout << "\nRadiator ID : " << rd1.getRadiatorID();
		}
	}
	else if(numr==1)
	{
		radiator rd1(I);
		x=rd1.heats(rname,seats,numr);
		if(x==1)
		{
			cout << "Ratiator1 is On" << endl;
			cout << "\nRadiator ID : " << rd1.getRadiatorID();
		}
		//cout << "\n" << rd1.getRadiatorID();
	}
}