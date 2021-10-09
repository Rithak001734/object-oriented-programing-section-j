#include <iostream>

using namespace std;

int main()
{
    cout<<"Rithak"<<endl<<"student id 20011212"<<endl<<"section j"<<endl;
    int a,b,c;
    char oper;
    cout<<"Enter the operator:(+-*/)"<<endl;
    cin>>oper;
    cout<<"Enter two no a and b"<<endl;
    cin>>a>>b;

    switch(oper)
    {
    case '+': c=a+b;
              cout<<"addtion of two no is"<<a<<'+'<<b<<'='<<c<<endl;
              break;
    case '-': c=a-b;
              cout<<"subtraction of two no is"<<a<<'-'<<b<<'='<<c<<endl;
              break;
    case '*': c=a*b;
              cout<<"multiplication of two no is"<<a<<'*'<<b<<'='<<c<<endl;
              break;
    case '/': c=a/b;
              cout<<"division of two no is"<<a<<'/'<<b<<'='<<c<<endl;
              break;
    default:  cout<<"error !! the operator is not correct"<<endl;
              break;
    }
    return 0;
}
