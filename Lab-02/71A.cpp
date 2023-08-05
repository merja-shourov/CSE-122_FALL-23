#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    cin.ignore();
    while( x-- ){
        string sen;
        getline(cin, sen);
        
        if( sen.length() <= 10 ){
            cout << sen << endl;
        }else{
            cout << sen[0] << sen.size()-2 << sen[sen.size()-1] << endl;
        }
        
    }
    return 0;
}
