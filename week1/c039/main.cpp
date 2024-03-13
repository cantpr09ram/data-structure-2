#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int i ,j;
    while (cin>>i>>j)
    {
        int m = min(i, j);
        int n = max(i, j);
        int c = 0;

        for (int k=m; k<=n; k++){
            int n = k, t = 0;
            while (n != 1)
            {
                t++;
                if (n % 2) {
                    n = n*3 + 1;
                } else {
                    n = n/2;
                }
            }
            c = max(t, c);
        }
        cout<<i<<" "<<j<<" "<<c+1<<endl;
    }
    return 0;   
}