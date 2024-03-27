#include <iostream>
#include <vector>
#include <string>

using namespace std;
int n;
vector<int> v[25];

void find_block(int b, int& p, int& h) {
    for (p = 0; p < n; p++) {
        for (h = 0; h < v[p].size(); h++) {
            if (v[p][h] == b) return;
        }
    }
}

void clear_above(int p, int h) {
    for (int i = h + 1; i < v[p].size(); i++) {
        int b = v[p][i];
        v[b].push_back(b);
    }
    v[p].resize(h + 1);
}

void pile_onto(int p, int h, int p2) { //
    for (int i = h; i < v[p].size(); i++) {
        v[p2].push_back(v[p][i]);
    }
    v[p].resize(h);
}

void show() {
    for (int i = 0; i < n; i++) {
        cout << i << ":";
        for (int j = 0; j < v[i].size(); j++) {
            cout << " " << v[i][j];
        }
        cout << endl;
    }
}

int main() {
    string s1, s2;
    int a, b, p1, p2, h1, h2;
    while (cin>>n){
        for (int i = 0; i < n; i++) {
            v[i].clear();
            v[i].push_back(i);
        }
        while (cin>>s1 && s1 != "quit") {
            cin>>a>>s2>>b;
            find_block(a, p1, h1);
            find_block(b, p2, h2);
            if (p1 == p2) continue;
            if (s1 == "move") clear_above(p1, h1);
            if (s2 == "onto") clear_above(p2, h2);
            pile_onto(p1, h1, p2);
        }
        show();
    }
    
}