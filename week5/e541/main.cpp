#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
#define ALL(x) x.begin(), x.end()

int main() {
    int Case = 0;
    int N, Q;
    while (cin>>N>>Q && N!=0){
        printf("CASE# %d:\n", ++Case);

        vector<int> v(N);

        for(int i=0; i<N; i++) cin>>v[i];

        sort(ALL(v));

        while (Q--){
            int f;
            cin>>f;
            int p = lower_bound(ALL(v), f) - v.begin();
            if (p < N && v[p] == f) {
                printf("%d found at %d\n", f, p+1);
            } else {
                printf("%d not found\n", f);
            }
        }
        
    }
    
}