#include<iostream>

#include<stdlib.h>
using namespace std;
int min(int x, int y){
    return (x<y)?x:y;
}
int angle(int h, int m){
    if(h<0 ||m<0||h>12 || m>60){
        cout<<"Wrong Input";
    }
    if(h==12) h=0;
    if(m==60){
        m=0;h++;
        if(h>12){
            h-=12;
        }
    }
    float hangle =0.5*(h*60+m);
    float mangle=6*m;
    float angles=abs(hangle-mangle);
    return  min(360-angles,angles);
}
int main(){
    int a,b;
    cout<<"Enter the Hour hand"<<endl;
    cin>>a;
    cout<<endl<<"Enter the Minute hand"<<endl;
    cin>>b;
    
    cout<<endl<<"The angle between "<<a<< " hour and "<<b<<" minutes is :" <<angle(a,b);




    return 0;
}