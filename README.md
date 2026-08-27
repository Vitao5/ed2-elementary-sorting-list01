# Elementary Sorting Algorithms — Exercise List 01

C++ implementations of elementary sorting algorithms for the Data Structures II course.

## Files

### `ex01-bubbleSorting.cpp`
**Bubble Sort** on a character vector. Sorts the letters of the word `"patrocinio"` in ascending order and prints the result as a string.

### `ex02-selectionSort.cpp`
**Selection Sort (Descending)**. Reads `n` integers from stdin and sorts them in **descending** order by repeatedly selecting the maximum element.

### `ex03-selectionSort.cpp`
**Partial Selection Sort (Ascending)**. Reads `n` integers and a value `k`, then performs only the first `k` iterations of Selection Sort (ascending), placing the `k` smallest elements in their final positions.

### `ex04-insertionSort.cpp`
**Insertion Sort with Shift Count**. Reads `n` integers, sorts them in ascending order using Insertion Sort, and prints both the sorted array and the total number of element shifts performed.

### `ex05-insertSort.cpp`
**Reverse Insertion Sort (Descending)**. Reads `n` integers and sorts them in **descending** order using a right-to-left variant of Insertion Sort.

## How to Compile and Run

```bash
g++ -o ex01 src/ex01-bubbleSorting.cpp && ./ex01
g++ -o ex02 src/ex02-selectionSort.cpp && ./ex02
g++ -o ex03 src/ex03-selectionSort.cpp && ./ex03
g++ -o ex04 src/ex04-insertionSort.cpp && ./ex04
g++ -o ex05 src/ex05-insertSort.cpp && ./ex05
```
