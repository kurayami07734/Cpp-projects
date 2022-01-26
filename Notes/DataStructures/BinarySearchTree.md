# [Binary Search Tree](../../DataStructures/BinarySearchTree/include/BST.hpp)

## Implementation details

1. BST node
   1. data variable
   2. left node pointer
   3. right node pointer

2. BST class stores a root pointer

## Operations

1. Insertion ($`O(log(N))`$ time)

```mermaid
graph LR
    subgraph "Insertion";
    step1[Compare the new element to the root] --> step2{is it greater than root's value?};
    step2 -- Yes --> step3[Compare it to the right child of root];
    step2 -- No --> step4[Compare it to the left child of root];
    step5[repeat till appropriate spot is found];
    step3 --> step5;
    step4 --> step5;
end
```

2. search ($`O(log(N))`$ time)

    Algorithm is same as binary search

3.  max , min element

    Same as binary search
