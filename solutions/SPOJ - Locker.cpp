#include <bits/stdc++.h>
#define M 1000000007
#define ll long long 
#include <algorithm>

using namespace std;

ll locker(ll items){
    if(items==0)
        return 1;
   
    if(items<=2)
    return items;
    ll exp=floor(items/3);
    ll res=1;
    if(items%3==1){ res=4;
    exp--;}
    if(items%3==2)res=2;
    ll base=3;
    while(exp){
if (exp&1)
res=((res%M)*(base%M))%M;
base=(base%M)*(base%M)%M;
exp>>=1;
    }
    
    return res;
}


int main(){
    ll  t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<locker(n)<<endl;
    }
    return 0;

}