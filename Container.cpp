class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size(); // Get the size of the height vector
        int maxVol=0; // Initialize the maximum volume
        int left=0,right=n-1; // Initialize left and right pointers
        int miniHeight=0,volume=0; // Initialize minimum height and volume
        while(left<=right){ // Iterate until left and right pointers cross each other
            miniHeight=min(height[left],height[right]); // Find the minimum height between the left and right pointers
           //cout<<miniHeight<< "*"<<endl;
            volume=(right-left)*miniHeight; // Calculate the volume
            //cout<<volume<<endl;
            maxVol=max(maxVol,volume); // Update the maximum volume
            
            if(height[right]<=height[left]){ // If the right height is less than or equal to the left height
                right--; // Move the right pointer to the left
            }else{// If the left height is smaller
                left++; // Move the left pointer to the right
            }
            

        }

        return maxVol; // Return the maximum volume
        
    }
};//tc -> O(n)