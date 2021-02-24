#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll p,k,du,ans=1,luu[10000];
    cin>>p>>k;
    du=p%k;
    luu[du]++;
    while(du!=0){
        du=(du*10+p)%k;
        if(luu[du]!=0){
            cout<<"-1";
            return 0;
        } 
        luu[du]++;
        ans++;
    }
    while(ans!=0){
        cout<<p;
        ans--;
    }
}
