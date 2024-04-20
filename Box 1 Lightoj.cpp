#include <iostream>

using namespace std;



int main (){


    int t;
    cin>>t;

    while (t--){

        int n;
        cin>>n;

            for (int i=1; i<=n; i++){
                for (int j=1; j<=n; j++){
                    cout << "*";
                }
                cout << "\n";
            }

            if (t!=0)cout<<"\n";

    }


    return 0;
}
