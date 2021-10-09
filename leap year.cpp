#include <iostream>

using namespace std;

int main()
{
   cout<<"Rithak"<<endl<<"student id 20011212"<<endl<<"section j"<<endl;
   int year;
   cout<<"enter any year"<<endl;
   cin>>year;
   if(year%4==0)
   {
       if(year%100==0)
       {
           if(year%400==0)
               cout<<"year is a leap year"<<endl;
           else
           cout<<"year is not a leap year"<<endl;
       }
       else
       cout<<"year is a leap year"<<endl;
   }
   else
   cout<<"year is not a leap year"<<endl;

    return 0;
}
