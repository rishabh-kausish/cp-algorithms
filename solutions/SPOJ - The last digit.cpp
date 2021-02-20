#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll the_last_digit(ll base ,ll exp){
    ll res=1;
    while(exp){
        if(exp&1)
        res=res*base%10;
        base=base*base%10;
        exp>>=1;

    }
return res;

}

int main(){
    int t;
cin>>t;
    ll a,b;
    while(t--){
    cin>>a>>b;
    cout<<the_last_digit(a,b)<<endl;}
return 0;
}