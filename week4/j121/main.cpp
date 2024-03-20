#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define all(x) x.begin(), x.end()

int main() {
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        vector<int> v1(26,0), v2(26, 0);

        for(auto c: s1) v1[c-'A']++;
        for(auto c: s2) v2[c-'A']++;
        sort(all(v1));
        sort(all(v2));
       cout<<(v1 == v2 ? "YES\n" : "NO\n");
    }
    return 0;
}