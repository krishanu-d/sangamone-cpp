#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std; 
int main(){
    int s=0,m=0;
    while (m!=5)
    {system("CLS");
       if(s>60){
        s=0;m++;
       }
        cout<<"Timer"<<endl<<m<<":"<<s;
        s++;
        sleep(1);

    }
    return 0;

}