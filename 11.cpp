class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = height.size();
        if(m<2){
            return 0;
        }
        int result = min(height[0],height[m-1])*(m-1);
        int i = 0,j = m-1; 
        while(i<j){
            result = max(result,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                int k = height[i];
                while(height[i]<=k)
                    i++;
            }
            else{
                int k = height[j];
                while(height[j]<=k)
                    j--;
            }
        }
        return result;
    }
};