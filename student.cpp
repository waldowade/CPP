#include<iostream>
using namespace std;
class Student{
public:
	int number;
	

};
class Piano : public Student{


public:
	int bicycleNumber;
	Piano(int sNum,int bNum);
	Piano();
	void showData()
	{
		cout <<"Student number: "<<number<<endl;
		cout <<"Bicycle number: "<<bicycleNumber<<endl;
	}
	Piano operator+(Piano pp);
	Piano operator=(Piano pp);
};
Piano::Piano()
{
number = 0;
bicycleNumber = 0;	
}
Piano::Piano(int sNum,int bNum)
{
number = sNum;
bicycleNumber = bNum;
}
Piano Piano::operator+(Piano pp)
{
	Piano rest;
	rest.number += ppi.number;
    rest.bicycleNumber += pp.bicycleNumber;
 return rest;
}
Piano Piano::operator=(Piano pp)
{
	bicycleNumber=pp.bicycleNumber;
	number=pp.number;
 return *this;
}
int main()
{
 Piano pianoA(50,35);
 Piano pianoB(60,45);
 Piano total;
cout <<"Piano A: \n";
pianoA.showData();
total=total+pianoA;

cout <<"Piano B: \n";
pianoB.showData();
total=total+pianoB;

cout <<"Total: \n";
total.showData();
 return 0;
}
