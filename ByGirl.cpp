//
// Created by l3n on 25/07/22.
//
#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;
int main(){
    string girl;
    cin>>girl;
    int len=girl.length();
    if(len%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!";
    return 0;
}