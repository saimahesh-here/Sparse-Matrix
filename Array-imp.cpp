#include <iostream>
#include <vector>
using namespace std;

// Structure to store non-zero elements
struct Element {
    int row, col, value;
};

class SparseMatrix {
private:
    vector<Element> elements; // Vector to store elements
    int rows, cols;           // Dimensions of the original matrix

public:
    SparseMatrix(int r, int c) : rows(r), cols(c) {}

    void addElement(int r, int c, int val) {
        if (val != 0) {
            elements.push_back({r, c, val});
        }
    }

    void display() {
        cout << "Row\tColumn\tValue\n";
        for (const auto &el : elements) {
            cout << el.row << "\t" << el.col << "\t" << el.value << "\n";
        }
    }
};

int main() {
    // Input matrix
    int matrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

    // Sparse matrix object
    SparseMatrix sparse(4, 5);

    // Add non-zero elements to sparse matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                sparse.addElement(i, j, matrix[i][j]);
            }
        }
    }

    // Display sparse matrix representation
    cout << "Sparse Matrix Representation:\n";
    sparse.display();

    return 0;
}