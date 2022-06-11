
/*
    Give a string, find out if it's charaters can be rearranged to form a palindrome.
    ( đừa vào 1 chuỗi, tìm kiếm xem các ký tự có thể được sắp xếp lại để nó vẫn là dạng palindrome không )

    Ex:     string:     aabb    
            "aabb" => "abab"

*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool solution(string str)
{
    vector<char> list;
    for (int i = 0; i < str.length(); i++) {
        auto pos = find(list.begin(), list.end(), str[i]);
        if (pos != list.end()) {
            auto posi = find(list.begin(), list.end(), str[i]);
            list.erase(posi);
        }else
            list.push_back(str[i]);
    }
    if ((str.length() % 2 == 0 && list.empty() || (str.length() % 2 == 1 && list.size() == 1)) 
        return true;
    else
        return false;
}
 
int main()
{
    string str;
    getline(cin, str);
    solution(str);
    if (solution(str)) {
        cout << "String Palindrome!!!";
    } else {
        cout << "String No Palindrome!!!";
    }
    return 0;
}