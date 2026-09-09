class Solution {
public:
    bool isAnagram(string s, string t) {
        set<int> s1;
        if(s.length() != t.length()){
            return false;
        } else {
            sort(s.begin(),s.end());
             sort(t.begin(),t.end());
            if(t==s){
                return true;
            } else return false;
        }
    }
};
