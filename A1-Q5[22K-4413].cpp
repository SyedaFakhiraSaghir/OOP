#include<iostream>
#include<string>
#include<stdlib.h>
#include<string.h>
#include<cctype>
using namespace std;

class User{
	private:
		int userID[6];
		string name;
		int age;
		int height;
		string gender;
		int shoesize;
	public:
		//mutator and accessor methods
		void setuserID(int II[])
		{
			int i=0;
			for(i=0;i<6;i++)
			{userID[i]=II[i];}
		}
		void setage(int AGE)
		{
			age=AGE;
		}
		void setheight(int HEIGHT)
		{
			height=HEIGHT;
		}
		void setshoesize(int SHOESIZE)
		{
			shoesize=SHOESIZE;
		}
		void setname(string NAME)
		{
			name=NAME;
		}
		void setgender(string GENDER)
		{
			gender=GENDER;
		}
		int getage(){
			return age;
		}
		int getheight(){
			return height;
		}
		int getshoesize(){
			return shoesize;
		}
		string getgender(){
			return gender;
		}
		string getname(){
			return name;
		}
		
		//to set demographics aas per age
		string demographic(int age)
		{
			// (infant, toddler, child, adult).
			string d;
			if(age>=19)
			{
				d="adult";
				
			}
			else if(age<=12 && age >=10)
			{
				d="child";
			}
			else if(age<19 && age >=13)
			{
				d="teenager";
			}
			else if(age<=5 && age>=3)
			{
				d="toddler";
			}
			else if(age>=0 && age<=2)
			{
				d="infant";
			}
			return d;
		}
		
	//default constructor for user class
	User(){
		int i=0;
		for(i=0;i<6;i++)
		{
		 userID[i]=userID[i]+1;
	    }
	}
	
	//parmeterized constructor for user class
	User(int II[], string n, int a, int h, string gen,int sho)
	{
		setname(n);
		setage(a);
		setheight(h);
		setgender(gen);
		setshoesize(sho);
		setuserID(II);
    }
    void displayuserID()
    {
    	int i=0;
    	cout << "\n\nID : ";
    	for(i=0;i<6;i++)
    	{
    		cout << userID[i];
		}
	}
};

class Shoe{
	private:
		int size, width;
		string style;
		// (running shoes, sneakers, stiletto,etc.), 
		string brand;
		string color; 
		string demographic;
		// (infant, toddler, child, adult).
	public:
		//accessor and mutator members
		void setsize(int s)
		{
			size=s;
		}
		void setwidth(int w)
		{
			width=w;
		}
		void setstyle(string st)
		{
			style=st;
		}
		void setbrand(string b)
		{
			brand=b;
		}
		void setcolor(string c)
		{
			color=c;
		}
		int getsize()
		{
			return size;
		}
		int getwidth()
		{
			return width;
		}
		string getstyle()
		{
			return style;
		}
		string getbrand()
		{
			return brand;
		}
		string getcolor()
		{
			return color;
		}
		
		Shoe()
		{
			//default constructor
			
		}
		
		//parameterized constructor
		Shoe(int  s,int w,string st,string b,string c, string d)
		{
			/*int size, width;
		string style;
		// (running shoes, sneakers, stiletto,etc.), 
		string brand, color; 
		string demographic;*/
		setsize(s);
		setwidth(w);
		setstyle(st);
		setbrand(b);
		setcolor(c);
		demographic=d;
		}
};

void displayi(Shoe S, User U)
{
	U.displayuserID();
	cout << "\nName : "<<U.getname() <<endl;
	cout << "Age : "<<U.getage() <<endl;
	cout << "Height : "<<U.getheight() <<endl;
	cout << "Gender : "<<U.getgender() <<endl;
	cout << "Shoe Size : "<<U.getshoesize() <<endl;
	cout << "Demographic : "<< U.demographic(U.getage())<<endl;
	cout << "color : "<<S.getcolor() <<endl;
	cout << "Brand : "<<S.getbrand() <<endl;
	cout << "Style : "<<S.getstyle() <<endl;
	cout << "Width : "<<S.getwidth() << "\n\n"<<endl;
}

