#include <bits/stdc++.h>

using namespace std;
  string clearDigits(string s) {
        stack<char> st;
        string ans;

        for (auto c : s) {
            if (isdigit(c)) {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(c);
            }
        }

        if (st.empty())
            return "";

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

int main() {
    string a = "abc";

    string c = clearDigits(a);

    cout << c << endl;
    return 0;
}
    
