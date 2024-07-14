#include<bits/stdc++.h>
using namespace std;
int length_of_substring(string s) {
        int n = s.length();
        int maxLength = 0;
        vector<int>v (128, -1);
        int i = 0;
        
        for (int j = 0; j < n; j++) {
            if (v[s[j]] >= i) {
                i = v[s[j]] + 1;
            }
            v[s[j]] = j;
            maxLength = max(maxLength, j - i + 1);
        }
        
        return maxLength;
    }
int main()
{
    string s = "aabbccssddxw";
    cout<<"length of longest substring without repeating character in " <<s<< " is " << length_of_substring(s);
    return 0;
}
