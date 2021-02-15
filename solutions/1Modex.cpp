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
int* ans=new int(count);
for (int i=0;i<count;i++){
    cin>>a>>b>>m;
    ans[i]=modex(a,b,m);
}

for (int i=0;i<count;i++){
    cout<<ans[i]<<endl;
}
}