// incomplete

#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;  cin>>t;

    while (t--) {
        int n;  cin>>n;

        int a[n];
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }

        int evenCnt = 0;
        for (int i=0; i<n; i +=2) {
            evenCnt++;
        }
        
        int oddCnt = 0;
        for (int i=1; i<n; i +=2) {
            oddCnt++;
        }
        int cnt = max(evenCnt, oddCnt);

        int Max = 0;
        if(evenCnt > oddCnt) {
            for (int i=0; i<n; i +=2) {
                Max = max(Max, a[i]);
            }   
        }
        else {
            for (int i=1; i<n; i +=2) {
                Max = max(Max, a[i]);
            }   
        }

        cout<<Max + cnt<<endl;
    }
    return 0;
}