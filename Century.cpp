#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    if(a%100==0) cout<<a/100;  //nếu năm đó chia hết cho 100 thì bỏ đi 2 số cuối của năm đó chính là thế kỉ (ví dụ 1900, 2000, 1800)
    else cout<<a/100+1; //nếu ko thì bỏ đi 2 số cuối rồi công vs 1 của năm đó chính là thế kỉ (ví dụ 1901, 2002, 1803)
    return 0;
}
