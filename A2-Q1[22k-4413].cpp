
//22k-4413
//syeda fakhira saghir

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Juice{
	int price;
	string ingredients;
	string taste;
	public:
		void setprice(int p)
		{
			price=p;
		}
		void setingredients(string in)
		{
			ingredients=in;
		}
		void settaste(string taste)
		{
			this->taste=taste;
		}
		int getprice()
		{
			return price;
		}
		string getingredients()
		{
			return ingredients;
		}
		string gettaste()
		{
			return taste;
		}
		Juice()
		{
			
		}
		Juice(int price,string ingredients,string taste)
		{
			this->price=price;
			this->ingredients=ingredients;
	        this->taste=taste;
		}
		void print()
		{
			cout << "\nPrice : " << price <<endl;
			cout << "Ingredients : "<< ingredients <<endl;
			cout << "Taste : "<< taste <<endl;
		}
};

class FruitJuice: public Juice{
	string season;
	static int f;
	public:
		void setseason(string s)
		{
			season=s;
		}
		string getseason()
		{
			return season;
		}
		FruitJuice()
		{
			
		}
		FruitJuice(string season)
		{
			this->season=season;
		}
};

int FruitJuice::f=0;

class CitrusJuice: public FruitJuice{
	public:
		CitrusJuice()
		{
		setprice(100);
		setingredients("lemon, orange, mint, sugar, water, ice, black pepper");
		settaste("Sour");
		setseason("Summer");}
		virtual void print()
		{
			Juice::Juice::print();
			cout<<"Season : "<< getseason() <<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};
class BerryJuice: public FruitJuice{
	public:
		BerryJuice()
		{setprice(200);
		setingredients("raspberry, strawberry, ice, water, sugar");
		settaste("Sour");
		setseason("Winter");}
		
		virtual void print()
		{
			Juice::print();
			cout<<"Season : "<< getseason()<<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};

class TropicalJuice: public FruitJuice{
	public:
		TropicalJuice(){
		setprice(300);
		setingredients("pineapple, ice");
		settaste("Sweet and Sour");
		setseason("Winter");
		}
		
		virtual void print()
		{
			Juice::print();
			cout<<"Season : "<< getseason()<<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};

class VegetableJuice: public Juice{
	string origin;
	static int v;
	public:
		void setorigin(string o){
		
			origin=o;
		}
		string getorigin()
		{
			return origin;
		}
	    VegetableJuice()
	    {
	    	
		}
		VegetableJuice(string origin)
	    {
	    	this->origin=origin;
		}
};

int VegetableJuice::v=0;

class LeafyGreenJuice: public VegetableJuice{
	public:
		LeafyGreenJuice()
		{
		setprice(250);
		setingredients("spanich, lemon, water, mint, cucumber,salt, ice");
		settaste("Savory");
		setorigin("South west asia");
		}
		
