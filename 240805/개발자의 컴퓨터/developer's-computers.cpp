#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, max = 0;
    int s, t, b;
    map<int, int> m;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> s >> t >> b;

        for(int j = s; j <= t; ++j) {
            m[j] += b;
        }
    }

    for(auto mm : m) {
        if(mm.second > max)
            max = mm.second;
    }

    cout << max;

    return 0;
}