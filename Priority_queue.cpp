#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){

    // Max-heap: highest element comes first
    priority_queue<int> pq;

    pq.push(5);                  // putting input in a wrong order but queue will be in a proper order higest element on the top
    pq.push(3);
    pq.push(10);
    pq.push(4);

    // Min-heap: lowest element comes first   
    priority_queue<int, vector<int>, greater<int>> pqr;  

    pqr.push(5);    
    pqr.push(3);
    pqr.push(10);
    pqr.push(4);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    while (!pqr.empty())
    {
        cout << pqr.top() << " ";
        pqr.pop();
    }
    cout << endl;    

    return 0;
}
