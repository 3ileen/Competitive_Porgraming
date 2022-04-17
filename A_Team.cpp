//
// Created by eileen on 16/04/22.
//
#include <iostream>
using namespace std;

int main(){
    int n,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            res+=1;
        }
    }

    cout<<res;



    return 0;
}