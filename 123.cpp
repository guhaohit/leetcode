class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() == 0)
            return 0;
        int n=prices.size();
        int profit=0;
        int *opt = new int[n];
        opt[0]=0;
        int *rev_opt = new int[n];
        rev_opt[n-1]=0;
        //正向计算代价
        int min = prices[0];
        int now = 0;
        for(int i = 1;i<n;i++){
            if(prices[i]<min)
                min = prices[i];
            else if(prices[i]-min > now)
                now = prices[i]-min;
            opt[i]=now;
        }
        //反向计算代价
        int max = prices[n-1];
        now = 0;
        for(int i = n-2;i>=0;i--){
            if(prices[i]>max)
                max = prices[i];
            else if(max-prices[i] > now)
                now = max-prices[i];
            rev_opt[i]=now;
        } 
        //计算最终结果
        for(int i=1;i<n;i++){
            if(profit<opt[i]+rev_opt[i])
                profit = opt[i]+rev_opt[i];
        }
        return profit;
    }
};