class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxVol=0;
        int left=0,right=n-1;
        int miniHeight=0,volume=0;
        while(left<=right){
            miniHeight=min(height[left],height[right]);
           //cout<<miniHeight<< "*"<<endl;
            volume=(right-left)*miniHeight;
            //cout<<volume<<endl;
            maxVol=max(maxVol,volume);
            
            if(height[right]<=height[left]){
                right--;
            }else{
                left++;
            }
            

        }

        return maxVol;
        
    }
};//tc -> O(n)