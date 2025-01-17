#Sparse Matrix Representation Using Linked List

#Overview

#This program demonstrates the representation of a sparse matrix using a linked list. A sparse matrix contains a large number of zero elements, which makes storing all the elements inefficient in terms of memory usage. The linked list representation stores only the non-zero elements along with their positions (row and column indices), thus optimizing memory usage.

#How It Works
1. Node Structure

#The program uses a Node structure to represent each non-zero element of the sparse matrix. Each node stores:

row: The row index of the element.
col: The column index of the element.
value: The value of the non-zero element.
next: A pointer to the next node in the list.

#2. SparseMatrix Class
The SparseMatrix class manages the linked list that stores all the non-zero elements. It includes the following methods:

#Constructor:

Initializes the linked list with a nullptr head, indicating the list is empty.
addElement(int row, int col, int value):

Adds a new non-zero element to the linked list.

If the value is zero, the method skips the element.

If the list is empty, the new node becomes the head.

If the list is not empty, the method appends the node at the end of the list.
display():

Prints the sparse matrix in a tabular format, showing the row, column, and value of each non-zero element.
Destructor:

Frees all the memory allocated for the linked list to avoid memory leaks.

#3. Input Matrix
The program takes a 2D matrix as input, which contains both zero and non-zero elements. For example:

#Input Matrix:


0  0  3  0  4
0  0  5  7  0
0  0  0  0  0
0  2  6  0  0

#4. Sparse Matrix Representation
The program converts the above matrix into a linked list containing only non-zero elements. The sparse matrix is stored and displayed as follows:

#Sparse Matrix Representation:


Row     Column  Value
0       2       3
0       4       4
1       2       5
1       3       7
3       1       2
3       2       6



#Key Features

#Dynamic Memory Allocation:

#The linked list grows dynamically as non-zero elements are added.

#Memory Efficiency:

#Only non-zero elements are stored, significantly reducing memory usage compared to a 2D array.
Scalable Design:

#The program can handle matrices of any size, provided the non-zero elements are added dynamically.


#Input Matrix:

#The 2D matrix is initialized in the code.
Adding Elements:

The program scans the matrix and adds all non-zero elements to the linked list using the addElement() method.
Displaying the Sparse Matrix:

The program calls the display() method to print the sparse matrix in a compact row-column-value format.
Advantages of Linked List Implementation.

#Flexibility:

The size of the linked list adjusts dynamically, making it suitable for matrices of varying sparsity.

#Efficient Storage:

Only stores non-zero elements, minimizing memory usage.

#Simplicity:

The linked list structure makes the code modular and easy to understand.

