//Write a program for swapping two numbers using call by reference strategies
// Archana Kumari , Roll No. - 202068 , DSA,Tutorial-Lab-4 (a)


#include<iostream>
using namespace std;


void swap(int *a, int *b){

 int swap;
 swap=*a;
 *a=*b;
 *b=swap;}


int main()
{
 int a=15, b=50;
 cout<<"before swapping value of a and b is: "<<a<<" and "<<b<<endl;

 swap(&a, &b);
 cout<<"after swapping value of a and b is: "<<a<<" and "<<b<<endl;

 return 0;
}
