
/*



*/

#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> inputArray) {
    int min = -1e6;
    int answer = 0;
    for(int i : inputArray)
    {
        min = max(min + 1, i);
        answer += min - i;
    }
    return answer;
}

int main() {
    int n; cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        a.push_back(x);
    }
    cout << solution(a);
    return 0;
}