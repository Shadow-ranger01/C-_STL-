#include <bits/stdc++.h>
using namespace std;

int main() {

    // ==================== PAIR ====================
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << "\n";

     // ==================== VECTOR ====================
    vector<int> v = {5, 2, 8, 1, 3};
    v.push_back(10);
    v.emplace_back(20);
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    // ==================== ARRAY ====================
    array<int, 3> arr = {10, 20, 30};

    // ==================== STRING ====================
    string s = "hello";
    reverse(s.begin(), s.end())

    return 0;
}
