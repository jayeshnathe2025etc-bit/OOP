#include <iostream>
using namespace std;
int perimeter(int k);
int perimeter(int l,int b);  
int main() {
  int a,l,b,p,c;
  cout<<"Enter the side of square:";
  cin>>a;
  p=perimeter(a);
  cout<<"The perimeter of Square is:"<<p<<endl;

  cout<<"Enter length and breadth:";
  cin>>l>>b;
  c=perimeter(l,b);
  cout<<"The perimeter of the rectangle is:"<<c<<endl;

  return 0;
}

int perimeter(int k)
 { int result;
  result=4*k;
 
 return  result;
 }

 int perimeter(int l,int b)
 { int result;
    result=2*(l+b);
 
  return  result;
}
