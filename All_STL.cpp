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
    reverse(s.begin(), s.end());

    // ==================== STACK ====================
    stack<int> st;
    st.push(10);
    st.push(20);
    st.top();
    st.pop();

    // ==================== QUEUE ====================
    queue<int> q;
    q.push(10);
    q.push(20);
    q.front();
    q.pop();
    
    // ==================== DEQUE ====================
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.pop_back();
    dq.pop_front();

    // ==================== PRIORITY QUEUE ====================
    priority_queue<int> maxHeap;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    maxHeap.push(10);
    maxHeap.push(30);
    minHeap.push(10);
    minHeap.push(5);

    // ==================== SET ====================
    set<int> s1 = {3, 1, 2, 2};

    // ==================== MULTISET ====================
    multiset<int> ms = {1, 2, 2, 3};

    // ==================== UNORDERED SET ====================
    unordered_set<int> us = {1, 2, 3};

    // ==================== MAP ====================
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";

    // ==================== MULTIMAP ====================
    multimap<int, string> mmp;
    mmp.insert({1, "one"});
    mmp.insert({1, "uno"});

    // ==================== UNORDERED MAP ====================
    unordered_map<string, int> ump;
    ump["apple"] = 5;

    // ==================== LIST ====================
    list<int> li = {1, 2, 3};
    li.push_front(0);
    li.push_back(4);

    // ==================== FORWARD LIST ====================
    forward_list<int> fl = {1, 2, 3};
    fl.push_front(0);

    // ==================== ITERATORS ====================
    auto it = v.begin();
    if (it != v.end()) {
        cout << *it << "\n";
    }

    return 0;
}
