#include <iostream>
#include <cstddef>

using namespace std;

typedef int* IntPtr;
typedef char* CharPtr;

//Basic Pointer Manipulations
//Program to demonstrate pointers and dynamic variables.
int main()
{
    int numRows, numCols;
    CharPtr* m;

    cout << "please enter number of row and columns: ";
    cin >> numRows >> numCols;
    m = new CharPtr[numRows];

    for (int i = 0; i < numRows; i++) {
        m[i] = new char[numCols];
        for (int j = 0; j < numCols; j++)
            m[i][j] = '*';
    }
    cout << " ";
    for (int i = 0; i < numCols; i++) {
        cout << " ";
        cout << i + 1;
    }
    cout << endl;

    for (int i = 0; i < numRows; i++) {
        cout << i + 1;
        for (int j = 0; j < numCols; j++)
            printf(" %c", m[i][j]);
        cout << endl;
    }

    for (int i = 0; i < numRows; i++)
        delete[] m[i];        // there must be one call to delete for each row that created an array.
    delete[] m;               // then we delete the delete the array itself (can be optional)

    return 0;
}


