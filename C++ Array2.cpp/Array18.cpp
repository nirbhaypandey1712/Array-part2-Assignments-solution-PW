/*Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x.*/

#include <iostream>
#include <vector>
using namespace std;

void findPair(const vector<int>& arr, int x) {
    int n = arr.size();
    int i = 0;
    int j = 1; 

    while (i < n && j < n) {
        if (i != j && abs(arr[j] - arr[i]) == x) {
            cout << arr[i] << " " << arr[j] << endl;
            return; 
        }
        // move the pointers
        if (abs(arr[j] - arr[i]) < x) {
            j++;
        } else {
            i++;
        }
    }
    cout << "No such pair found" << endl;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findPair(arr, x);
    return 0;
}
