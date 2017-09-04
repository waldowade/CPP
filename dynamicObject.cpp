#include<iostream>
using namespace std;
class String{
	private:
		char *data;
	    int length;
	public:
        String(const char *ss);
        ~String();
};
String::String(const char *ss)
{
 length = strlen(ss) + 1;
 data = new char[length];
 strcpy(data,ss);
}
String::~String()
{
	cout << "destruct\n";
	delete data;
}
int main()
{
	String *ptrString;
	char name[10];
	int num;
	cout<<"string to input : ";
	cin>>name;
	 ptrString = new String(name);
	 delete ptrString;
	
  
 return 0;
}
