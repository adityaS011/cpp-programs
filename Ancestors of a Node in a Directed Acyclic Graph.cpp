                                        //problem link :
//https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/

//                                   problem description :

// You are given a positive integer n representing the number of nodes of a Directed Acyclic Graph (DAG). The nodes are numbered from 0 to n - 1 (inclusive).
// You are also given a 2D integer array edges, where edges[i] = [fromi, toi] denotes that there is a unidirectional edge from fromi to toi in the graph.
// Return a list answer, where answer[i] is the list of ancestors of the ith node, sorted in ascending order.
// A node u is an ancestor of another node v if u can reach v via a set of edges.

 
  //                                    solution


#include<bits.stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        
        
        queue<int>q;
        vector<int>indeg(n,0);
       vector<set<int>> ancestor(n);
        vector<int>adj[n];
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            indeg[edges[i][1]]++;
        }
        
        for(int i=0;i<n;i++){
            {
                if(indeg[i]==0)q.push(i);
                 ancestor[i] = {};   
            }
        
        }
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            
            
            for(auto i:adj[node]){
                indeg[i]--;
                if(indeg[i]==0)q.push(i);
                
                
                
                // the ancestor of the curr node will be ancestor od nbr
                for(auto anc:ancestor[node]){
                    ancestor[i].insert(anc);
                }
                //curr node will be ancestor of the neighbour
                ancestor[i].insert(node);
                
            }
            
            
        }
       vector<vector<int>> res(n);
        for(int i = 0;i<ancestor.size();i++){
            for(auto j : ancestor[i]){
                res[i].push_back(j);
            }
        }
        return res;
  
    }
};
