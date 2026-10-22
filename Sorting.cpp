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

bool comparator(pair<int, int> p1, pair<int, int> p2){   // creating a comparator for the 2nd val sorting
    if(p1.second < p2.second)
        return true;
    else
        return false;
}

int main(){

    int arr[6] = {1, 12, 3, 24, 5, 4};
    
    vector<int> vec = {11, 2, 5, 3, 90, 44};
    vector<int> vec2 = {11, 2, 5, 3, 91, 44};

    vector<pair<int, int>> p1 = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Sort vector in ascending order
    sort( vec.begin(), vec.end() );

    // Sort vector in descending order
    sort( vec2.begin(), vec2.end(), greater<int>() );

   // sort( p1.begin(), p1.end() ); // 1st value sorted

    sort( p1.begin(), p1.end(), comparator );  // 2nd value sorted 

    for(int val: arr){
        cout << val << " ";
    }
    cout << endl;

    for(int val: vec){
        cout << val << " ";
    }
    cout << endl;

    for(int val: vec2){
        cout << val << " ";
    }
    cout << endl;

    for(auto val: p1){
        cout << val.first << " "<< val.second << endl ;
    }
    cout << endl;    

    return 0;
}
