
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

string DaoNguoc(string s) {
    int length = s.length();
    string temp;
    for (int i = length - 1; i >=0; i--) {
        temp.push_back(s[i]);
    }
    return temp;
}
 
int main()
{
    string s;
    cin.clear();
    getline(std::cin, s);
    cout << "Chuoi sau khi dao nguoc la: ";
    cout << DaoNguoc(s);
    return 0;
}