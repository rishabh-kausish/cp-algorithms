#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll parking_lot(int cons_car){
    ll res=24+(cons_car-3)*9;
ll exp=cons_car-3;
    ll base=4;
    while(exp){
        if(exp&1)
        res=res*base;
    base=base*base;
    exp>>=1;

    }
    return res;

}

int main(){
    int n;

    cin>>n;
    cout<<parking_lot(n);
    return 0;

}