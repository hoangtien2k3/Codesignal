
/*



*/

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int> arr, int n) {
    for(int i=0; i<n-1; i+=2) {
        if (i == 2) {
            break;
        }
        for(int j=n-1; j>=0; j-=2) {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }
    solution(arr, n);
    for(int i : arr) {
        cout << i << " ";
    }

    return 0;
}

