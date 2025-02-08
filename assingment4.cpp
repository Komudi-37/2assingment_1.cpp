//4)spiral no. patteren
#include <iostream>
using namespace std;

void printSpiral(int n, int arr[][100]) {
    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;
        for (int i = right; i >= left; i--) {
            arr[bottom][i] = num++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = num++;
        }
        left++;
    }
}

void spiralTraversal(int n, int arr[][100]) {
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    cout << "Spiral traversal: ";
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int arr[100][100]; 
    printSpiral(n, arr);

    cout << "Generated Spiral Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    spiralTraversal(n, arr);

    return 0;
}
