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

//OR
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int cost = prices[0] + prices[1];
        
        if(cost <= money)
            return money - cost;
        else
            return money;
    }
};
//Time complexity=O(nlog n)

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min1) {
                min2 = min1;
                min1 = prices[i];
            }
            else if (prices[i] < min2) {
                min2 = prices[i];
            }
        }

        int cost = min1 + min2;

        if (cost <= money)
            return money - cost;

        return money;
    }
};
//Complexity=O(n)
prices = [5, 2, 4, 1]
| i | prices[i] | min1 | min2 |
| - | --------- | ---- | ---- |
| 0 | 5         | 5    | INF  |
| 1 | 2         | 2    | 5    |
| 2 | 4         | 2    | 4    |
| 3 | 1         | 1    | 2    |

