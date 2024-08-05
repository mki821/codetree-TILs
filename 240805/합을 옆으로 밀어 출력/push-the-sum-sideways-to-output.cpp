#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, input, sum = 0;
    string result, output;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> input;

        sum += input;
    }

    result = to_string(sum);

    for(int i = 1; i < result.length(); ++i) {
        output.push_back(result[i]);
    }
    output.push_back(result[0]);

    cout << output;

    return 0;
}