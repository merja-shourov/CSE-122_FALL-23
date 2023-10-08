#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int zero=0,one=0;
   for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            one++;
             if(zero<7){
                zero=0;

            }
        }
        else{
            zero++;
            if(one<7){
                one=0;

            }
        }
   }
   if(zero>=7){
    cout<<"YES";
   }
   else if(one>=7){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   return 0;
}
