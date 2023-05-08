class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        int last[26] = {0};
        for(int i = 0; i < n; ++i){
            last[s[i] - 'a'] = i; // last index of a character in the string
        }
        int seen[26] = {0}; // we dont have to insert duplicate characters : see line 16
        string stack = "";
        for(int i = 0; i < n; ++i){
            while(stack.size() and stack.back() > s[i] and last[stack.back() - 'a'] > i and seen[s[i] - 'a'] == 0){
                // s[i] will only remove characters when it is not in the list ;; otherwise it has no use
                seen[stack.back() - 'a'] = 0;
                stack.pop_back();
            }
            if(seen[s[i] - 'a'] == 0) // s[i] should be inserted once
                stack.push_back(s[i]), seen[s[i] - 'a'] = 1;
        }
        return stack;
    }
};