# 📚 Data Structures: Singly Linked List Theory & Operations

This document breaks down core memory and algorithmic characteristics of Singly Linked Lists compared to Contiguous Arrays.

## 1. Fundamental Memory Layout
* **Array:** Contiguous block of memory allocated at runtime or compile time. Elements are adjacent.
* **Linked List:** Non-contiguous memory allocation using dynamic heap allocation (`malloc` in C). Nodes link via pointers (`next`).

## 2. Core Operations & Complexities

### Traversing & Searching
* **Traversal:** Visiting every node sequentially starting from `head` until `current == NULL` ($O(n)$).
* **Searching:** Linear scan across nodes ($O(n)$). Unsorted and sorted lists both require linear scanning due to sequential pointer navigation.

### Insertion & Deletion
* **At Head:** $O(1)$ constant time.
* **At Tail / Middle:** $O(n)$ traversal to target location + $O(1)$ pointer assignment.

### Merging & Sorting
* **Merge:** Combining two sorted lists by pointer reassignment in $O(n + m)$ without allocating extra nodes.
* **Sort:** **Merge Sort** is preferred for linked lists ($O(n \log n)$) because it split and re-links pointers without requiring random memory access.