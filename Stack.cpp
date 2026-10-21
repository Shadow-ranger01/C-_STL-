#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    stack<int> s;         // stack 1

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack<int> s2;        // stack 2
 
    s2.swap(s);           // this will swap all the values of s with s2

    cout << "s size : " << s.size() << endl;        //0
    cout << "s2 size : " << s2.size() << endl;      //4

    /* while (!s.empty())
      {
          cout << s.top() << " ";
          s.pop();
      }  */

    cout << "Top of s = " << s.top() << endl;
    cout << "Top of s2 = " << s2.top() << endl;

    return 0;
}
