#include<iostream>
using namespace std;
class Student{
public:
  int number;
  void setNumber()
  {
    cout <<"input number : ";
    cin>>number;
  }
};
template<class Student>class ListNode
{
  private :
        Student stt;
        ListNode<Student> *nextNode;
        static ListNode<Student> *now;
        const static ListNode<Student> *ffd;//head
  public :
        ListNode<Student>(Student suu):stt(suu),nextNode(NULL){}
        ListNode<Student>():nextNode(NULL){ffd = now = this;}
        static void addNode(Student newStudent);
        static void showAllNode();
};

template<class Student> ListNode<Student> *ListNode<Student>::now;
template<class Student> const ListNode<Student> *ListNode<Student>::ffd;

template<class Student> void ListNode<Student>::addNode(Student newStudent)
{
  now->nextNode = new ListNode(newStudent);
  now = now->nextNode;
}

template<class Student> void ListNode<Student>::showAllNode()
{
  int i=1;
  now = ffd->nextNode;
  //now = head->nextNode;
  while(now != NULL)
  {
   cout<<"The data of "<<i<<" node is "<< now->stt.number << endl;
   now = now->nextNode;
   i++;
  }
}
int main()
{
  int data,i;
  char choice='y';
  ListNode<Student> ffd;
  Student stu[4];
  i=0;
  do{
    stu[i].setNumber();
    ffd.addNode(stu[i]);
    i++;
  }while(i<4);
  ListNode<Student>::showAllNode();
return 0;
}


