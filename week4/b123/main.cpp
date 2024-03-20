#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    while (cin>>m>>n)
    {
        int arr[201][201];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
                if (arr[i][j] && j>0) arr[i][j] = arr[i][j-1]+1;
            }
        }
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        int maxArea = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int minH = 201;
                for(int k=0; k<= i && arr[i - k][j]; k++){
                    minH = min(minH, arr[i-k][j]);
                    maxArea = max(maxArea, minH*(k+1));
                    //cout<<minH<<" "<<k+1<<endl;
                }
            }
        }
    
        cout<<maxArea<<endl;
    }
    return 0;
}