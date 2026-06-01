#include <iostream>
#include <stack>
using namespace std;

bool isPalindrome(string str) {
    stack<char> s;
    for (char c : str) s.push(c);
    for (char c : str) {
        if (c != s.top()) return false;
        s.pop();
    }
    return true;
}
