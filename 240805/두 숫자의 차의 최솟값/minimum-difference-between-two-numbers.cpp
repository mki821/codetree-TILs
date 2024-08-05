#include <iostream>
#include <vector>
using namespace std;

int main() {
    int min = 101;
    int n, input;
    vector<int> vec;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> input;
        vec.push_back(input);
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(vec[i] == vec[j]) continue;

            if(vec[i] > vec[j]) {
                if(vec[i] - vec[j] < min)
                    min = vec[i] - vec[j];
            }
            else {
                if(vec[j] - vec[i] < min)
                    min = vec[j] - vec[i];
            }
        }
    }

    cout << min;

    return 0;
}