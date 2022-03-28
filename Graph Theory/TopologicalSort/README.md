#Topological sort

It is a sorting method where linier ordering of virtices such that , if there is edge U -> V ,U appear before V in that ordering.

##Requirements

* not a undirected graph
* not a cyclic graph

###dfs approach

loop through every node if node is not visited call dfs function.We will carry a stack and a array for tracking node is visited or not.

##Time complexity

O(n+e)
 
Here, n=node & e=edge