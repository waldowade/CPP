#include<iostream>
using namespace std;

class Score
{
	private :
	int chi;
	int math;
	int eng;
	public :
	void setchi(int num);
	void setmath(int num);
	void seteng(int num);

	int operator+=(Score & sc);
};

int Score::operator+=(Score & sc)
{
int total = 0;
total+=chi;
total+=sc.chi;
total+=math;
total+=sc.math;
total+=eng;
total+=sc.eng;
 return total;
}
void Score::setchi(int num)
{
 chi = num;
}
void Score::setmath(int num)
{
 math = num;	
}
void Score::seteng(int num)
{
 eng= num;
}


int main()
{  
	int num;
	Score ff,kk;
cout<<"Type your chi num :";
cin>>num;
ff.setchi(num);
cout<<"Type your math num :";
cin>>num;
ff.setmath(num);
cout<<"Type your eng num :";
cin>>num;
ff.seteng(num);

cout<<"Type your chi num :";
cin>>num;
kk.setchi(num);
cout<<"Type your math num :";
cin>>num;
kk.setmath(num);
cout<<"Type your eng num :";
cin>>num;
kk.seteng(num);

int ann = ff+=kk;

cout <<"total of two of those is "<<ann<<endl;
}
