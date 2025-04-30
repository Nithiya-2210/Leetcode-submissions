class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_set<char>jewelsSet;
        for(int i=0;i<jewels.size();i++){
            jewelsSet.insert(jewels[i]);
        }
        for(int i=0;i<stones.size();i++){
            if(jewelsSet.contains(stones[i])){
                ans=ans+1;

            }
        }
        return ans;
        }
    
};