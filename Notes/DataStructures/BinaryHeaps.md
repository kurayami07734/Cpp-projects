# [(max) Binary Heap](../../DataStructures/BinaryHeaps/include/BinaryHeap.hpp)

## Main relation

Parent nodes always store larger values than their children nodes.
Sibling nodes do not have any relation in their values.

## Operations

1. Insertion 

```mermaid
graph LR
    subgraph "insertion";
    step1[push to the left most of the open spots] --> step2{compare with its parent node};
    step2 -- is greater --> step3[swap them];
    step2 -- is smaller --> step4[exit from function];
    step3 --> step2;
end
```

2. Extracting max element

```mermaid
graph LR
    subgraph "extractMax";
    step1[remove the root element] --> step2[move the last element to the root];
    step2 --> step3{Compare with its children nodes};
    step3 -- both are smaller --> step4[exit from function];
    step3 -- bigger value exists --> step5[swap them];
    step5 --> step3;
end
```
