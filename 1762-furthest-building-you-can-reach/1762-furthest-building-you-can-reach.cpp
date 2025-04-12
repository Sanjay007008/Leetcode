class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int> pq ;  //max heap 


        for(int i=0 ; i<h.size()-1 ; i++)
        {
            int diff = h[i+1] - h[i] ; 

            if(diff <= 0 )
            {
                continue ; 
            }

            b -= diff ; 
           pq.push(diff) ; 

            if(b < 0)
            {
                if(l > 0)
                {
                    b += pq.top(); pq.pop();

                    l-- ; 
                }
                else{
                    return i ; 
                }
            }

        }


        return h.size()-1;
    }
};