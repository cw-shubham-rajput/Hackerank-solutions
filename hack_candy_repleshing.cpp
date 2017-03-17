#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> c(t);
    for(int c_i = 0; c_i < t; c_i++){
       cin >> c[c_i];
    }
    long long ans = 0, nn = n;;
    for(int c_i = 0; c_i < t; c_i++){
       nn -= c[c_i];
        if((nn < 5) && (c_i != (t-1))){
            ans += n - nn;
            nn += n - nn;
        }
    }
    cout << ans << endl;
    // your code goes here
    return 0;
}
