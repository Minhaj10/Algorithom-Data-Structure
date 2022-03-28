# Topological sort

It is a sorting method where linier ordering of virtices such that , if there is edge U -> V ,U appear before V in that ordering.

## Requirements

* not a undirected graph
* not a cyclic graph

## Dfs approach

loop through every node if node is not visited call dfs function.We will carry a stack and a array for tracking node is visited or not.

### Time complexity

**O(n+e)**
 
Here, n=node & e=edge

## Bfs approach(Kahns algorithm)

At first find out indegree for every node.Initialize a queue and put all the node which indegree is zero in intial step.Traverse though queue node and check their adjecent in inorder array and decress the inorder count from those adjecent node.
As soon as indegree become zero for any node ,put that node into queue.As queue become empty operation is over.

### Time complexity

**O(n+e)**
 
Here, n=node & e=edge

### Space complexity

**O(n)+ O(n)** as there is a queue data structure and a array for inorder tracking.


[Problem geeksforgeeks](https://practice.geeksforgeeks.org/problems/topological-sort/1)
