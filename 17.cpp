class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int temp=money;
        sort(prices.begin(),prices.end());
        for(int i=0;i<2;i++){
            money=money-prices[i];
        }
        if(money<0){
            return temp;
        }else{
            return money;
        }
    }
};
