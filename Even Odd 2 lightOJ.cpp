#include <bits/stdc++.h>

using namespace std;

int main (){

    int t;
    cin >> t;

    while (t--){
        string n;
        cin >> n;


        char len= n.back();
        int n1= len - '0';

        if (n1%2==0){
            cout<<"even"<<endl;
            }
        else if (n1%2!=0){
                cout<<"odd"<<endl;
            }


        }



    return 0;
}
