class Solution {
public:
    bool isValid(string s) {
        
        string stack = "";

        for (int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push_back(s[i]);
            } else {
                char top = '\0';
                if(stack.size() > 0) {
                    top = stack[stack.size()-1];
                    stack.pop_back();
                } 
                
                if(s[i] == ')' && top == '(') {
                    continue;
                } else if(s[i] == '}' && top == '{') {
                    continue;
                } else if(s[i] == ']' && top == '[') {
                    continue;
                } 
                return false;
            }
        }
        return stack.size() > 0 ? false : true;

    }
};