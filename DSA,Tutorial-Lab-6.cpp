//Write the programs for Bubble sort
// Name= Archana kumari, Roll no- 202068 , DSA,Tutorial-Lab-6

#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, pass=0;
    int a[10] = {10,5,2,6,5,9,1,22,4,28};
    cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10; i++) {
   for(j = i+1; j<10; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

    return 0;
}
