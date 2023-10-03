Problem Statement:

            Given an adjacency list of a graph adj of V no. of vertices having 0 based index. Check whether the graph is bipartite or not.

            If we are able to colour a graph with two colours such that no adjacent nodes have the same colour, it is called a bipartite graph.

Solution:
            We can follow either of the traversal techniques. In this article, we will be solving it using DFS traversal. 

            DFS is a traversal technique which involves the idea of recursion and backtracking. DFS goes in-depth, i.e., traverses all nodes by going ahead, and when there are no further nodes to traverse in the current path, then it backtracks on the same path and traverses other unvisited nodes. 

            We will be defining the DFS traversal below, but this check has to be done for every component, for that we can use the simple for loop concept that we have learnt, to call the traversals for unvisited nodes.


algorithm:

            The algorithm steps are as follows:

            For DFS traversal, we need a start node and a visited array but in this case, instead of a visited array, we will take a colour array where all the nodes are initialised to -1 indicating they are not coloured yet.

            In the DFS function call, make sure to pass the value of the assigned colour, and assign the same in the colour array. We will try to colour with 0 and 1, but you can choose other colours as well. We will start with the colour 0, you can start with 1 as well, just make sure for the adjacent node, it should be opposite of what the current node has. 

            In DFS traversal, we travel in-depth to all its uncoloured neighbours using the adjacency list. For every uncoloured node, initialise it with the opposite colour to that of the current node.
            
            If at any moment, we get an adjacent node from the adjacency list which is already coloured and has the same colour as the current node, we can say it is not possible to colour it, hence it cannot be bipartite. Thereby return a false indicating the given graph is not bipartite; otherwise, keep on returning true.