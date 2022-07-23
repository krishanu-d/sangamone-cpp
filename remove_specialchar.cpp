#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void spclchar(string arr){
    for(int i=0;i<arr.size();i++){
        if(int(arr[i])<32 || int(arr[i])>47 && int(arr[i])<58 || int(arr[i])>64 && int(arr[i])<91 ||int(arr[i])>96 && int(arr[i])<123 || int(arr[i])>126){
            cout<<arr[i];
        }
        
        
    }
}
int main(){
    char ar[20];
    cout<<"Enter a word with special character"<<endl;
    cin.getline(ar,20);
    spclchar(ar);
    
    return 0;
}