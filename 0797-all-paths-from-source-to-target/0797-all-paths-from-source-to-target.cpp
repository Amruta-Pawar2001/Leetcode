class Solution {
public:
    
    void givepath(vector<vector<int>>& graph, int source, vector<int> &path,vector<vector<int>>& ans)
    {
        path.push_back(source);
        if(source==graph.size()-1)
        {
            ans.push_back(path);
        }
        else
        {
            for(auto x : graph[source])
            {
                givepath(graph, x , path , ans);
            }
        }
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {   
      
        
        vector<vector<int>> ans;
        vector<int> path;
        givepath(graph,0,path,ans);
        return ans;
    }
};