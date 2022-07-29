#include <bits/stdc++.h> 
using namespace std; 
int main(){
    int a[3][3],b[3][2],c[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"for b"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>b[i][j];
        }
        cout<<endl;
    }

    cout<<"The multiplied matrix are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The answer is"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}