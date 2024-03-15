#include <iostream>
#include <vector>

using namespace std;

void printMagicSquare(int N) {
    vector<vector<int>> magicSquare(N, vector<int>(N, 0));

    int i = N / 2;
    int j = N - 1;

    // Đặt giá trị ban đầu cho ma trận kỳ ảo
    int num = 1;
    while (num <= N * N) {
        if (i == -1 && j == N) {
            j = N - 2;
            i = 0;
        } else {
            if (j == N)
                j = 0;
            if (i < 0)
                i = N - 1;
        }

        if (magicSquare[i][j] != 0) {
            j -= 2;
            i++;
            continue;
        } else
            magicSquare[i][j] = num++;

        j++;
        i--;
    }

    // In ra ma trận kỳ ảo
    cout << "Ma tran ky ao kich thuoc " << N << " x " << N << " la:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << magicSquare[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Nhap vao mot so nguyen duong le N: ";
    cin >> N;

    // Kiểm tra xem N có phải là số nguyên dương lẻ hay không
    if (N % 2 == 0) {
        cout << "N phai la so nguyen duong le." << endl;
    } else {
        printMagicSquare(N);
    }

    return 0;
}
