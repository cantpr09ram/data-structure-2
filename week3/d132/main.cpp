#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int game = 1, n;
    while (cin >> n && n != 0) {
        printf("Game %d:\n", game++);

        vector<int> s(n);
        for (int i=0; i<n; i++) cin>>s[i];

        vector<int> g(n);
        while (1) {
            int a=0, b=0, z=0;
            for(int i=0; i<n;i++){
                cin>>g[i];
                if(g[i] == s[i]) a++;
                if(g[i] == 0) z++;
            }
            if(z == n) break;

            for(int d=1; d<=9; d++){
                int sc = 0, gc = 0;
                for(int i=0; i<n;i++){
                    if(d == s[i]) sc++;
                    if(d == g[i]) gc++;
                }
                b = b + min(sc, gc);
            }
            b = b-a;
            printf("    (%d,%d)\n",a,b);
        }
    }
    return 0;
}