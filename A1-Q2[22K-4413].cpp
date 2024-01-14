#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
using namespace std;
class DataScientist
{
	private:
		string highesteducation;
		int answersgiven=0, questionsasked=0;
	public:
		static int ID;
		static int t;
	string firstname, lastname, country;
	int age;
	
	void sethighesteducation(string hedu)
	{
		highesteducation=hedu;
	}
	
	DataScientist()
	{
	    ID++;
	    t++;
	}
	DataScientist(int id)
	{
	    ID=id;
	    t++;
	}
	int getID()
	{
		return ID;
	}
    DataScientist(string f, string l, int a, string c)
    {
    	firstname=f;
		lastname=l;
		country=c;
		age=a;
	}
	void AskQuestion()
	{
		questionsasked++;
	}
	void AnswerProblem()
	{
		answersgiven++;
	}
	int getAskQuestion()
	{
		return questionsasked;
	}
	int getAnswerProblem()
	{
		return answersgiven;
	}
};

int DataScientist::ID=0;
int DataScientist::t=0;

class Admin{
	private:
		string adminID;
	public:
	string firstname, lastname, age, country;
	Admin()
	{
		
	}
	Admin(string adf,string adl,int id)
	{
		firstname=adf;
		lastname=adl;
		adminID=id;
	}
	void TotalUser(DataScientist d)
	{
		cout<< "Total Number of Data Scientists : " << d.t-1;
	}
};

main()
{
	    cout << "SYEDA FAKHIRA SAGHIR : 22K-4413";
	    int five,seven,Id;
		char id[9];
		char user;
		int choice;
		string f;
		string l;
		int ag;
		string c,hedu;
		string adf;
		string adl;
		string ques;
		
		//setting initial value for data scientist ids
		cout<<"\n\nEnter Student ID : ";
	    cin >> id;
	    five = int(id[5]) - 48;
	    seven = int(id[6]) - 48;
	    Id=seven+(five*10);
	    
	    //creating object of data scientist class
	    Admin a;
	    DataScientist d1(Id);
	    cout << "\n\n********************************* D A T A     H U B **********************************************\n\n";
	    while(1)
	    {
		cout << "Enter A for Admin / D for Data Scientist / 0 to exit : ";
	    cin >> user;
	    switch(user)
	    {
	    	case 'A':
	    		{
	    			while(1){
	    			cout<<"\n\nEnter:\n1 to set/update your account info\n2 to show total number of Data Scientists\n3 to exit\n4 to go back\n\n";
	    			cin>>choice;
	    			if(choice==1)
	    			{
	    				cout << "First Name : ";
	    				cin >> adf;
	    				cout << "Last Name : ";
	    				cin >> adl;
	    				cout << "Age : ";
	    				cin >> ag;
	    				cout << "Country : ";
	    				cin>>c;
	    				a.age= ag;
	    				a.country=c;
	    				a.firstname=f;
	    				a.lastname=l;
	    				cout << "\nAccount info set/updated successfully\n";
					}
					else if(choice==2)
					{
						a.TotalUser(d1.ID);
					}
					else if(choice==3)
					{
					exit(1)	;
					}
					else if(choice==4)
					{
					break;
					}
				}
				break;
				}
			case 'D':
				{
					while(1)
					{
					cout<<"\n\nEnter:\n1 to set/update your account info\n2 to set higher education\n3 to ask question\n4 to get answer\n5 to go back\n6 to see no questions asked\n7 to see number of answers given\n8 to exit\n\n";
	    			cin>>choice;
	    			if(choice==1)
	    			{
	    				//string f, string l, int a, string c
	    				cout << "First Name : ";
	    				cin >> f;
	    				cout << "Last Name : ";
	    				cin >> l;
	    				cout << "Age : ";
	    				cin >> ag;
	    				cout << "Country : ";
	    				cin>>c;
	    				d1.age= ag;
	    				d1.country=c;
	    				d1.firstname=f;
	    				d1.lastname=l;
	    				cout << "\nAccount info set/updated successfully\n";
					}
					else if(choice==2)
					{
						cout<<"Enter Higher education : ";
						cin>>hedu;
						d1.sethighesteducation(hedu);
						
					}
					else if(choice==3)
					{
						fflush(stdin);
						cout<<"ASK QUESTION : ";
						getline(cin, ques);
						d1.AskQuestion();
					}
					else if(choice==4)
					{
						fflush(stdin);
						cout <<"ANSWER QUESTION : ";
						getline(cin, ques);
						d1.AnswerProblem();
					}
					else if(choice==5)
					{
						break;
					}
					else if(choice==6)
					{
						cout <<"\nQUESTIONS ASKED : ";
						cout << d1.getAskQuestion();
					}
					else if(choice==7)
					{
						cout <<"ANSWERS GIVEN : ";
						cout << d1.getAnswerProblem();
					}
					else if(choice==8)
					{
					exit(1)	;
					}
				}
				break;
			}
			case '0':
			{
				exit(1);
			}
		}
	}
}
