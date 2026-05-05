#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    int magic[n][n];


    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            magic[i][j] = 0;

    int row = 0;
    int col = n / 2;

    for(int num = 1; num <= n * n; num++) {
        magic[row][col] = num;

        int new_row = (row - 1 + n) % n;
        int new_col = (col + 1) % n;

        if(magic[new_row][new_col] != 0) {
            row = (row + 1) % n;
        } else {
            row = new_row;
            col = new_col;
        }
    }

    cout << "\nMagic Square:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout.width(4);
            cout << magic[i][j];
        }
        cout << endl;
    }

    return 0;
}
