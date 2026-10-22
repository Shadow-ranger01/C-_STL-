#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<utility>
#include<unordered_map>
using namespace std;

int main(){

    map<string, int> m;

    multimap<string, int> m2; // it can have same keys, can use emplace or insert only to input the data

    unordered_map<string, int> m3;  

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablets"] = 120;
    m["watch"] = 55;

    m2.emplace("tv", 100);
    m2.emplace("tv", 101);
    m2.emplace("tv", 101);
    m2.emplace("tv", 101);
    
    m3.emplace("Resister", 100);
    m3.emplace("UNO", 121);
    m3.emplace("ESP32", 190);
    m3.emplace("LED", 11);      

    m.insert({"camera", 30});
    m.emplace("mouse", 44);

    m.erase("tv");               // this will rmove tv in the map

        for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }

        for(auto p : m2){
        cout << p.first << " " << p.second << endl;
    }

        for(auto p : m3){
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
