//22k-4413
//syeda fakhira saghir

#include <iostream>
#include <string>
using namespace std;

class Customers;

class GameObject{
	private:
		int X;
		int Y;
		const string Name="22k-4413";
	public:
		GameObject()
		{
			
		}
		GameObject(string N, int x, int y):Name(N),X(x),Y(y)
		{
			
		}
		virtual void draw()
		{
			cout << "\nGame object created\n" <<endl;
		}
		int getX()
		{
			return X;
		}
		int getY()
		{
			return Y;
		}
};
/*Health should be an additional property for the Player class, damage should be an
additional property for the Enemy class, and effect should be an additional property for the
PowerUp class.*/
class player: public GameObject{
	string Health;
	public:
		friend class GameObject;
		void setHealth(string h)
		{
			Health=h;
		}
		string getHealth()
		{
			return Health;
		}
	player()
	{
		
	}
	player(string health,int x,int y,string n): GameObject(n, x, y)
	{
		Health=health;
	}
	virtual void draw()
		{
			GameObject::draw();
			cout << "\nHealth : " <<Health<< " with dimensions " << getX() << " and "<< getY()<<endl;;
		}
	bool operator == (const player &p1)
	{
		if(p1.Health==Health)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};

	
class enemy: public GameObject{
	string damage;
	public:
		friend class GameObject;
		void setdamage(string d)
		{
			damage=d;
		}
		string getdamage()
		{
			return damage;
		}
	enemy()
	{
		
	}
	enemy(string n,int x,int y,string d): GameObject(n, x, y)
	{
		damage=d;	
	}
	virtual void draw()
		{
			GameObject::draw();
			cout << "\nDamage : "<<  damage<<" with dimensions " << getX() << " and "<< getY()<<endl;
		}
};
class powerup: public GameObject{
	string effect;
	public:
		friend class GameObject;
		void seteffect(string e)
		{
			effect=e;
		}
		string geteffect()
		{
			return effect;
		}
	powerup()
	{
		
	}
	powerup(string n, int x, int y,string e): GameObject(n, x, y)
	{
		effect=e;
	}
	virtual void draw()
		{
			cout<< "\nEffect :" << effect <<  " with dimensions " << getX() << " and "<< getY()<<endl;
			
	    }		
};

class Game{
	public:
	GameObject *ob[4];
	int i=0;
	Game()
	{
		
	}
	void addob(GameObject *a)
	{
		ob[i]=a;
		i++;
	}
	void drawall()
	{
		for(int j=0;j<i;j++)
		{
			ob[j]->draw();
		}
	}
};

int main()
{
	cout<< "22K-4413 Syeda Fakhira Saghir"<<endl;
    player p("90 percent", 15, 20, "Player 1");
    enemy e("Enemy", 25, 15, "10");
    powerup pu("Power Up", 40, 12, "High damage");
    player p1("90 percent", 10, 35, "Player 2");
    
    Game g;
    g.addob(&p);
    g.addob(&e);
    g.addob(&pu);
    g.addob(&p1);
    
    cout << "\n******************************************* Comparing the healths of the 2 players *******************************************"<<endl;
    
    if(p==p1)
    {
    	cout << "\nPlayers have same health"<<endl;
	}
	else
	{
		cout << "\nPlayers don't have same health"<<endl;
	}
	
	cout << "\n******************************************* D r a w i n g     a l l     o b j e c t s *******************************************"<<endl;
    g.drawall();

    return 0;
}
