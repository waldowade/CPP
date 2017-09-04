#include<iostream>
#include<string.h>
using namespace std;
class numArr
{
  private :
          int nnum[4];
          int count;
          int ert ;
          
  public  :
  int total;
		  void addNum(int n);
          void listNum();
          int sumNum();
          void listPrime();

};
void numArr::listPrime()
{
	int i,j;
	int num;
	int prime;
	for(j=0;j<5;j++){
	     if(j==4)num = ert;
	     else 
			num=nnum[j];
		i=2;
		prime=1;
		while(i*i<=num){
			if(num%i==0){
				prime=0;
				break;
			}
			i++;
		}
		if(prime==1)cout<<num<<" \n";
	}
}
int numArr::sumNum()
{
	total =0;
  
		for(int i=0;i<4;i++)
	{
	total+=nnum[i];
    }
    total+=ert;
    return total;
    
}
void numArr::addNum(int n)
{
	int tt;

	if(nnum[3]<10000000==1&&nnum[3]>-1000000)
	{

		cout << "input a number you want to insert to this array : ";
		cin>>tt;
		ert = tt;
		for(int i=0;i<sizeof(nnum)/sizeof(int);i++)
{
 cout<<nnum[i]<<" ";
}
cout<<tt<<" "<<endl;
	}

	else{

		for(int i=0;i<4;i++)
	{
	cout <<"Input a number:";
	cin >> nnum[i];
    }
}

}
void numArr::listNum()
{
for(int i=0;i<sizeof(nnum)/sizeof(int);i++)
{
 cout<<nnum[i]<<" ";
}
cout<<endl;
}
int main()
{
	numArr realOne;
	int num;

    realOne.addNum(9999);
    realOne.addNum(225);
    cout <<"sum is : "<<realOne.sumNum()<<endl;
    realOne.listPrime();

    //realOne.listNum();
}
