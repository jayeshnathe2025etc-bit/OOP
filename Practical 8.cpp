/* write a cpp programe to impliment multiple inheritance ,parent classes are --> Basicinfo & department info. child class -->employee */
#include <iostream>
using namespace std;

class BasicInfo
{ protected:
  string Name;
  string add;
  int Age;  

  public:
  void acceptbasicInfo()
  {
      cout<<"\n enter name:";
      cin>>Name;
      cout<<"\n Enter Age:";
      cin>>Age;
       cout<<"\n Enter add:";
      cin>>add;
      cout<<endl;
  }
    void displaybasicInfo()
  {
      cout<<"\n name:"<<Name;
      cout<<"\n Age:"<<Age;
      cout<<"\n Add:"<<add;
      cout<<endl;
  }
};
class deptInfo
{ protected:
  string Department;
  string NatureWork;
  int Age;  

  public:
  void acceptdeptInfo()
  {
      cout<<"\n Enter Department:";
          cin>>Department;
      cout<<"\n Enter Nature of Work: ";
      cin>>NatureWork;
       
  }
   void displaydeptInfo()
  {
      cout<<"\n Belonging Department: "<<Department<<endl;
      cout<<"\n Nature of Work: "<<NatureWork;
  }
};
class Employee : public deptInfo, public BasicInfo
{
  public:
  void acceptEmployeeInfo()
  {
      acceptbasicInfo(); 
      acceptdeptInfo();
  }
  
  void displayEmployeeInfo()
  {
      displaybasicInfo();
      displaydeptInfo();
  }
};
 int main()
{
    Employee e1,e2;
    cout << "Enter Employee Details:" << endl;
    e1.acceptEmployeeInfo();

    cout << "Enter Next Employee Details:" << endl;
    e2.acceptEmployeeInfo();
    
    cout << "\nDisplaying Employee Details:" << endl;
    e1.displayEmployeeInfo();

    cout << "\nDisplaying Employee Details:" << endl;
    e2.displayEmployeeInfo();
    
    return 0;
}
