#include<iostream>
using namespace std;
class car{
	private:
	  static int total;
	  char carName[10];
	  static int number;//number of this time rented
	public:
      car();
      int minus_total()
      {total--;}
      static int get_total()
      {return total;}
	  int borrowNumber();
	  void borrowCar(int num);
	  void returnCar(int num);
	  void setCarName(char *ss);
};
int car::total = 0;
int car::number = 0;
car::car()
{
total++;
//cout<<"total = "<<total<<endl;
}
void car::setCarName(char *ss)
{
  
strcpy(carName,ss);
//cout <<carName;
}
int main()
{
  int backNum;
int borrowNum;
char name[10];
char r_or_b;
while(1){
  cout <<"*********borrowCarLot********"<<endl;
  cout<<"return or borrow (r/b) : ";
  cin>>r_or_b;
  if(r_or_b=='r')
  {
             cout <<"number of car you want to return : ";
             cin>>backNum;
             car customCar[backNum];
             for(int i=0;i<backNum*2;i++)
             {
               int kk = customCar[i].minus_total();   
             }
             cout<<"total of car you borrowed = "<<customCar[0].get_total()<<endl;

  }
  if(r_or_b=='b')
  {
             cout <<"number of car you want to borrow : ";
             cin>>borrowNum;
             car customCar[borrowNum];
             for(int i=0;i<borrowNum;i++)
             {
               cout<<"Borrowed car["<<i<<"] set name : ";
               cin>>name;
               customCar[0].setCarName(name);
    
             }
             cout<<"total of car you borrowed = "<<customCar[0].get_total()<<endl;

  }

}


        //     break;
    //default:cout<<"wrong input"<<endl;
     //       break;
 // }
 
}
