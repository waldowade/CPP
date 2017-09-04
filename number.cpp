#include<iostream>
using namespace std;

class number{

private:
	int num;
public:
void setNum(int aa)
{
num = aa;
cout <<" number is :" <<aa<<endl;
}
void sum()
{
int total = 0;
 for(int i =0; i<num;i++)
 {
   total +=i;
 }
cout << "sum answer is "<<total<<endl;
}

void sum3()
{
int total = 0;
 for(int i =0; i<num*3;i+=3)
 {
   total +=i;
 }
cout << "sum3 answer is "<<total<<endl;
}};
int main()
{
    int aa;
    number testNum;

 cout<<"Input a number : ";
 cin>>aa;
    testNum.setNum(aa);
    testNum.sum();
    testNum.sum3();
}
