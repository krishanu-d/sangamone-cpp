#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a,f=0;
    cout<<"enter to check whether a number is prime or not"<<endl;
    cin>>a;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            f++;
            cout<<"the number is not prime";break;
        }

    }
if(f==0){
    cout<<" the number "<<a<<" is prime";
}

    return 0;
}