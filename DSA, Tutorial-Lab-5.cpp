//Archana kumari , DSA, Tutorial-Lab-5,  Roll no.- 202068
//Write a program for swapping two numbers Without using 3rd Variable.
         // using addition and subtraction
         #include <iostream>
       using namespace std;
      int main()
    {
        int a=20, b=30;
        cout<<"before swap a =" << a<< "  b=" << b<< endl;
        a=a+b;  //20+30 = 50=a
        b=a-b; //50-20= 3=b
        a=a-b; //a=20
        cout<<"after swapping a=" <<a << " b=" << b<< endl;
        return 0;
    }
