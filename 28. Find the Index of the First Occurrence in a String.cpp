class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.size() < haystack.size()) {
            //cout << haystack.size() - needle.size() << endl;
            for(int i = 0 ; i <= haystack.size() - needle.size() ; i++) {
                //cout << "[" << i << "] " << haystack.substr(i,needle.size()) << endl;
                if(haystack.substr(i,needle.size()) == needle) {
                    return i;
                }
            }
        } else if(needle.size() == haystack.size()) {
            if(needle==haystack) {
                return 0;
            }
        }

        return -1;

    }
};