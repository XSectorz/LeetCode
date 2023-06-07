class Solution {
public:
    int romanToInt(string s) {
        
        int type;
        int current = 0;
        int stack = 0;

        for(int i = 0 ; i < s.size() ; i++) {

            if(s[i]=='I') {
                
                if(type > 1) {
                    stack += current;
                    current = 0;
                }
                current += 1;
                type = 0;
            } else if(s[i] == 'V') {
                if(type < 1) {
                    if(type > 1) {
                        stack += current;
                        current = 0;
                    }
                    stack += (5 - current);
                    current = 0;
                } else {
                    current += 5;
                }
                 type = 1;
            } else if(s[i] == 'X') {
                if(type < 2) {
                    stack += (10 - current);
                    current = 0;
                } else {
                    if(type > 2) {
                        stack += current;
                        current = 0;
                    }
                    current += 10;
                }
                type = 2;
            } else if(s[i] == 'L') {
                
                if(type < 3) {
                    stack += (50 - current);
                    current = 0;
                } else {
                    if(type > 3) {
                        stack += current;
                        current = 0;
                    }
                    current += 50;
                }
                type = 3;
            } else if(s[i] == 'C') {
                if(type < 4) {
                    stack += (100 - current);
                    current = 0;
                } else {
                    if(type > 4) {
                        stack += current;
                        current = 0;
                    }
                    current += 100;
                }
                type = 4;
            } else if(s[i] == 'D') {
                if(type < 5) {
                    stack += (500 - current);
                    current = 0;
                } else {
                    if(type > 5) {
                        stack += current;
                        current = 0;
                    }
                    current += 500;
                }
                type = 5;
            } else if(s[i] == 'M') {
                if(type < 6) {
                    stack += (1000 - current);
                    current = 0;
                } else {
                    current += 1000;
                }
                type = 6;
            }
        }

        return stack + current;

    }
};