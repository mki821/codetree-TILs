#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count = 0;
    string input;
    vector<string> vec;

    do {
        cin >> input;
        ++count;

        vec.push_back(input);
    } while(input != "0");

    cout << count - 1 << "\n";

    for(int i = 0; i < count; i += 2) {
        cout << vec[i] << "\n";
    }

    return 0;
}