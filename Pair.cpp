#include<iostream>
#include<vector>
#include<utility>
#include<string>
using namespace std;

int main(){

    pair<int, int> p = {1, 5};

    pair<string, int> p2 = {"rafi", 5};

    cout << p.first << endl;      // with first we can access the first data of the pair
    cout << p.second << endl;

    cout << p2.first <<" "<< p2.second << endl;

    pair<int, pair<char, int>> dp = {1, {'R', 5} };   // this is pair fo pair

    cout << dp.first << endl;
    cout << dp.second.first << endl;                 // accessing the first elements of 2nd pair
    cout << dp.second.second << endl;                // accessing the 2nd element of 2nd pair

    vector<pair<int, int>> vec = {{1, 2},{2,3},{3,4}};           // pair of vector

    vec.push_back({4, 5});                                      // we also need to send data in pairs
    vec.emplace_back(5, 6);                                     // inplace object creation

    for(pair<int, int> p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
