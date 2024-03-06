#include <iostream>
#include <string>
using namespace std;

int main() {
    string ori = " `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char ch;
    while (cin.get(ch))
    {
        if (ch == '\n' || ch == ' ') {
            cout<<ch;
        }else {
            int found = ori.find(ch);
            cout<<ori[found-1];
        }
    }
    return 0;
}
