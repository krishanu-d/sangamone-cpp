#include <bits/stdc++.h> 
using namespace std; 
int main(){
    char a='a',A='A';
    while(a<='z' && A<='Z'){
        cout<<a<<" "<<int(a)<<"     "<<A<<" "<<int(A)<<endl;
        a++;
        A++;
    }
    return 0;
}