# Searching functions in the STL

## Linear Search

1. `find()` it returns iterator of first instance of key
2. `find(start iterator, end iterator, key)`
3. if key is not found end iterator is return
4. to get index, subtract returned iterator from start iterator

## Binary Search **(use only with sorted data)**

1. Three are provided in the STL which perform binary search
   1. `binary_search()` returns bool
   2. `lower_bound()` returns iterator of first element which is **not less** than key
   3. `upper_bound()` returns iterator of last element which is **greater** than key
2. frequency of key will be `upper_bound() - lower_bound()`