		virtual void print()
		{
			Juice::print();
			cout<<"Origin : "<< getorigin() <<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};

class RootVegetableJuice : public VegetableJuice{
	public:
		RootVegetableJuice()
		{setprice(200);
		setingredients("carrot");
		settaste("Mild Sweet");
		setorigin("Iran");
	    }
		virtual void print()
		{
			Juice::print();
			cout<<"Origin : "<< getorigin() <<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};

class MixedVegetableJuice: public VegetableJuice{
	public:
	MixedVegetableJuice()	
	{
    	setprice(300);
		setingredients("apple, lemon, ginger, beetroot, ice");
		settaste("savory and sour");
		setorigin("coasts of the Mediterranean");
	}
		virtual void print()
		{
			Juice::print();
			cout<<"Origin : "<< getorigin() <<endl;
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};


class MixedJuice: public Juice{
	static int m;
};

int MixedJuice::m=0;

class FruitAndVeggieJuice:public MixedJuice{
	public:
		FruitAndVeggieJuice(){
		setprice(145);
		setingredients("blood orange, watermelon, beetroot");
		settaste("Sweet");
	}
		virtual void print()
		{
			Juice::print();
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
}; 

class SmoothieJuice: public MixedJuice{
	public:
		SmoothieJuice(){
		setprice(120);
		setingredients("sugar, ice, oats, milk, banana");
		settaste("Sweet");
		}
		virtual void print()
		{
			Juice::print();
			cout << "22k-4413 Fakhira also likes fruit juice" << endl;
		}
};

class sales{
	int saleID;
    string CustomerName;
	int totalbill;
	int numberOfFruitJuice;
	int numberOfVegetableJuice;
	int numberOfMixedJuice;
    public:
    	void setsaleID(int saleID)
    	{
    		this->saleID=saleID;
		}
		int getsaleID()
		{
			return saleID;
		}
		void setCustomerName(string cn)
		{
			CustomerName=cn;
		}
		string getCustomerName()
		{
			return CustomerName;
		}
		void settotalbill(int totalbill)
		{
			this->totalbill=totalbill;
		}
		int gettotalbill()
		{
			return totalbill;
		}
		void setnumberOfFruitJuice(int numberOfFruitJuice)
		{
			this->numberOfFruitJuice=numberOfFruitJuice;
		}
		int getnumberOfFruitJuice()
		{
			return numberOfFruitJuice;
		}
		void setnumberOfVegetableJuice(int numberOfVegetableJuice)
		{
			this->numberOfVegetableJuice=numberOfVegetableJuice;
		}
		int getnumberOfVegetableJuice()
		{
			return numberOfVegetableJuice;
		}
		void setnumberOfMixedJuice(int numberOfMixedJuice)
		{
			this->numberOfMixedJuice=numberOfMixedJuice;
		}
		int getnumberOfMixedJuice()
		{
			return numberOfMixedJuice;
		}
		sales()
		{
			
		}
		sales(int saleID,string CustomerName,int totalbill,int numberOfFruitJuice,int numberOfVegetableJuice,int numberOfMixedJuice)
		{
			this->saleID=saleID;
            this->CustomerName=CustomerName;
	        this->totalbill=totalbill;
	        this->numberOfFruitJuice=numberOfFruitJuice;
	        this->numberOfVegetableJuice=numberOfVegetableJuice;
            this->numberOfMixedJuice=numberOfMixedJuice;
		}
		void display()
		{
			cout<<"Total Sales : " << gettotalbill() <<endl;
	        cout<<"No of Fruit juice bought : " << getnumberOfFruitJuice() <<endl;
	        cout<<"No of Vegetable juice bought : " << getnumberOfVegetableJuice() <<endl;
	        cout<<"No of Mixed juice bought : " << getnumberOfMixedJuice() <<endl;
		}
};

sales operator +(sales &obj1,sales &obj2)
{
	sales s;
	if(obj1.getCustomerName()==obj2.getCustomerName())
	{
	   s.settotalbill(obj1.gettotalbill()+obj2.gettotalbill());
	   s.setnumberOfFruitJuice(obj1.getnumberOfFruitJuice()+obj2.getnumberOfFruitJuice());
	   s.setnumberOfMixedJuice(obj1.getnumberOfMixedJuice()+obj2.getnumberOfMixedJuice());
	   s.setnumberOfVegetableJuice(obj1.getnumberOfVegetableJuice() + obj2.getnumberOfVegetableJuice());
	   return s;
    }
    else
	{
    	cout << "\nSales not for the same person";
	}
	return s;
}

main()
{
	Juice j;
	string c;
	int p,k=0,z=1;
	char ch;
	int M,V,F,dd;
	int price,totalp=0;
	string ingredients;
	string taste;
	string origin;
	string season;
	int fruit=0, la=0,ju=0;
	cout<< "22K-4413 Syeda Fakhira Saghir"<<endl;
	while(z!=0)
	{
	sales sa;
	cout<<"\n******************************************Welcome to our Juice Shop******************************************\n"<<endl;
	cout << "Input your name : ";
	cin >> c;
	sa.setCustomerName(c);
	cout << "Input your id : ";
	cin >> dd;
	sa.setsaleID(dd);
	k++;
	while(z!=0)
	{
	cout<< "\nEnter\nF for Fruit Juice\nV for Vegetable Juice\nM for Mixed Juice\nE to show bill\n";
	cin>>ch;
	ch=toupper(ch);
	switch(ch)
	{
		case 'F':
			{
				cout<< "\n\nPress the given numbers to select you choice of juice\nFruit Juice\n1. Citrus Juice\n2. Berry Juice\n3. Tropical Juice\n4. Check out from Menu\n\n";
				cin >> F;
				F=toupper(F);
				switch(F)
				{
					case 1:
						{
							CitrusJuice c;
							c.print();
							
							p=c.getprice();
							totalp=totalp + p;
							fruit++;
							break;
						}
					case 2:
						{
							
							BerryJuice b;
							b.print();
							p=b.getprice();
							totalp=totalp+p;
							fruit++;
							break;
						}
					case 3:
						{
							
							TropicalJuice t;
							t.print();
							
							p=t.getprice();
							totalp=totalp+p;
							fruit++;
							break;
						}
					case 4:
						{
							break;
						}
				}
				break;
			}
		case 'V':
			{
				cout << "\nVegetable Juice\n1. Leafy Green Juice\n2. Root Vegetable Juice\n3.Mixed Vegetable Juice\n4. Check out from Menu\n";
				cin>>V;
				V=toupper(V);
				switch(V)
				{
					case 1:
						{
							
							LeafyGreenJuice l;
							l.print();
							
							p=l.getprice();
							totalp=p;
							la++;
							break;
						}
					case 2:
						{
							RootVegetableJuice r;
							r.print();
							
							p=r.getprice();
							totalp=totalp+p;
							la++;
							break;
						}
					case 3:
						{
							MixedVegetableJuice v;
							v.print();
							la++;
							p=v.getprice();
							totalp=totalp+p;
							break;
						}
					case 4:
						{
							break;
						}
				}
				break;
			}
		case 'M':
			{
				cout << "\nMixed Juice\n1.Fruit And Veggie Juice\n2. SmoothieJuice\n3. Check out from Menu\n" <<endl;
                cin >> M;
                M=toupper(M);
                switch(M)
				{
					case 1:
						{
							FruitAndVeggieJuice j; 
							j.print();
							
							p=j.getprice();
							totalp=totalp+p;
							ju++;
							break;
						}
					case 2:
						{
							SmoothieJuice s;
							s.print();
							
							p=s.getprice();
							totalp=totalp+p;
							ju++;
							break;
						}
					case 3:
						{
							break;
						}
				}
			}
	default:
    if((F==4||V==4||M==3 || ch=='E' || ch=='e') )
	{
		if(k>=2)
	{
	    sales ob2,ob3;
	    ob2.settotalbill(totalp);
        ob2.setnumberOfFruitJuice(fruit);
        ob2.setnumberOfVegetableJuice(la);
        ob2.setnumberOfMixedJuice(ju);
        if(sa.getCustomerName()==ob2.getCustomerName() && sa.getsaleID()==ob2.getsaleID())
        {
        	ob3 = sa+ob2;
        	ob3.display();
		}
		else
		{
		sa.settotalbill(totalp);
        sa.setnumberOfFruitJuice(fruit);
        sa.setnumberOfVegetableJuice(la);
        sa.setnumberOfMixedJuice(ju);
        sa.display();
		}
		k=0;
	    fruit=0;
	    la=0;
	    ju=0;
	    totalp=0;
	    price=0;
        }
        else{
		sa.settotalbill(totalp);
        sa.setnumberOfFruitJuice(fruit);
        sa.setnumberOfVegetableJuice(la);
        sa.setnumberOfMixedJuice(ju);
        sa.display();
		}
		break;
	}
}
if((F==4||V==4||M==3 || ch=='E' || ch=='e') )
	{break;}
}
}
}
