
//22k-4413
//syeda fakhira saghir

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Product{
	protected:
	string name;
	float price;
	public:
		virtual void printdetails()
		{
			cout << "\nName: "<<name;
			cout <<"\nPrice: "<<price;
		}
		virtual float getDiscountedprice()
		{
			//aaplying 10% discount
			return price+ (price*0.1);
		}
		void setname(string n)
		{
			name=n;
		}
		string getname()
		{
			return name;
		}
		void setprice(float p)
		{
			price=p;
		}
		float getprice()
		{
			return price;
		}
		Product()
		{
			
		}
		Product(string name, float price)
		{
			this->name=name;
			this->price=price;
		}
		Product operator &(Product p)
		{
			Product pr;
			pr.price = (p.price + price)/2;
			pr.name=p.name+ " & " +name;
			return pr;
		}
};
/*
Part B)
The & operator is overloaded as a member function for the Product class. The operator&() function
takes a constant reference to another Product object other. It calculates the average price of the
two products and creates a new Product object with a concatenated name and the new price. The
new product is then returned by the function. (2 Marks)
In the main() function, we create two Product objects p1 and p2 with prices of 10 and 2
respectively. We then use the overloaded & operator to create a new Product object p3, which has
a concatenated name of "Book & Pen" and an average price of 6. We finally call printDetails() on
p3 to verify that the new product has been created successfully.*/
class Customers{
	protected:
	string name;
	float balance;
	public:
		virtual void buyproduct(Product *p)
		{
			if(balance>=p->getDiscountedprice())
			{
				balance=balance-(p->getDiscountedprice()*0.1);
				cout << "\nThe customer "<<getname()<<" has bought the Product "<<p->getname()<<endl;
			}
			else
			{
				cout << "\nThe customer "<<getname()<<" can not buy the Product "<< p->getname() <<endl;
			}
		}
		void setname(string n)
		{
			name=n;
		}
		string getname()
		{
			return name;
		}
		void setbalance(float p)
		{
			balance=p;
		}
		float getbalance()
		{
			return balance;
		}
		void buyProduct()
		{
			
		}
};

class Book:public Product{
	string author;
	public:
		virtual void printdetails()
		{
			Product::printdetails();
			cout<< "\nAuthor: " << author <<endl;
	    }
		Book()
		{
			
		}
		Book(string b, string n, float p):author(b)
		{
			setname(n);
			setprice(p);
		}
		void setauthor(string n)
		{
			author=n;
		}
		string getauthor()
		{
			return author;
		}
};

class Electronic:public Product{
	string brand;
		public:
		virtual void printdetails()
		{
			Product::printdetails();
			cout << "\nBrand : "<<brand<<endl;
		}
		Electronic()
		{
			
		}
		Electronic(string b, string n, float p):brand(b)
		{
			setname(n);
			setprice(p);
		}
		void setbrand(string n)
		{
			brand=n;
		}
		string getbrand()
		{
			return brand;
		}
};

class Clothing :public Product{
	string size;
	public:
		void virtual printdetails()
		{
			Product::printdetails();
			cout << "\nSize : "<<size<<endl;
		}
		virtual float getDiscountedprice(Product p)
		{
			if(size=="large" || size=="l")
			{
				return p.getprice()+p.getprice()*0.1;
			}
			else if(size=="medium" || size=="m")
			{
				return p.getprice()+p.getprice()*0.2;
			}
			else if(size=="small" || size=="s")
			{
				return p.getprice()+p.getprice()*0.3;
			}
		}
		Clothing(string c, string n, float p):size(c)
		{
			setname(n);
			setprice(p);
		}
		void setsize(string n)
		{
			size=n;
		}
		string getsize()
		{
			return size;
		}
};

class VIP_Customers :public Customers{
	public:
		void buyproduct(Product *p)
		{
		
			if(balance>=p->getDiscountedprice())
			{
				balance=balance-(p->getDiscountedprice()*0.1);
				cout << "\nThe customer "<<getname()<<" has bought the Product "<<p->getname()<<endl;
			}
			else
			{
				cout << "The customer "<<getname()<<" can not buy the Product "<< p->getname() <<endl;
			}
		}
};
int main() {
    cout<< "22K-4413 Syeda Fakhira Saghir"<<endl;
    Book b1("Jk Rowing", "Harry potter and the half blood prince", 1000);
    Electronic e1("Realme", "C25 phone", 50000);
    Clothing c1("medium", "Outfitter's jeans", 3000);
    cout << "\n******************************************Displaying Products******************************************"<<endl;
    b1.printdetails();
    e1.printdetails();
    c1.printdetails();
    
    Customers cu;
    cu.setname("Aleena");
    cu.setbalance(500);
    VIP_Customers v1;
    v1.setname("Fakhira");
    v1.setbalance(100000);
    
    cu.buyproduct(&b1);
    v1.buyproduct(&e1);
    cu.buyproduct(&c1);
    cout << "\nCustomer: " << cu.getname() << "\nBalance: " << cu.getbalance() << endl;
    cout << "\nVIP Customer: " << v1.getname() << "\nBalance: " << v1.getbalance() << endl;
    
    Product p1("Book", 10);
    Product p2("Pen", 2);
    Product p3 = p1 & p2;
    p3.printdetails();

    return 0;
}
