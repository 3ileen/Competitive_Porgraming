//
// Created by l3n on 25/07/22.
//
#include<iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return tolower(c); }
    );
    return s;
}
int main() {
    string a,b ;
    getline(cin,a);
    getline(cin,b);
    a=toLower(a);
    b=toLower(b);
    int c=a.compare(b);
    if(c==0)cout<< 0;
    else if(c>0) cout<< 1;
    else cout<< -1;
    return 0;
}