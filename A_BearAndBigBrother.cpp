//
// Created by eileen on 16/04/22.
//
#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll a,b; int year=0;
    cin>>a; cin>>b;

    while(a<=b){
        a=a*3;
        b=b*2;
        year++;
    }
    cout<<year;

}