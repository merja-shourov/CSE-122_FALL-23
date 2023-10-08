#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin >> s;
int up=0,low=0;
   for(int i=0;i<s.size();i++){
    if(islower(s[i])) low++;
    else
    up++;
   }

 if(low >= up){
    for(int i=0;i<s.size();i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
   }
 }

 else{
    for(int i=0;i<s.size();i++){
    if(s[i]>=97 && s[i]<=122){
            s[i]-=32;
        }
   }

 }
cout<<s;
   return 0;
}
