#include <iostream>

using namespace std;

//int main() {
//    cout << "Enter the side: ";
//    int a;
//    cin >> a;
//    int i, j;
//    for (i=0; i<a; i++) {
//        for (j=0; j<a; j++) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    cout << "Enter the length of the rectangle: ";
//    int length, breadth;
//    cin >> length;
//    cout << "Enter the breadth of the rectangle: ";
//    cin >> breadth;
//    int i, j;
//    for (i = 0; i < breadth; i++) {
//        if (i == 0 || i == breadth - 1) {
//            for (j = 0; j < length; j++) {
//                cout << "* ";
//            }
//        } else {
//            cout << "* ";
//            for (j = 1; j < length - 1; j++) {
//                cout << "  ";
//            }
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//
//}

//int main() {
//    cout << "Enter the height of the pyramid: ";
//    int height, i, j;
//    cin >> height;
//    for (i=0; i<height; i++) {
//        for (j=0; j<=i; j++) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    cout << "Enter the value of n: ";
//    int n, i, j;
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=n; j>i; j--) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    cout << "Enter the value of n: ";
//    int n, i, j;
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=1; j<=i+1; j++) {
//            cout << j << " ";
//        }
//        cout << "\n";
//    }
//}

//int main() {
//    cout << "Enter the value of n: ";
//    int n, i, j;
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=1; j<n-i+1; j++) {
//            cout << j << " ";
//        }
//        cout << "\n";
//    }
//}

// Full Pyramid
//int main() {
//    cout << "Enter the value of n: ";
//    int n, i, j;
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=i; j<n; j++) {
//            cout << " ";
//        }
//        for (j=n; j>=n-i; j--) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

// Inverted Full Pyramid
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<=i; j++) {
//            cout << " ";
//        }
//        for (j=n; j>i; j--) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

// Hollow Inverted Half Pyramid - 1
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    // First Row
//    for (i=0; i<n; i++) {
//        cout << "*";
//    }
//    cout << "\n";
//    // Second Row till second last Row
//    for (i=0; i<n-2; i++) {
//        cout << "*";
//        for (j=0; j<n-(i+3); j++) {
//            cout << " ";
//        }
//        cout << "*\n";
//    }
//    // Last Row
//    cout << "*\n";
//}

// Hollow Inverted Half Pyramid - 2
//int main() {
//    int i, j, n;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            if (i == 0 || j == 0 || j == n - i - 1) {
//                cout << "*";
//            } else {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//}

// Hollow Full Pyramid
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i = 0; i < n; i++) {
//        int k = 0;
//        for (j = 0; j < ((2 * n) - 1); j++) {
//            if (j < n - i - 1) {
//                cout << " ";
//            } else if (k < ((2 * i) + 1)) {
//                if (k == 0 || k == (2 * i) || i == n - 1) {
//                    cout << "*";
//                } else {
//                    cout << " ";
//                }
//                k++;
//            } else {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//}

// Full Pyramid
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<(n-i-1); j++) {
//            cout << " ";
//        }
//        for (j=0; j<i+1; j++) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

// Inverted Full Pyramid
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<i+1; j++) {
//            cout << " ";
//        }
//        for (j=n; j>i; j--) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

// Diamond
//    *
//   * *
//  * * *
// * * * *
//* * * * *
//* * * * *
// * * * *
//  * * *
//   * *
//    *
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<n-i-1; j++) {
//            cout << " ";
//        }
//        for (j=0; j<i+1; j++) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//    for (i=0; i<n; i++) {
//        for (j=0; j<i; j++) {
//            cout << " ";
//        }
//        for (j=n; j>i; j--) {
//            cout << "* ";
//        }
//        cout << "\n";
//    }
//}

// Flipped Solid Diamond
//**********
//****  ****
//***    ***
//**      **
//*        *
//*        *
//**      **
//***    ***
//****  ****
//**********
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=i; j<n; j++) {
//            cout << "*";
//        }
//        for (j=0; j<=((2*i)-1); j++) {
//            cout << " ";
//        }
//        for (j=i; j<n; j++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//
//    for (i=0; i<n; i++) {
//        for (j=0; j<i+1; j++) {
//            cout << "*";
//        }
//        for (j=0; j<((2*(n-i))-2); j++) {
//            cout << " ";
//        }
//        for (j=0; j<i+1; j++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}

//1
//2*2
//3*3*3
//4*4*4*4
//5*5*5*5*5
//5*5*5*5*5
//4*4*4*4
//3*3*3
//2*2
//1
// int main() {
//     int i, j, n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (i=0; i<n; i++) {
//         for (j=0; j<i+1; j++) {
//             cout << i+1;
//             if (i!=j) {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
//
//     for (i=0; i<n; i++) {
//         for (j=n-1; j>=i; j--) {
//             cout << n-i;
//             if (i!=j) {
//                 cout << "*";
//             }
//         }
//         cout << "\n";
//     }
// }

//1
//121
//12321
//1234321
//123454321
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<i+1; j++) {
//            cout << j + 1;
//        }
//        for (j=i; j>0; j--) {
//            cout << j ;
//        }
//        cout << "\n";
//    }
//}

//1
//232
//34543
//4567654
//567898765
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i = 0; i < n; i++) {
//        for (j = n - i - 1; j > 0; j--) {
//            cout << " ";
//        }
//        for (j = i + 1; j <= ((2 * i) + 1); j++) {
//            cout << j;
//        }
//        for (j = ((2 * i)); j >= i + 1; j--) {
//            cout << j;
//        }
//        cout << "\n";
//    }
//}

//    1
//   1 2
//  1   3
// 1     4
//1 2 3 4 5
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i = 0; i < n; i++) {
//        for (j = n - i - 1; j > 0; j--) {
//            cout << " ";
//        }
//        if (i == 0 || i == n - 1) {
//            for (j = 0; j < i + 1; j++) {
//                cout << j + 1 << " ";
//            }
//        } else {
//            cout << "1";
//            for (j = 0; j < ((2 * i) - 1); j += 1) {
//                cout << " ";
//            }
//            cout << i + 1;
//        }
//        cout << "\n";
//    }
//}

// Numeric Hollow Half Pyramid
//1
//1 2
//1   3
//1     4
//1 2 3 4 5
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        if (i==0 or i==(n-1)) {
//            for (j=0; j<=i; j++) {
//                cout << j+1 << " ";
//            }
//        }
//        else {
//            cout << 1;
//            for (j=0; j<((2*i)-1); j++) {
//                cout << " ";
//            }
//            cout << i+1;
//
//        }
//        cout << "\n";
//    }
//}

// Numeric Hollow Half Pyramid
//1 2 3 4 5
//2     5
//3   5
//4 5
//5
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        if (i==0 || i==n-1) {
//            for (j=i; j<n; j++) {
//                cout << j+1 << " ";
//            }
//        }
//        else {
//            cout << i+1;
//            for (j=0; j<(2*(n-i-1))-1; j++) {
//                cout << " ";
//            }
//            cout << n;
//        }
//        cout << "\n";
//    }
//}

// Numeric Palindrome Equilateral Pyramid
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<((2*(n-i-1))); j++) {
//            cout << " ";
//        }
//        for (j=0; j<i+1; j++) {
//            cout << j+1 << " ";
//        }
//        for (j=i+1; j>1; j--) {
//            cout << j-1 << " ";
//        }
//        cout << "\n";
//    }
//}

// Solid Half Diamond
//*
//**
//***
//****
//*****
//****
//***
//**
//*
//int main() {
//    int n, i, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<((2*n)-1); i++) {
//        if (i<n && i>=0) {
//            for (j=0; j<=i; j++) {
//                cout << "*";
//            }
//        }
//        else {
//            for (j=0; j<n-(i%5)-1; j++) {
//                cout << "*";
//            }
//        }
//        cout << "\n";
//    }
//}

// Fancy Pattern #1
//********1********
//*******2*2*******
//******3*3*3******
//*****4*4*4*4*****
//****5*5*5*5*5****
//***6*6*6*6*6*6***
//**7*7*7*7*7*7*7**
//*8*8*8*8*8*8*8*8*
//9*9*9*9*9*9*9*9*9
//int main() {
//    int i, n, j;
//    cout << "Enter the value of n: ";
//    cin >> n;
//    for (i=0; i<n; i++) {
//        for (j=0; j<9-i-1; j++) {
//            cout << "*";
//        }
//        for (j=0; j<i+1; j++) {
//            cout << i+1;
//            if (i!=j) {
//                cout << "*";
//            }
//        }
//        for (j=0; j<9-i-1; j++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}

int main() {
    int i, n, j;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i=0; i<n; i++) {

    }
}