#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,m,count=0;
   string s,a;
   cin>>s;
   sort(s.begin(),s.end());
   l=s.length();
   m=(l/2)+1;
   s.erase(0,m-1);
   for(int  i=0;i<m;i++){
       count++;
       cout<<s[i];
       if(count!=m){
        cout<<"+";
      }
 
 
   }
 
 
return 0;
}
