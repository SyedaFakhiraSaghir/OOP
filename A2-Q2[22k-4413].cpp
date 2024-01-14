#include <iostream>
#include <string>
using namespace std;

class Courses {
	public:
	string cname;
	string ccode;
	int chours;
	int cmarks;
	static int tchr;
	Courses() {}
	Courses(string n, string c, int h, int m) {
        cname = n;
        ccode = c;
        chours = h;
        cmarks=m;
        tchr=tchr+h;
    }
	void setcourseinfo(string n, string c, int h, int m) {
		cname = n;
		ccode = c;
		chours = h;
		cmarks= m;
		tchr=tchr+h;
	}
	void printcourseinfo() {
		cout << "\nCourse name : "<< cname<< endl;
		cout << "Course code : "<< ccode<< endl;
		cout << "Course hours : "<< chours<< endl;
	}
	void showchours() {
		cout << "Course hours : "<< chours<< endl;
	}
	void showcoursenumber() {
		cout << "Course code : "<< ccode<< endl;
	} 
	int gettchr()
	{
		return tchr;
	}
};

class Student {
	public:
	string id;
	string name;
	int coursesenrolled;
	string coursename;
	string grade;
	const int fees = 15000;
	float gpa,gpap;
	bool cfees;
	int crfees;
	Courses *c[10];
	Student() {}
	
	Student(string id, string name, bool cfees, int coursesenrolled) {
        this->id = id;
        this->name = name;
        this->coursesenrolled = coursesenrolled;
        this->cfees = cfees;
        for (int i = 0; i < coursesenrolled; i++) {
            c[i] = NULL;
        }
    }
	
	void setstdinfo(string id, string name, int coursesenrolled, string coursename, bool cfees) {
		this->id = id;
		this->name = name;
		this->coursesenrolled = coursesenrolled;
		this->coursename = coursename;
		this->grade = grade;
		this->cfees = cfees;
		for (int i = 0; i < 10; i++) {
            c[i] = NULL;
        }
	}
	
	void printstdinfo() {
		cout << "\nId : "<< id<< endl;
		cout << "Name : "<< name<< endl;
		cout << "Courses enrolled : "<< coursesenrolled << endl;
		cout << "Fees : "<< fees<< endl;
	}
	
	void credits(Courses c) {
		cout << "\nTotal Number of credit hours : " << c.gettchr();
	}
	
	void getgpa(int totalmarks) {
		gpa=totalmarks/coursesenrolled*0.04;
	}
	void gpapercentage()
	{
		cout<< "\nGPA : "<< gpa;
		if(gpa==4.0)
		{
			grade="A+";
		}
		else  if(gpa<4.0 && gpa>=3.67)
		{
			grade="A";
		}
		else  if(gpa<3.67 && gpa>=3.33)
		{
			grade="B+";
		}
		else  if(gpa<3.33 && gpa>=3.0)
		{
			grade="B";
		}
		else  if(gpa<3.0 && gpa>=2.67)
		{
			grade="B-";
		}
		else  if(gpa<2.67 && gpa>=2.33)
		{
			grade="C+";
		}
		else  if(gpa<2.33 && gpa>=2.0)
		{
			grade="C";
		}
		else  if(gpa<2.0 && gpa>=1.0)
		{
			grade="D";
		}
		else  if(gpa==0)
		{
			grade="F";
		}
		gpap=gpa*25;
		cout<< "\nPercentage : " << gpap << endl;
	}
	float semesterfee()
	{
		if(cfees==0)
		{
			return (crfees*c[0]->gettchr())+crfees+(crfees*0.5);
		}
		else if(cfees==1)
		{
			return crfees*c[0]->gettchr();
		}
	}
	void enrolledornot(int i)
	{
		if(c[i]!=NULL)
		{
			cout << "\nEnrolled\n";
		}
	}
	void showresult()
	{
		int i=0;
		if(cfees==1)
		{
		cout << "\nId : "<< id<< endl;
		cout << "Name : "<< name<< endl;
		cout << "Courses enrolled : "<< coursesenrolled << endl;
		cout << "\nFees : "<< semesterfee()<< endl;
		gpapercentage();
		cout << "Grade : " << grade << endl;
	    }
	    else
	    {
	    	cout << "\nlocked gardes";
		}
	}
	
};

int Courses::tchr=0;

main()
{
	cout<< "22K-4413 Syeda Fakhira Saghir"<<endl;
	int one,two,n,I,i=0,j=0;
	string iduser;

	cout << "Enter your ID : ";
	cin >> iduser;
	
	string id;
	string name;
	int coursesenrolled;
	string coursename;
	bool cfees;
	string cname;
	string ccode;
	int chours;
	int cmarks;
	int totalmarks;
	
	one =int(iduser[0])-48; 
    two=int(iduser[1])-48; 
    I=one+(two*10); 
    
    n=int(iduser[5])-48; 
    
    Student s[n];
    
    cout<< "Number of students enrolled : "<< n<<endl;
    cout<< "Tuition rate per credit hour : "<< I/2 << endl;
    
    for(i=0;i<n;i++)
    {
    	s[i].crfees=I*500;
    	cout << "\nId : ";
    	cin >> id ;
    	cout << "Name : ";
    	cin >> name ;
    	cout << "Courses enrolled : ";
    	cin>> coursesenrolled;
    	cout << "Enter 1 if fees paid 0 if fees not paid : ";
    	cin>> cfees;
    	Courses c[coursesenrolled];
    	for(j=0;j< coursesenrolled ; j++)
    	{
    		cout << "\nCourse Name : ";
    	    cin >> cname ;
    	    cout << "Course Code : ";
    	    cin >> ccode ;
    	    cout << "Course credit hours : ";
    	    cin>> chours;
    	    cout << "Course Marks : ";
    	    cin>> cmarks;
    	    totalmarks=totalmarks+cmarks;
    		c[j].setcourseinfo(cname,ccode,chours,cmarks);
        }
    	s[i].setstdinfo(id,name,coursesenrolled,cname,cfees);
    	cout << "\n*************************************** GPA and GPA percentage *************************************** \n";
		s[i].getgpa(totalmarks);
		s[i].showresult();
	}
}