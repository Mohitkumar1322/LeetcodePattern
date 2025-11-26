class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st,ans2;
        for(auto &it:nums1){
            st.insert(it);
        }
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            if(st.find(nums2[i])!=st.end()){
                ans2.insert(nums2[i]);
            }

        }
        for(auto &it:ans2){
            ans.push_back(it);
        }

        return ans;
        
    }
};