#include<bits/stdc++.h>
using namespace std;

int main(){
    char user_name[100];
    cin >> user_name;
    int size = 0;
    vector<int> v(26);
    for( int i=0; user_name[i] != '\0'; i++ ){
        v[user_name[i]-'a']++;
    }

    for( int x : v ){
        if( x != 0 ) size++;
    }

    (size % 2 == 0 ) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!" << endl;
    return 0;
}
