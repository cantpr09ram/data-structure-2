#include <iostream>
using namespace std;

int t[1000001] = {0};

int main() {
    for(int n=0; n<100000; n++) {
        int y =n, x = n;
        while(x > 0){
            y = y + x%10;
            x = x/10;
        }
        if (y > 100000) continue;
        if(t[y] == 0) t[y] = n;
    }
    int w, m;
    cin>>w;
    while (w--){
        cin>>m;
        cout<<t[m]<<endl;
    }
    
    return 0;
}