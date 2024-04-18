#include <bits/stdc++.h>

using namespace std;

int main (){

    int t;
    cin >> t;

    while (t--){
        long long n;
        cin >> n;

        if (n%2==0){
            cout<<"even"<< endl;
        }
        else if (n%2!=0){
            cout<<"odd"<< endl;
        }
    }

    return 0;
}
