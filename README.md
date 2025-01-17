#Sparse Matrix Representation Using Arrays in C++
#Overview
This program implements the representation of a sparse matrix using arrays. Sparse matrices contain a large number of zero elements, and storing these zeros is inefficient in terms of memory. To optimize memory usage, we store only non-zero elements along with their positions (row and column).

#The program demonstrates:

Converting a 2D matrix into its sparse representation.
Displaying the sparse representation in a compact format.
#How It Works
1. Structure Element
The Element structure is defined to store:

The row index (row) of a non-zero element.
The column index (col) of a non-zero element.
#The value (value) of the non-zero element.
struct Element {
    int row, col, value;
};
#2. Class SparseMatrix
The SparseMatrix class manages the sparse representation of a matrix. It has:

A vector of Element objects to store non-zero elements.
Dimensions of the matrix (rows and cols).
#Member functions:
addElement(int row, int col, int value): Adds a non-zero element to the vector.
display(): Displays the sparse matrix in the form of a table.

#class SparseMatrix {
private:
    vector<Element> elements;
    int rows, cols;

public:
    SparseMatrix(int r, int c) : rows(r), cols(c) {}
    void addElement(int r, int c, int val);
    void display();
};
#3. Input Matrix
A 2D array is used to represent the input matrix. Non-zero elements in the matrix are identified and stored in the sparse matrix.

Example Input Mattrix:
int matrix[4][5] = {
    {0, 0, 3, 0, 4},
    {0, 0, 5, 7, 0},
    {0, 0, 0, 0, 0},
    {0, 2, 6, 0, 0}
};
#4. Adding Non-Zero Elements
The program iterates through the input matrix using nested loops. For every non-zero element, its row index, column index, and value are added to the sparse matrix.

for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
        if (matrix[i][j] != 0) {
            sparse.addElement(i, j, matrix[i][j]);
        }
    }
}
5. Displaying the Sparse Matrix
The display() function outputs the sparse matrix in a tabular format with columns for Row, Column, and Value.

#Sample Output:

Row	Column	Value
0	2	3
0	4	4
1	2	5
1	3	7
3	1	2
3	2	6


#Key Features
#Memory Efficiency: Only non-zero elements are stored, reducing memory usage significantly.
#Ease of Use: The program is modular and easy to understand.
#Scalability: Can handle matrices of varying dimensions.
