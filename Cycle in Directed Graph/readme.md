Problem Statement: 
    
    Given a Directed Graph with V vertices and E edges, check whether it contains any cycle or not.

Solution:

        We will apply the BFS(Breadth First Search) traversal technique. Breadth First Search or BFS is a traversal technique where we visit the nodes level-wise, i.e., it visits the same level nodes simultaneously, and then moves to the next level.

        Indegree Array: Initially all elements are set to 0. Then, We will count the incoming edges for a node and store it in this array. For example, if indegree of node 3 is 2, indegree[3] = 2.
 
 Algorithm steps :

        First, we will calculate the in-degree of each node and store it in the in-degree array. We can iterate through the given adj list, and simply for every node u->v, we can increase the in-degree of v by 1 in the in-degree array. 
        Initially, there will be always at least a single node whose indegree is 0. So, we will push the node(s) with in-degree 0 into the queue.
        Then, we will pop a node from the queue including the node in our answer array, and for all its adjacent nodes, we will decrease the in-degree of that node by one. For example, if node u that has been popped out from the queue has an edge towards node v(u->v), we will decrease indegree[v] by 1.
        After that, if for any node the in-degree becomes 0, we will push that node again into the queue.
        We will repeat steps 3 and 4 until the queue is completely empty. Now, completing the BFS we will get the linear ordering of the nodes in the answer array.
        Finally, we will check the length of the answer array. If it equals V(no. of nodes) then the algorithm will return false otherwise it will return true.