# Lab7-classes
//ques 3
#include<iostream>
    using namespace std;
    class rectangle{
          public:
            float l;
            float b;
            float area();
            float perimeter();
    };
    
   
   float rectangle::area(){
           float a=l*b;
           return a;
   }
   
   float rectangle::perimeter(){
           float p=2*(l+b);
           return p;
   }
   
   int main(){
   rectangle r1,r2;
   cout<<"\nenter length of 1st rectangle=";
   cin>>r1.l;
   cout<<"\nenter the breadth of 1st rectangle=";
   cin>>r1.b;
   ///////////////////////////////////////////////////////
   cout<<"\nenter length of 2nd rectangle=";
   cin>>r2.l;
   cout<<"\nenter the breadth of 2nd rectangle=";
   cin>>r2.b;
   cout<<"\narea of 1st rectangle="<<r1.area();
   cout<<"\nperimeter of 1st rectangle="<<r1.perimeter();
   cout<<"\narea of 2nd rectangle="<<r2.area();
   cout<<"\nperimeter of 2nd rectangle="<<r2.perimeter();
   
   /////////////////////////////////////////////////////////
   if(r1.area()>r2.area())
     cout<<"\narea of 1st recatngle is greater";
   else if(r2.area()>r1.area())
     cout<<"\narea of 2nd rectangle is greater";
   else
     cout<<"\nboth the rectangle have equal area";
   
   if(r1.perimeter()>r2.perimeter())
      cout<<"\nperimeter of 1st recatngle is greater";
    else if(r2.perimeter()>r1.perimeter())
      cout<<"\nperimeter of 2nd rectangle is greater";
    else
      cout<<"\nboth the rectangle have equal perimeter";
    
    return 0;
    }
   
