#include<iostream>
#include<utility>
#include<vector>
#include<unordered_map>
#include<queue>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<unordered_set>
using namespace std;

int main(){

    set<int> s;
    multiset<int> s2;
    unordered_set<int> s3;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s2.insert(1);
    s2.insert(2);
    s2.insert(3);
    
    s3.insert(1);
    s3.insert(2);
    s3.insert(3);
    s3.insert(4);
    s3.insert(5);    

    cout << s.size() << endl;

    cout << "Lower bound: " << *(s.lower_bound(4)) << endl;    // thsi will return 4 or up 
    cout << "Upper bound: " << *(s.upper_bound(4)) << endl;    // return greater the the key

    for(int val: s){
        cout << val << " ";
    }
    cout << endl;

    for(int val: s2){
        cout << val << " ";
    }
    cout << endl;
    
    for(int val: s3){
        cout << val << " ";
    }
    cout << endl;    

    return 0;
}
