class Solution {
public:
    bool isAnagram(string s, string t) {
        // Different lengths can never be anagrams
        if (s.length() != t.length()) return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;   // s adds 1
            count[t[i] - 'a']--;   // t subtracts 1
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }
};