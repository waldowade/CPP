#include<iostream>
using namespace std;
class object{
	protected:
		char color[10];
		char type[10];
	public:
		object(char *o_type,char *o_color)
		{
			strcpy(type,o_type);
			strcpy(color,o_color);

		}
	};
class shoe:public object{
	private:
		
	public :
	     friend class person;
   		 shoe(char *type,char *color):object(type,color){}
};
class clothes:public object{
	private:
		friend class person;
	public :
   		 clothes(char *type,char *color):object(type,color){}
};
class pants:public object{
	private:
		friend class person;
	public :
  		  pants(char *type,char *color):object(type,color){}
};
class person{
	protected:
		char last_name[5];
		char first_name[5];
		clothes *my_clothes;
		shoe *my_shoe;
		pants *my_pants;
	public:
		person(const char *l_name,const char *f_name){
			strcpy(last_name,l_name);
			strcpy(first_name,f_name);
		}
   	 	void wear(shoe & a_shoe)
    	{
       		cout<<"my shoe"<<endl;
      		 my_shoe = &a_shoe;
    	}
    	void wear(clothes & a_clothes)
    	{
       		cout<<"my clothes"<<endl;
       		my_clothes = &a_clothes;
    	}
    	void wear(pants & a_pants)
    	{
      		 cout<<"my pants"<<endl;
      		 my_pants = &a_pants;
    	}
    	void show_data()
   		 {
    		cout<<"My name is "<<first_name<<" "<<last_name<<"."<<endl;
    		cout<<"I wear clothes : "<<my_clothes->color<<" "<<my_clothes->type<<endl;
    		cout<<"I wear pants"<<my_pants->color<<" "<<my_pants->type<<endl;
    		cout<<"I wear shoe"<<my_shoe->color<<" "<<my_shoe->type<<endl;
   		 }
};	
int main()
{
 
 person John("John","Kuo");
 clothes a_clothes("T shirt","white");
 pants a_pants("short","green");
 shoe a_shoe("gym_shoe","blue");
 	John.wear(a_clothes);
 	John.wear(a_pants);
 	John.wear(a_shoe);
 	John.show_data();
 return 0;

}
