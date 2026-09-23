#include <iostream>
using namespace std;

class student
{
    int rollno;
    char Name[10];
    char Grade;
    float percentage;
   
public:
    void accept(int a, char b[],char c,float d)
    {
     rollno=a;
     
        for (int i=0;i<10;i++)
        {
            Name[i] = b[i];
            
        }
        
     
     Grade=c;
     percentage=d;
        
    }

    void display()
    {
    
            cout <<"\n*The student information is as follows:"<<endl;
    
            cout <<"\nRoll No.="<<rollno<<endl;
            cout <<"\nName Of the student ="<<Name<<endl;
            cout <<"\nGrade secured="<<Grade<<endl;
            cout <<"\nPercentage scored="<<percentage<<endl;
    }

       
};

int main()
{ int a; 
char b[10]; 
char c;
float d;
    student s1;
    cout<<"Enter your details:";
    cout<<"\nEnter your roll no:";
    cin>>a;
    cout<<"\nEnter your name:";
    cin>>b;
    cout<<"\nEnter your grade:";
    cin>>c;
    cout<<"\nEnter your percentage:";
    cin>>d;

   s1.accept(a,b,c,d);
    s1.display();
    return 0;
}
