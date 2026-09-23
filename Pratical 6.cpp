#include <iostream>
using namespace std;

class complex {
    int real, img;
public:
    void accept(int a, int b) {
        real = a;
        img = b;
    }
    void display() {
        cout << real <<"+i"<< img;
    }

 complex add(complex c)
 { complex sum;
    sum.real=real+c.real;
    sum.img=img+c.img;
    return sum;
 }
 
  complex substract(complex c)
 { complex substract;
    substract.real=real-c.real;
    substract.img=img-c.img;
    return substract;
 }
 
  complex multiplication(complex c)
 { complex multiplication;
    multiplication.real=real*c.real;
    multiplication.img=img*c.img;
    return multiplication;
 }
 
  complex division(complex c)
 { complex division;
    division.real=real/c.real;
    division.img=img/c.img;
    return division;
 }
 };

int main() {
    complex c1, c2, c3,c4,c5,c6;
    c1.accept(12,20);
    cout<<"c1=\t";
    c1.display();
    cout<<endl;
   
    c2.accept(4,5);
    cout<<"\nc2=\t";
    c2.display();
     cout<<endl;
   
    c3=c1.add(c2);
    cout<<"\nthe sum is:\n";
    c3.display();
   
    c4=c1.substract(c2);
    cout<<"\nthe substraction is:\n";
    c4.display();
   
    c5=c1.multiplication(c2);
    cout<<"\nthe multiplication is:\n";
    c5.display();
   
    c6=c1.division(c2);
    cout<<"\nthe divison is:\n";
    c6.display();
     
     return 0;
}
