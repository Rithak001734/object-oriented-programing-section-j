#include <iostream>

using namespace std;
void factorial(int);
int main()
{
    cout<<"Rithak"<<endl<<"student id 20011212"<<endl<<"section j"<<endl;
    int n;
    cout<<"Enter the no for finding factorial"<<endl;
    cin>>n;
    factorial(n);

    return 0;
}
void factorial(int n)
{
    int fact = 1, i;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<"the factorial of no is "<<fact<<endl;
}
