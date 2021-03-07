class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
     set<int>s;
        for(int i=0;i<candyType.size();i++){
            s.insert(candyType[i]);
        }
        int k=s.size();
        int l=candyType.size();
        return min(l/2,k);
    }
};
