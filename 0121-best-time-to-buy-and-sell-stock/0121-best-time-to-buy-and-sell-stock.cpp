class Solution {
public:
    int maxProfit(vector<int>& arr) {

     int buy = arr[0] ; 
     int profit = 0 ;   

     for(int i=1 ; i<arr.size() ; i++ )
     {
        int temp = arr[i] - buy ;
        profit = max(profit , temp) ; 

        buy = min(buy , arr[i])  ; 



     } 

     return profit ; 
    }
};