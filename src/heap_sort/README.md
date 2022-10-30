# Heap Sort

## Heap

*   A complete binary tree.
*   Stored in an array by layer to layer.
*   For a node with index **i** in the array, indices of its childern are **2i (<= n)** and
    **2i + 1 (<= n)**, where n is the number of nodes.

    ```
    Proof:

    Suppose that:
    1.  The node is in the "k-th" laryer (counted from 0) of the tree.
    2.  There are "m" siblings in front of the node in the same layer.

    Therefore,
    i = 2^k - 1 + m + 1 = 2^k + m.

    The index of left child is
    2^(k+1) - 1 + 2m + 1 = 2^(k+1) + 2m = 2(2^k + m) = 2i

    And the index of right child is the index of left child plus 1, i.e. 2i + 1.
    ```

*   For a node with index **i** in the array, the index of its parent is **⌊i/2⌋**
*   Height of a heap is Θ(n), where n is the number of nodes.

### Max Heap

*   For any subtree, the root is the maximum.
*   For example, `[16, 14, 10, 8, 7, 9, 3, 2, 4, 1]`:

    ```
                  [16]
             /            \
          [14]            [10]
        /     \         /     \
      [8]     [7]     [9]     [3]
      / \     /
    [2] [4] [1]
    ```
