
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

    // ==================== ALGORITHMS ====================
    vector<int> a = {4, 1, 3, 2, 5};

    sort(a.begin(), a.end());
    stable_sort(a.begin(), a.end());

    reverse(a.begin(), a.end());
    rotate(a.begin(), a.begin() + 1, a.end());

    cout << *max_element(a.begin(), a.end()) << "\n";
    cout << *min_element(a.begin(), a.end()) << "\n";

    cout << count(a.begin(), a.end(), 3) << "\n";
    cout << (find(a.begin(), a.end(), 3) != a.end()) << "\n";

    next_permutation(a.begin(), a.end());
    prev_permutation(a.begin(), a.end());

    // ==================== BINARY SEARCH ====================
    sort(a.begin(), a.end());

    bool found = binary_search(a.begin(), a.end(), 3);

    auto lb = lower_bound(a.begin(), a.end(), 3);
    auto ub = upper_bound(a.begin(), a.end(), 3);

    // ==================== NUMERIC ====================
    vector<int> nums = {1, 2, 3, 4, 5};

    cout << accumulate(nums.begin(), nums.end(), 0) << "\n";
    cout << gcd(12, 18) << "\n";
    cout << lcm(12, 18) << "\n";

    // ==================== BIT OPERATIONS ====================
    int x = 10;

    cout << __builtin_popcount(x) << "\n";
    cout << __builtin_clz(x) << "\n";
    cout << __builtin_ctz(x) << "\n";

    // ==================== PAIR SORTING ====================
    vector<pair<int, int>> vp = {
        {2, 3}, {1, 5}, {2, 1}
    };

    sort(vp.begin(), vp.end());

    // ==================== LAMBDA / CUSTOM SORT ====================
    vector<int> custom = {5, 1, 4, 2, 3};

    sort(custom.begin(), custom.end(),
         [](int a, int b) {
             return a > b;
         });

    // ==================== EMPLACE / INSERT ====================
    set<int> st2;
    st2.insert(10);
    st2.emplace(20);

    // ==================== OUTPUT ====================
    for (int value : v) {
        cout << value << " ";
    }
    cout << "\n";

    return 0;
}

