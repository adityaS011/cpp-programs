class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
         if(source==target)return 0;
        unordered_map<int,vector<int>> mp;
        for(int i=0; i<routes.size(); i++){
            for(int stop : routes[i]){
                mp[stop].push_back(i);
            }
        }
        vector<int> visitedRoute(routes.size(), 0);
        queue<int> q;
        q.push(source);
        int buses = 0;

        while(!q.empty()){
            int size = q.size();
            while(size--){
                int stop = q.front(); q.pop();
                if(stop == target) return buses;
                for(int i : mp[stop]){
                    if(visitedRoute[i]) continue;
                    visitedRoute[i] = 1;
                    for(int nextStop : routes[i]){
                        q.push(nextStop);
                    }
                }
            }
            buses++;
        }
        return -1;
    }
};