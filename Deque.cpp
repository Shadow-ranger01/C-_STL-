#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    for(int val : d){
        cout << val << " ";
    }
    cout << endl;

    cout << d[2] << endl;            // because of [2] we can access the deque dynamically

    return 0;
}