main()
{
	cout << "SYEDA FAKHIRA SAGHIR : 22K-4413\n\n";
	int s,w,e;
	string st;
	string b;
	string c;
	string d;
	int HEIGHT;
	int SHOESIZE;
	string NAME;
	string GENDER;
	int AGE;
	char id[9];
	int II[7];
	char choice;
	char ch;
	
	//setting the id
	fflush(stdin);
	cout << "\n\nId : "<<endl;
	cin>>id;
	II[0] = int(id[0]) - 48;
	II[1] = int(id[1]) - 48;
	II[2] = int(id[4]) - 48;
	II[3] = int(id[5]) - 48;
	II[4] = int(id[6]) - 48;
	II[5] = int(id[7]) - 48;
	
	//to set info
	cout << "Height : ";
	cin>>HEIGHT;
	cout << "Gender : ";
	cin>>GENDER;
	cout << "Shoe Size : ";
	cin>>SHOESIZE;
	cout << "Name : ";
	cin>>NAME;
	cout << "Age : ";
	cin>>AGE;
	s=SHOESIZE;
	cout << "Width : ";
	cin>>w;
	cout << "Style : ";
	cin>>st;
	cout << "Brand : ";
	cin>>b;
	cout << "Colour : ";
	cin>>c;
	User u(II,NAME,AGE,HEIGHT,GENDER,SHOESIZE);
	//User(int id, string n, int a, int h, string gen,int sho)
	Shoe s1(s,w,st,b,c,d);
	
	
	while(1)
	{
		fflush(stdin);
	cout<<"\n\nEnter \nW to update information\nV to view updated information\nC create a new obj\nE to exit\n";
	cin>>choice;
	choice=toupper(choice);
	switch(choice){
		
		//to update info
		case 'W':
			{
				cout << "\n\nId : ";
	            cin>>id;
	            cout << "Height : ";
	            cin>>HEIGHT;
	            cout << "Gender : ";
	            cin>>GENDER;
	            cout << "Shoe Size : ";
               	cin>>SHOESIZE;
             	cout << "Name : ";
               	cin>>NAME;
               	cout << "Age : ";
	            cin>>AGE;
	            cout << "Size : ";
	            cin>>s;
	            cout << "Width : ";
	            cin>>w;
	            cout << "Style : ";
	            cin>>st;
	            cout << "Brand : ";
	            cin>>b;
	        cout << "Colour : ";
	        cin>>c;
			u.setname(NAME);
    		u.setage(AGE);
     		u.setheight(HEIGHT);
    		u.setgender(GENDER);
		    u.setshoesize(SHOESIZE);
     		 d= u.demographic(AGE);
     		s1.setsize(s);
		     s1.setwidth(w);
		     s1.setstyle(st);
		     s1.setbrand(b);
		    s1.setcolor(c);
				break;
			}
			
			//to view info
			case 'V':
			{
				displayi(s1,u);
				break;
			}
			
			//to create a new obj
			case 'C':
			{
				//default constructors
        	User u1;
	        Shoe s2;
	        
	        while(1){
	        	fflush(stdin);
	        	cout<<"\n\nEnter \nW to update/set info of new object\nV to view updated info  of your newly created object\nC to go back to previous screen\nE to exit\n";
	            cin>>ch;
	            ch=toupper(ch);
             	switch(ch){
             		
             	//to update/set info
		        case 'W':
		     	{
	        	cout << "\n\nId : ";
	            cin>>id;
	            cout << "Height : ";
	            cin>>HEIGHT;
	            cout << "Gender : ";
	            cin>>GENDER;
	            cout << "Shoe Size : ";
               	cin>>SHOESIZE;
             	cout << "Name : ";
               	cin>>NAME;
               	cout << "Age : ";
	            cin>>AGE;
	            cout << "Size : ";
	            cin>>s;
	            cout << "Width : ";
	            cin>>w;
	            cout << "Style : ";
	            cin>>st;
	            cout << "Brand : ";
	            cin>>b;
	        cout << "Colour : ";
	        cin>>c;
			u1.setname(NAME);
    		u1.setage(AGE);
     		u1.setheight(HEIGHT);
    		u1.setgender(GENDER);
		    u1.setshoesize(SHOESIZE);
     		 d= u1.demographic(AGE);
     		s2.setsize(s);
		     s2.setwidth(w);
		     s2.setstyle(st);
		     s2.setbrand(b);
		    s2.setcolor(c);
				break;}
				
				
			//to view updated/set infro
			case 'V':
				{
					displayi(s2,u1);
					break;
				}
			
			//to go back to previous screen
			case 'C':
					{
						break;
					}
					
			//to close the program
			case 'E':
					{
						exit(1);
						
					}
			    }
		    }
	        
				break;
			}
			case 'E':
			{
				exit(1);
			}
	}
}
	
	
	
}
