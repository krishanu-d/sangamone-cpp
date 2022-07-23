#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    int s;
    float a;
    cout<<"Enter which units to convert to"<<endl;
    cout<<"1. km to m"<<endl<<"2. m to km and m"<<endl<<"3. Hour to minutes"<<endl<<"4. Minutes to hours and minutes"<<endl;
    cin>>s;
    if(s<5 && s>0){
    cout<<endl<<"Enter the unit";
    cin>>a;
    switch(s){
        case 1: cout<<endl<<a<<" km in m is "<<a*1000<<"m"; break;
        case 2: cout<<endl<<a<<" m in km and m is "<<(int)a/1000<<" km "<<(int)a%1000<<" m"; break;
        case 3: cout<<endl<<a<<" Hour in minutes is "<<a*60<<" minutes"; break;
        case 4: cout<<endl<<a<<" minutes in hours and minutes is "<<(int)a/60<<" hour"<<(int)a%60<<" minutes"; break;
        default: break;

    }}
    else{cout<<"Program ending, enter valid input";}
    return 0;
}