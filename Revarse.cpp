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
#include<algorithm>
#include<functional>
using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4, 5};

    //reverse(vec.begin(), vec.end());   // all the number 

    reverse(vec.begin()+1, vec.begin()+3);    // for the number of range 1-3

    for(auto val : vec){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
