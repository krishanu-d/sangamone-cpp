#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a,b;
    char s;
    cout<<"\t \t\t\t\tCalculator"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<endl<<"Enter the operator you want to use like +, -, /, %, *"<<endl;
    cin>>s;
    cout<<endl<<"Enter the second number"<<endl;
    cin>>b;


    
    switch (s)
    {
    case '+' :cout<<endl<<"The asnwer is "<<a+b;
        break;
    case '-' :cout<<endl<<"The asnwer is "<<a-b;
        break;
    case '%' :cout<<endl<<"The asnwer is "<<a%b;
        break;
    case '*' :cout<<endl<<"The asnwer is "<<a*b;
        break;
    case '/' :cout<<endl<<"The asnwer is "<<a/b;
        break;
    default:cout<<"Wrong operator";
        break;
    }
}