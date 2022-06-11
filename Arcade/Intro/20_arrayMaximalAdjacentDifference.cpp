
/*
    Given an array of integers, find the maximal absolute difference between any two of its adjacent elements.

Example:
    For inputArray = [2, 4, 1, 0], the output should be
    solution(inputArray) = 3.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int solution(vector<int> inputArray) {
    // int max_elemets = abs(inputArray[0] - inputArray[1]);
    // for(int i=0; i < inputArray.size() - 1; i++) {
    //     if (abs(inputArray[i] - inputArray[i + 1]) > max) {
    //         max_elements = abs(inputArray[i] - inputArray[i + 1]);
    //     }
    // }
    
    int max_elements = 0;
    for(int i=0; i<inputArray.size() - 1; i++) {
        max_elements = max(max_elements, abs(inputArray[i + 1] - inputArray[i]));
    }
        
    return max_elements;
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    cout << solution(a) << endl;
    return 0;
}