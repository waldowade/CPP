#include<iostream>
using namespace std;
int if_modulus(int x,int y);
int try_modulus(int x,int y);
int main()
{
int x,y,modulus;
cout << "Please input two integer for finding modulus..."<<endl;
cin>>x>>y;

modulus = if_modulus(x,y);
cout <<"Using if expression to detect error..."<<endl;
if(modulus == -1)cerr<<" variable y cannot be zero!\n";
else cout <<"modulus is "<<modulus<<" ."<<endl;

cout <<"Using exception to detect error..."<<endl;
try{
cout <<"modulus is "<<try_modulus(x,y)<<endl;
cout<<"."<<endl;
}
catch(string ss){
	cerr<<ss;
}
}
int if_modulus(int x,int y)
{
	if(y==0)return -1;
	return x%y;
}
int try_modulus(int x,int y)
{
	if(y==0)throw string("WWWWWrong");
	return x%y;
}


