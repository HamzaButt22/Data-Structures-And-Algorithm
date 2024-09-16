#include <iostream>

using namespace std;

int getTotal(int** array, int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total += array[i][j];
        }
    }
    return total;
}

double getAverage(int** array, int rows, int cols) {
    int total = getTotal(array, rows, cols);
    return static_cast<double>(total) / (rows * cols);
}

int getRowTotal(int** array, int row, int cols) {
    int rowTotal = 0;
    for (int i = 0; i < cols; ++i) {
        rowTotal += array[row][i];
    }
    return rowTotal;
}

int getColumnTotal(int** array, int rows, int col) {
    int colTotal = 0;
    for (int i = 0; i < rows; ++i) {
        colTotal += array[i][col];
    }
    return colTotal;
}

int getHighestInRow(int** array, int row, int cols) {
    int highest = array[row][0];
    for (int i = 1; i < cols; ++i) {
        if (array[row][i] > highest) {
            highest = array[row][i];
        }
    }
    return highest;
}

int getHighestInColumn(int** array, int rows, int col) {
    int highest = array[0][col];
    for (int i = 1; i < rows; ++i) {
        if (array[i][col] > highest) {
            highest = array[i][col];
        }
    }
    return highest;
}

int getValidIndex(int limit, const string& indexType) {
    int index;
    while (true) {
        cout << "Enter the " << indexType << " index (0 to " << limit - 1 << "): ";
        cin >> index;
        if (index >= 0 && index < limit) {
            return index;
        } else {
            cout << "Invalid " << indexType << " index! Please try again." << endl;
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    while (rows <= 0 || cols <= 0) {
        cout << "Invalid number of rows or columns! Please enter positive values." << endl;
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> cols;
    }

    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    cout<<endl;
    cout << "Array (" << rows << " x " << cols << "):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    cout << "Total of all elements: " << getTotal(array, rows, cols) << "\n" << endl;
    cout << "Average of all elements: " << getAverage(array, rows, cols) << "\n" << endl;

    cout << "Calculate total of a specific row" << endl;
    int row = getValidIndex(rows, "row");
    cout << "Total of row " << row << ": " << getRowTotal(array, row, cols) << endl;

    cout<<endl;
    cout << "Calculate total of a specific column" << endl;
    int col = getValidIndex(cols, "column");
    cout << "Total of column " << col << ": " << getColumnTotal(array, rows, col) << endl;

    cout<<endl;
    cout << "Find highest value in a specific row" << endl;
    row = getValidIndex(rows, "row");
    cout << "Highest in row " << row << ": " << getHighestInRow(array, row, cols) << endl;

    cout<<endl;
    cout << "Find highest value in a specific column" << endl;
    col = getValidIndex(cols, "column");
    cout << "Highest in column " << col << ": " << getHighestInColumn(array, rows, col) << endl;

    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
