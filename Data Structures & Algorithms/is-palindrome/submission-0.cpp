class Solution {
public:
    void removeSpecialCharacter(string &s) {
        for (int i = 0; i < s.size(); i++) {
            if (!isalpha(s[i]) && !isdigit(s[i])) {
                s.erase(i, 1);
                i--;
            }
        }
    }

    bool isPalindrome(string s) {
        removeSpecialCharacter(s);

        for (char &c : s)
            c = tolower(c);

        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }

        return true;
    }
};