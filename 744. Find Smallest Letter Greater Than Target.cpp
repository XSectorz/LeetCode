class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        for(int i = 0  ; i < letters.size() ; i++) {
            //cout << int(letters[i]) << endl;
            if(int(target) < int(letters[i])) {
                return letters[i];
            }
        }

        if(letters.size() < 0) {
            return '\0';
        }

        return letters[0];
    }
};