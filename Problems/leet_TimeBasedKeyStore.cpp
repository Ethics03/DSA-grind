#include<bits/stdc++.h>


using namespace std;
class TimeMap {
    private: 
        unordered_map<string, vector<pair<int, string>>> store;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        store[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        auto& val = store[key];
        int l = 0, r = val.size() - 1;
        string ans = "";
          while(l <= r){
            int md = l + (r-l) / 2;
            if(val[md].first <= timestamp){
                ans = val[md].second;
                l = md + 1;
                 } else {
                    r = md - 1;
                 }

        }
        return ans;
    }
};

int  main () {
    TimeMap timeMap = new TimeMap();
    timeMap.set("alice", "happy", 1);
    cout << timeMap.get("alice", 2); << endl;
  return 0;
}
