class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i, j=0, mx = 0;
    
        for(i=0; i<s.length(); i++){
            if(st.find(s[i]) != st.end()){
                mx = max(mx, i-j);
                while(st.find(s[i]) != st.end()){
                    st.erase(s[j++]);
                }
            }
            st.insert(s[i]);
        }
        mx = max(mx, i-j);
        return mx;
    }
};class Solution1231 {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i, j=0, mx = 0;
    
        for(i=0; i<s.length(); i++){
            if(st.find(s[i]) != st.end()){
                mx = max(mx, i-j);
                while(st.find(s[i]) != st.end()){
                    st.erase(s[j++]);
                }
            }
            st.insert(s[i]);
        }
        mx = max(mx, i-j);
        return mx;
    }
};class Solution31 {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i, j=0, mx = 0;
    
        for(i=0; i<s.length(); i++){
            if(st.find(s[i]) != st.end()){
                mx = max(mx, i-j);
                while(st.find(s[i]) != st.end()){
                    st.erase(s[j++]);
                }
            }
            st.insert(s[i]);
        }
        mx = max(mx, i-j);
        return mx;
    }
};class Solution213 {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i, j=0, mx = 0;
    
        for(i=0; i<s.length(); i++){
            if(st.find(s[i]) != st.end()){
                mx = max(mx, i-j);
                while(st.find(s[i]) != st.end()){
                    st.erase(s[j++]);
                }
            }
            st.insert(s[i]);
        }
        mx = max(mx, i-j);
        return mx;
    }
};