class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        string strF;
        string strS;
        string strT;

        for(int i = 0 ; i < firstWord.size() ; i++) {
            strF+= to_string(firstWord[i]-'a');
            //cout << firstWord[i]-'a';
        }
        
        for(int i = 0 ; i < secondWord.size() ; i++) {
            strS+= to_string(secondWord[i]-'a');
            //cout << secondWord[i]-'a';
        }

        for(int i = 0 ; i < targetWord.size() ; i++) {
            strT+= to_string(targetWord[i]-'a');
           // cout << targetWord[i]-'a';
        }

        if(stoi(strF)+stoi(strS) == stoi(strT)) {
            return true;
        }


        return false;
    }
};