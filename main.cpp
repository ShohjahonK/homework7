#include <iostream>
using namespace std;

namespace Problem1 {
    double multiply (double x, double y) {
        if (y == 0) {
            return 0;
        } else if (y > 0) {
            return x + multiply(x, y - 1);
        } else {
            return -multiply(x, -y);
        }

    }

    void exec () {
        int x, y;
        cout << "Enter two integers to multiply: ";
        cin >> x >> y;

        int result = multiply(x, y);
        cout << x << " * " << y << " = " << result << endl;
    }
}

namespace Problem2 {
    int sumOfDigits(int n) {
        if (n == 0) {
            return 0;
        }
        return (n % 10) + sumOfDigits(n / 10);
    }

    void exec() {
        int n;
        cout << "Enter an integer: ";
        cin >> n;

        if (n < 0) {
            n = -n;
        }

        int result = sumOfDigits(n);
        cout << "The sum of the digits of " << n << " is: " << result << endl;
    }
}

namespace Problem3 {
    string decimalToBinary(int n) {
        if (n==0) {
            return "0";
        } else if (n==1) {
            return "1";
        } else {
            return decimalToBinary(n/2) + to_string(n%2);
        }
    }

    void exec() {
        int n;
        cout << "Enter an integer: ";
        cin >> n;

        if (n == 0) {
            cout << "The binary representation of 0 is: 0" << endl;
        } else {
            string binaryRepresentation = decimalToBinary(n);
            cout << "The binary representation of " << n << " is: " << binaryRepresentation << endl;
        }
    }
}

namespace Problem4 {
    void exec() {
        int m,n;

        cout << "Enter the number of rows: ";
        cin >> m;
        cout << "Enter the number of columns: ";
        cin >> n;

        int A[m][n];

        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            int rowSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += A[i][j];
            }
            cout << "Sum of row " << i + 1 << ": " << rowSum << endl;
        }
    }
}

namespace Problem5 {
    void exec () {
        int m,n;

        cout << "Enter the number of rows: ";
        cin >> m;
        cout << "Enter the number of columns: ";
        cin >> n;

        int A[m][n], B[m][n], C[m][n];

        cout << "Enter the elements of the matrix A:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        cout << "Enter the elements of the matrix B:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> B[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "The resultant matrix C (A + B) is:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    Problem5::exec();
    return 0;
}
