#include <iostream>
using namespace std;
class numArr
{
 private:
	int aarr[3][3];
public:
    void calArr()
	{int total =0;
	  for(int i=0;i<3;i++)
	  {
       for(int j=0;j<3;j++)
       {
         total += (i+j);
       }
      }
    cout << "Sum of array is :"<<total<<endl;
	}
};
int main()
{
  numArr caca;
  caca.calArr();

}
