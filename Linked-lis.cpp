#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int row, col, value;
    Node* next;
};

// Sparse Matrix class
class SparseMatrix {
private:
    Node* head; // Head pointer for the linked list

public:
    SparseMatrix() : head(nullptr) {}

    // Function to add a new non-zero element to the linked list
    void addElement(int row, int col, int value) {
        if (value == 0) return;

        Node* newNode = new Node{row, col, value, nullptr};

        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to display the sparse matrix
    void display() {
        cout << "Row\tColumn\tValue\n";
        Node* temp = head;
        while (temp) {
            cout << temp->row << "\t" << temp->col << "\t" << temp->value << "\n";
            temp = temp->next;
        }
    }

    // Destructor to free memory
    ~SparseMatrix() {
        Node* temp = head;
        while (temp) {
            Node* toDelete = temp;
            temp = temp->next;
            delete toDelete;
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

    // Create a SparseMatrix object
    SparseMatrix sparse;

    // Add non-zero elements to the linked list
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] != 0) {
                sparse.addElement(i, j, matrix[i][j]);
            }
        }
    }

    // Display the sparse matrix
    cout << "Sparse Matrix Representation:\n";
    sparse.display();

    return 0;
}