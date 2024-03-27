### 0x1D. C - Binary trees

Concepts;

What is a binary tree
What is the difference between a binary tree and a Binary Search Tree
What is the possible gain in terms of time complexity compared to linked lists
What are the depth, the height, the size of a binary tree
What are the different traversal methods to go through a binary tree
What is a complete, a full, a perfect, a balanced binary tree

Overview;
* Binary Tree
A binary tree is a hierarchical data structure where each node has at most two children, referred to as the left child and the right child.
* Binary Tree vs. Binary Search Tree
A binary search tree is a type of binary tree where the left child node contains a value less than the parent node, and the right child node contains a value greater than the parent node. This ordering property is not necessarily present in a general binary tree.
* Time Complexity Gain Compared to Linked Lists
Binary trees offer better time complexity for certain operations like search, insertion, and deletion compared to linked lists. Search, insertion, and deletion in a balanced binary tree have a time complexity of O(log n), whereas in a linked list, it's O(n).
* Depth, Height, Size of a Binary Tree
Depth: The depth of a node is the number of edges from the root node to that node.
Height: The height of a tree is the maximum depth of any node in the tree.
Size: The size of a binary tree is the total number of nodes in the tree.
* Traversal Methods for Binary Trees
Inorder Traversal: Visit left subtree, then current node, then right subtree.
Preorder Traversal: Visit current node, then left subtree, then right subtree.
Postorder Traversal: Visit left subtree, then right subtree, then current node.
* Types of Binary Trees
Complete Binary Tree: Every level of the tree is fully filled, except possibly for the last level, which is filled from left to right.
Full Binary Tree: Every node other than the leaves has two children.
Perfect Binary Tree: A full binary tree where all leaf nodes are at the same depth.
Balanced Binary Tree: A binary tree in which the height of the left and right subtrees of any node differ by no more than one.

