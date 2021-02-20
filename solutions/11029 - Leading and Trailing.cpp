#include <bits/stdc++.h>
#define ll long
using namespace std;

string trail(ll base,ll exp){
 
 ll res=1;
 base=base%1000;
 while(exp){
   if(exp&1){
     res=base*res%1000;
   }
   base=base*base%1000;
   exp>>=1;
 }
   return to_string(res);

}
string lead(ll base ,ll exp){
 double temp=exp*log10(base);
  
  temp=pow(10,(temp-int(temp)))*100;
  return to_string(int(temp));}

int main()
{
  int T;
  ll n,k;
  cin>>T;
  while(T--){
    cin>>n>>k;
    cout<<lead(n,k)<<"..."<<setw(3)<<setfill('0')<<trail(n,k)<<endl;
  }

}