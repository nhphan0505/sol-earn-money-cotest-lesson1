#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll p,k,du,ans=1,luu[10000]; // dùng mảng "luu" để lưu các số dư, vì khi số dư lặp lại thì số đó không thể chia hết
    cin>>p>>k;
    du=p%k;
    luu[du]++;
    while(1==1){
        du=(du*10+p)%k;
        if(luu[du]!=0){//nếu số dư lặp lại
            cout<<"-1"; //in ra -1
            return 0;// dừng chương trình
        } 
        luu[du]++;
        ans++;
    }
    while(ans!=0){
        cout<<p;
        ans--;
    }
}
