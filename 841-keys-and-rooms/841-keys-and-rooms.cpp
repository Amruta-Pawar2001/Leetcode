class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        bool *visited = new bool[n];
        bool ans;
        for(int i =0;i<n;i++)
        {
            visited[i]=false;
        }
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(q.size()!=0)
        {
            int room = q.front();
            q.pop();
            for(auto key: rooms[room])
            {
                if(!visited[key])
                {
                    visited[key]=true;
                    q.push(key);
                }
            }
        }
        // for(auto x: rooms)
        // {
        // queue<int> keys;
        // keys.push(rroms[x]);
        // while(keys.size()!=0)
        // {            
        //     int newroom = keys.front(x[0]);
        //     keys.pop();
        //     if(!visited[newroom])
        //     {
        //         keys.push(rooms[newroom]); 
        //         visited[newroom]=true;
        //     }            
        // }
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
                return false;
        }           
        return true;
    }
        
};