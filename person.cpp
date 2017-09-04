#include<iostream>
using namespace std;

class person4{

private:
	int age;
    char name[100];
    float salary;
public:
    char *getName();
    void setName(char *ss);
    person(char *ss)
    {
     strcpy(name,ss);
    }
	int getAge();
    void setSalary(float salary);
	float getSalary();
    void setAge(int aa);
};
char * person::getName()
{

return name;
}
int person::getAge()
{
    cout<<"your age is : "<<age<<endl;

  return age;
}

void person::setAge(int aage)
{
    age = aage;
}
void person::setSalary(float dd)
{
 salary = dd;
}
float person::getSalary()
{
   return salary;
}
int main()
{  char nn[100];
int a;
float sa;
cout<<"Type your name :";
cin>>nn;
   person4 realOne(nn);
cout<<"\nType your age :";
cin>>a;
cout <<"Type your salary :";
cin>>sa;
  realOne.setAge(a);
   realOne.setSalary(sa);
  realOne.getAge();
cout <<"Your name is : "<<realOne.getName()<<endl;
cout <<"Your salary is : "<<realOne.getSalary()<<endl;
}
