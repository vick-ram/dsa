# ARRAYS

## What is an array?
An `array` is a collection of elements of the same data type stored in contiguous memory locations. The elements of an array can be accessed using an index. The index of the first element of the array is 0, the index of the second element is 1, and so on. The size of an array is fixed and cannot be changed once it is declared.

## Characteristics of an array
- `Fixed size:` The size of an array is fixed and cannot be changed once it is declared.
- `Contiguous memory allocation:` The elements of an array are stored in contiguous memory locations.
- `Random access:` The elements of an array can be accessed using an index.
- `Homogeneous elements:` An array can store elements of the same data type.

## Types of arrays
- `One-dimensional array:` An array that stores elements in a linear sequence.
- `Multi-dimensional array:` An array that stores elements in multiple dimensions.


## Operations on arrays

### 1. Insertion
Inserting an element into an array involves adding an element at a specific position in the array. The elements after the inserted element are shifted to accommodate the new element.

### 2. Deletion
Deleting an element from an array involves removing an element from a specific position in the array. The elements after the deleted element are shifted to fill the gap created by the deletion.

### 3. Traversal
Traversing an array involves visiting each element of the array and performing a specific operation on it.

### 4. Searching
Searching an element in an array involves finding the position of an element in the array.

### 5. Sorting
Sorting an array involves arranging the elements of the array in a specific order, such as ascending or descending order.

### 6. Merging
Merging two arrays involves combining the elements of two arrays into a single array.

### 7. Splitting
Splitting an array involves dividing the elements of an array into two or more arrays.

### 8. Reversing
Reversing an array involves changing the order of the elements of the array, such that the first element becomes the last element, the second element becomes the second last element, and so on.

## Declaration of an array
An array can be declared in the following ways:

```c    
    // Declaration of an array with a fixed size
    int arr[5];
    
    // Declaration of an array with initialization
    int arr[] = {1, 2, 3, 4, 5};
    
    // Declaration of a multi-dimensional array
    int arr[2][3];
```

## Initialization of an array
An array can be initialized at the time of declaration using the following syntax:

```c
    int arr[] = {1, 2, 3, 4, 5};
```
Ommiting the size of the array will automatically set the size of the array to the number of elements in the initialization list.
```c
    int arr[] = {1, 2, 3, 4, 5}; // size of arr is 5
```

## Accessing elements of an array
The elements of an array can be accessed using an index. The index of the first element of the array is 0, the index of the second element is 1, and so on.

```c
    int arr[] = {1, 2, 3, 4, 5};
    
    // Accessing the first element of the array
    printf("%d", arr[0]); // Output: 1
    
    // Accessing the second element of the array
    printf("%d", arr[1]); // Output: 2
```
Example: 
```c
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("First element: %d\n", arr[0]);
    printf("Last element: %d\n", arr[4]);
    return 0;
}
```