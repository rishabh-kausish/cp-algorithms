#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll  modex(int x,ll y,int n){
    x=x%n;
    ll res = 1;
    while(y>0){
        if(y%2){
            res = res*x%n;
        }
        x=x*x%n;
        y>>=1;     
    }
    return res;

}

int main(){
int a,m,count;
ll b;
cin>>count;
ll ans;
for (int i=0;i<count;i++){
    cin>>a>>b>>m;
    ans=modex(a,b,m);
    cout<<ans<<endl;
}


return 0;
}