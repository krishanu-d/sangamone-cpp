#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a;
    cout<<"enter the decimal number to convert to binary";
    cin>>a;
    while(a>0){
        cout<<a%2;
        a=a/2;
    }

    return 0;
}