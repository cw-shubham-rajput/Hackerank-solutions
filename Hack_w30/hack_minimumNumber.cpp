#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string str = "";
    for(int i=1; i<n; i++){
        str += "min(int, ";
    }
    str += "int";
    for(int i=1; i<n; i++){
        str += ")";
    }
    cout << str << endl;
    return 0;
}
