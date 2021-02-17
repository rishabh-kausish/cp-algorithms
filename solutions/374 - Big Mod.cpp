#include <bits/stdc++.h>
#define ul unsigned int
#define us unsigned short
using namespace std;

ul BigMod(ul x,ul y,us m){
    x=x%m;
    ul res=1;
    while(y>0){
        if (y&1){
                res=res*x%m;
        }
        x=x*x%m;
        y>>=1;
    }
    return res;
}

int main(){

    ul a=0,b=0;
    us c=0;
    

    while(cin>>a>>b>>c)
   cout<<BigMod(a,b,c)<<endl;
    return 0;

    
}