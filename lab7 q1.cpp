# Lab7-classes
//ques 1
#include<iostream>
   1 using namespace std;
   2 class box{
   3  public:
   4     double length;
   5     double breadth;
   6     double height;
   7 };
   8 
   9 int main()
  10 {
  11  box box1,box2;
  12  double volume=0;
  13  box1.height=5;
  14  box1.breadth=6;
  15  box1.length=7;
  16 
  17  box2.height=15;
  18  box2.breadth=16;
  19  box2.length=17;
  20 
  21  volume= box1.height * box1.breadth * box1.length;
  22  cout<<"\nvolume of box1="<<volume;
  23 
  24  volume= box2.height * box2.breadth * box2.length;
  25  cout<<"\nvolume of box2="<<volume;
  26  return 0;
  27  }
