#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;                   // vector container create
    // vector<int> vec = {1,2,3};      // runtime initilization
    vector<int> a(3,11);

    vec.push_back(1);                  // pushing input 
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.emplace_back(6);                           // simple alternative of push but creats emplaced objects

    vec.pop_back();                                // this will auto pop the last index data in vector

    vec.erase(vec.begin() + 2);                    // will erase the 3rd index of the vector array

    vec.insert(vec.begin() + 2, 111);              // this will input the number 111 inside the 3rd index

    for( int val : vec){
        cout << val << " ";
    }
    cout << endl;

    for( int val : a){                            // this loop will print all the values in a vectt
        cout << val << " ";
    }
    cout << endl;
  
    vector<int>::iterator it;                    // initilization of iterator 

    for (it = vec.begin(); it != vec.end(); it++){     
        cout << *(it) << " ";
    }
    cout << endl;

    // vector<int>::reverse_iterator it                      // reverse iterator 

    for (vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;  
    
    for (auto it = vec.rbegin(); it != vec.rend(); it++)      // auto dose the same thing 
    {
        cout << *(it) << " ";
    }
    cout << endl;     

    cout << " Value of index 2: " << vec[2] << " or " << vec.at(2) << endl;  // shows the index

    cout << " the fornt : " << vec.front() << endl;
    cout << " the back : " << vec.back() << endl;    

    cout << vec.size() << endl;         // Size of vector 
    cout << vec.capacity() << endl;     // Capacity of vector

    cout << "vec.begin : " << *(vec.begin()) << endl;        // this will give the data inside of first index by d-refferencing using *
    cout << "vec.end : " << *(vec.end()) << endl;             

    vec.clear();                         //clears all 

    cout << vec.size() << endl;         // Size of vector 
    cout << vec.capacity() << endl;     // Capacity of vector

    return 0;
}