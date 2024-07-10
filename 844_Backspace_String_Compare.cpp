#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

bool backspaceCompare(string s, string t) {
        stack<char>s1;
        for(char c:s)
        {
            if(c == '#' && !s1.empty()) s1.pop();
            else if(c != '#') s1.push(c);
        }
        stack<char>ch;
        ch = s1;
        while(!ch.empty())
        {
            cout<<ch.top();
            ch.pop();
        }
        cout<<endl;
        
        stack<char>s2;
        for(char c:t)
        {
            if(c == '#' && !s2.empty()) s2.pop();
            else s2.push(c);
        }
        ch = s2;
        while(!ch.empty())
        {
            cout<<ch.top();
            ch.pop();
        }
        if(s1 == s2) return true;
        else return false;
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    bool f = backspaceCompare(s1,s2);
    if(f) cout<<"true\n";
    else cout<<"false\n";
    return 0;
}