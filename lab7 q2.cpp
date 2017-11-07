# Lab7-classes
//ques 2
 #include<iostream>
     using namespace std;
     class box{
        public:
          double length;
          double breadth;
          double height;
          double getvolume(void);
          void setlength(double l);
          void setbreadth(double b);
         void setheight(double h);
   };
   
   double box::getvolume(void){
         return length * breadth * height;
   }
   void box::setlength(double l){
         length=l;
   }
   void box::setbreadth(double b){
         breadth=b;
   }
   void box::setheight(double h){
         height=h;
   }
   
   int main()
    {
    box box1,box2;
    double volume=0;
    box1.setlength(5.0);
    box1.setbreadth(6.0);
    box1.setheight(7.0);
  
      box2.setheight(15.0);
      box2.setbreadth(16.0);
     box2.setlength(17.0);
    
     volume= box1.getvolume();
     cout<<"\nvolume of box1="<<volume;
    
     volume= box2.getvolume();
     cout<<"\nvolume of box2="<<volume;
     return 0;
    }
