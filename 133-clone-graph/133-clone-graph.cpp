/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(unordered_map<int,Node*> &visited,Node* cur,Node *copy)
    {
        visited[cur->val]=copy;
        for(int i =0;i<cur->neighbors.size();i++)
        {
             if(visited.find(cur->neighbors[i]->val)==visited.end())
            {
            Node *newcopy = new Node(cur->neighbors[i]->val);    
            (copy->neighbors).push_back(newcopy);            
            dfs(visited,cur->neighbors[i],newcopy);
            }
             else
             {
                 (copy->neighbors).push_back(visited[cur->neighbors[i]->val]);
             }
        }
        
    }
    Node* cloneGraph(Node* node) {
        
        // vector<Node*> ans;
        if(node==NULL)
        {
            return NULL;
        }
        Node *startnode = new Node(node->val);
        unordered_map<int,Node*> visited;
        visited[node->val]= startnode;
         for(int i =0;i<node->neighbors.size();i++)
         {
            if(visited.find(node->neighbors[i]->val)==visited.end())
            {
            Node *copy = new Node(node->neighbors[i]->val);    
            (startnode->neighbors).push_back(copy);            
            dfs(visited,node->neighbors[i],copy);
            }
             else
             {
                 (startnode->neighbors).push_back(visited[node->neighbors[i]->val]);
             }
         }
        return startnode;
        
    }
};