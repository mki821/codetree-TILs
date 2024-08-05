#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int sum = 0;

    for(int n = 0; n < 2; ++n) {
        string temp;
        cin >> input;

        for(int i = 0; i < input.length(); ++i) {
            if(input[i] >= '0' && input[i] <= '9') {
                temp.push_back(input[i]);
            }
        }

        sum += stoi(temp);
    }

    cout << sum;

    return 0;
}