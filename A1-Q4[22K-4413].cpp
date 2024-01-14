#include<iostream>
#include<string>
using namespace std;


int i=0,j=0;

class Movie{
	private:
		int showtime[8]={3,4,5,6,7,8,9,10};
		char MovieName[8][200]={"Interstellar","Coco","Jab we met","Hotel Translyvania 1","Hotel Translyvania 2","Hotel Translyvania 3","The Maze Runner","Harry potter and the deathly Hollows"};
    public:
    	void display()
    	{
    		int i=0;
    		for(i=0;i<8;i++)
    		{
    			cout << MovieName[i] << " : " << showtime[i] << " PM "<<endl;
			}
		}
		int match(char mov[])
		{
			int yes;
			for(i=0;i<8;i++)
			{
				if(strcmp(strlwr(MovieName[i]),strlwr(mov))==0)
				{
					yes=1;
				}
			}
			return yes;
		}
};

class ticket{
   public:
   	int rownum;
   	int seatnum;
   	static int ticketID;
   	static bool flag[10][10];
   	ticket()
	   {
   		ticketID++;
	   }
	ticket(int ID)
	    {
   		ticketID=ID;
	    }  
	void sold(int i,int j)
	{
		if(flag[i][j]==1)
		{
		  cout << "\n\nRow Num : "<< rownum <<" and Seat Num : "<< seatnum << " has been sold "<< endl;
		}
		else{
			for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				flag[i][j]=0;
			}
		}
		}
	}
	
	void update(int i,int j)
	{
	   flag[i][j]=1;
	}
	
	void display()
	{
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(flag[i][j]==1)
				{
					cout << "\nRow num : " << rownum << endl;
					cout << "\nSeat Num :  "<< seatnum << endl;
					cout << "\nTicket ID : "<< ticketID << endl;
					sold(rownum,seatnum);
				}
			}
		}
	}
};

int ticket::ticketID=0;
bool ticket::flag[10][10];

main()
{
	cout << "SYEDA FAKHIRA SAGHIR : 22K-4413\n\n";
	char ID[9];
	char mov[200];
	int id,seatrow,seatcolumn;
	int yes;
	cout<<"Enter your ID : ";
	cin>>ID;
	id = (int(ID[5])-48)+((int(ID[4])-48)*10);
	Movie m;
	m.display();
	cout<<"\n\n----------------------------------------------- S E A T S -------------------------------------------------------------\n\n";
	for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
					cout << i<<j <<"\t";
			}
			cout<<"\n";
		}
	cout<<"\n\n\n";
	
	//for t1
	ticket t1(id);
	cout<<"Which movie do you want to watch : ";
	cin>>mov;
	yes=m.match(mov);
	if(yes==1)
	{
	cout<<"Which seat do you want to buy, enter row : ";
	cin>>seatrow;
	cout<<"Which seat do you want to buy, enter column : ";
	cin>>seatcolumn;
	t1.rownum=seatrow;
	t1.seatnum=seatcolumn;
	t1.update(seatrow,seatcolumn);
	cout << "Ticket booked"<<endl;
	cout <<	"\n\n-------------------===================== D I S P L A Y  ===========================------------------------\n\n";
	t1.display();
	}
	else
	{
		cout <<"Movie not avaliable"<<endl;
	}
	
	//for t2
	ticket t2;
	cout<<"\n\n\nWhich movie do you want to watch : ";
	cin>>mov;
	yes=m.match(mov);
	if(yes==1)
	{
	cout<<"Which seat do you want to buy, enter row : ";
	cin>>seatrow;
	cout<<"Which seat do you want to buy, enter column : ";
	cin>>seatcolumn;
	t2.rownum=seatrow;
	t2.seatnum=seatcolumn;
	t2.update(seatrow,seatcolumn);
	cout <<"Ticket booked"<<endl;
	cout <<	"\n\n-------------------===================== D I S P L A Y  ===========================------------------------\n\n";
	t2.display();
	}
	else
	{
		cout <<"Movie not avaliable"<<endl;
	}
	
	}
