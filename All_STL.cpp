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

    return 0;
}
