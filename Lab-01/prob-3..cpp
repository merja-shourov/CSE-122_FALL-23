#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int biggest;
    if( a > b && a > c ){
        biggest = a;
    }else if( b > a && b > c ){
        biggest = b;
    }else{
        biggest = c;
    }

    cout << "biggest: " << biggest << endl;
    return 0;
}