class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char &ch:s){
            if(ch!='*'){
                st.push(ch);
            }
            else if(!st.empty()&&ch=='*'){
                st.pop();
            }

        }
        string ans="";
        while(!st.empty()){
            if(!st.empty()){
                ans+=st.top();
            }
            st.pop();    
            
        }
       // string stt=ans;
        string stt(ans.rbegin(), ans.rend());
        return stt;
    }
};