#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,ans=1;
    cin>>a;
    for(int i=1;i<=a;i++){
        ans=ans*i;  // nhân từ 1 đến a thì ra giai thừa của a
    }
    cout<<ans;
}
