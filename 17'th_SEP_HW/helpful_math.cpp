#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
 
    vector<int> v;
        for( int i=0; i < str.length(); i++ ){
            if( i % 2 == 0 ){
                v.push_back(str[i]);
            }
        }
    
    int vec_size = v.size();
    sort(v.rbegin(), v.rend());

    for( int i=0; i<str.length(); i++ ){
        if( i%2 == 0 ){
            str[i] = v[vec_size-1];
            vec_size--;
        }
    }

    cout << str << endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> v;
    for( int i=0; i != s.size(); i++ ){
        if( s[i] != '+' ){
            v.push_back(s[i] - 48 );
        }
    }

    sort(v.begin(), v.end());
    for( int i=0; i != v.size(); ++i){
        if( i > 0 ){
            cout << "+";
        }
        cout << v[i];
    }
    return 0;
}


*/
