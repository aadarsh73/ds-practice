//https://leetcode.com/problems/combination-sum/

// Time complexity -> 2^t * k  -> if each element is taken only a single time 
// Space complexity -> k * x  -> Assuming there are k is the average length and x combinations.

class Solution {
    public:
     void find(int ind, vector<vector<int>>& ds, vector<int>& a, int t, vector<int>& candidates){
            if(ind == candidates.size()){
                if(t == 0){
                    ds.push_back(a);
                }
                return;
            }

            if(t==0){
                ds.push_back(a);
                return;
            }

            if(candidates[ind]<=t){
                a.push_back(candidates[ind]);
                find(ind,ds,a,t-candidates[ind], candidates);
                a.pop_back();
            }
            find(ind+1,ds,a,t, candidates);

            
        }
public:

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        

        
        vector<vector<int>> ds;
        int ind = 0;
        vector<int> a;
        find(ind,ds,a,target, candidates);
        return ds;
    }
};