#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<utility>
using namespace std;

int main(){

    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablets"] = 120;
    m["watch"] = 55;

    m.insert({"camera", 30});
    m.emplace("mouse", 44);

    m.erase("tv");               // this will rmove tv in the map

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

    cout << " Count = " << m.count("laptop") << endl;   // how many keys are inside the map are "laptop"

    if(m.find("camera") != m.end()){
        cout << " Found" << endl;
    }
    else{
        cout << " Not found" << endl;
    }

    return 0;
}
