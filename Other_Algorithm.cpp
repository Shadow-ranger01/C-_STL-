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

    //reverse(vec.begin()+1, vec.begin()+3);    // for the number of range 1-3

   // for(auto val : vec){
   //     cout << val << " ";
   // }
   // cout << endl;

   string s = "bac";
  // next_permutation(s.begin(), s.end());

   prev_permutation(s.begin(), s.end());

   cout << s << endl;

   int a = 5, b = 10;
   swap(a, b);
   cout << "a = " << a << endl;

   cout << *(max_element(vec.begin(), vec.end())) << endl;

   cout << *(min_element(vec.begin(), vec.end())) << endl;

   cout << binary_search(vec.begin(), vec.end(), 4) << endl;

   int n = 15;
   long int n2 = 15;
   long long int n3 = 26;

   cout << __builtin_popcount(n) << endl; //counts the set bits

   cout << __builtin_popcountl(n2) << endl; // for long int

   cout << __builtin_popcountll(n3) << endl;   // for long long int 

   return 0;
}
