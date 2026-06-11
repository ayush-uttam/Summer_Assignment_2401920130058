#include <bits/stdc++.h>
using namespace std;

void parenGen(string s, int o, int c, int n, vector<string>& res) {
    if (s.length() == 2 * n) {
        res.push_back(s);
        return;
    }
    if (o < n) parenGen(s + '(', o + 1, c, n, res);
    if (c < o) parenGen(s + ')', o, c + 1, n, res);
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    parenGen("", 0, 0, n, res);
    return res;
}

int main() {
    vector<string> result = generateParenthesis(3);
    for (string s : result) cout << s << endl;
    return 0;
}