#include<iostream>
using namespace std;
/*class Person;
class Father;
class mother;
class child;
class greneral;

class greneral
{
	char *gFirst;
	char *gSecond;
public:
	greneral(char *rff,char *rss)
	{
      strcpy(gFirst,rff);
      strcpy(gSecond,rss);
	}
	greneral(){}
	virtual void show_name(Person & pers)//main part,needs to be different when input adifferent object
	{
     cout << " in class general setObject function is called"<<endl;
	}
	
};
class Person : public greneral
{
public:
	char *first;
	char *second;
Father *ff;
mother *mm;
child *cc;
	friend class Father;
	friend class mother;
	friend class child;

	Person(char *ff,char *ss)
	{
    // strcpy(first,ff);
	}	
	Person(){}
	void show_name()//main part,needs to be different when input adifferent object
	{
     cout << " Person : "<<first<<" "<<second<<endl;
	}	
};
class Father  //: public greneral
{
public:
	char *first;
	char *second;
	Father(char ff[10],char ss[10])
	{
     strcpy(first,ff);
	}
	void setObject(Person & pers)//main part,needs to be different when input adifferent object
	{
		pers.ff = this;
     cout << " class father setObject function is called"<<endl;
	}
};
class mother  //: public greneral
{
public:
	char *first;
	char *second;
	mother(char ff[10],char ss[10])
	{
     strcpy(first,ff);
	}	
	void setObject(Person & pers)//main part,needs to be different when input adifferent object
	{
		pers.mm = this;
    cout << " class mother setObject function is called"<<endl; 
	}
};
class child //: public greneral
{
public:
	char *first;
	char *second;
	child(char ff[10],char ss[10])
	{
     strcpy(first,ff);
	}
	void setObject(Person & pers)//main part,needs to be different when input adifferent object
	{
		pers.cc = this;
     cout << " class child setObject function is called"<<endl;
	}
};
int main()
{
	greneral gg;
Person person("God","Come on");
Father fr("God","Come on");
mother mr("God","Come on");
child cd("God","Come on");
Person *p[4]={&person,&fr,&mr,&cd};
	return 0;
}*/
class Person{

public:
	char *first;
	char *second;
    Person(char *ff,char *ss)
	{
     strcpy(this->first,ff);
     strcpy(this->second,ss);
	}	
	Person(){}
    virtual void show_name(){
        cout << " Person : "<<first<<" "<<second<<endl;
    }
};

class Father : public Person
{
public:
	
	Father(char ff[10],char ss[10]):Person(ff,ss){}	
	void show_name()//main part,needs to be different when input adifferent object
	{Person::show_name();
		cout << " Father : "<<first<<" "<<second<<endl;
	}
};
class Mother : public Person
{
public:

	Mother(char ff[10],char ss[10]):Person(ff,ss){}
	void show_name()//main part,needs to be different when input adifferent object
	{Person::show_name();
		cout << " Mother : "<<first<<" "<<second<<endl;
	}
};
class Child : public Person
{
public:

	Child(char ff[10],char ss[10]):Person(ff,ss){}
	void show_name()//main part,needs to be different when input adifferent object
	{Person::show_name();
		cout << " Child : "<<first<<" "<<second<<endl;
	}
};

int main(void){
   Person person("God","Come on");
   Father father("John","Chen");
   Mother mother("Mary","Wong");
   Child child("Tom","Chen");
   Person *p[4] = {&person,&father,&mother,&child};
Person pp("God","Come on");
pp.show_name();
//for(int i=0;i<4;i++)
//{
	//p[2]->show_name();
//}
   /* Shape *sp;
    Circle ci(2,2,2);

    sp = &ci;
    sp->draw();*/


}

