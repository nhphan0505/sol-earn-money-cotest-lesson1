#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    if(a%100==0) cout<<a/100;
    else cout<<a/100+1;
    return 0;
}
