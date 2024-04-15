#include <bits/stdc++.h>
using namespace std;

void printMagicArray(int N){
    vector<vector<int>> magicArray(N, vector<int>(N, 0));

    int num = 1;
    int i = 0;
    int j = N / 2;

    while (num <= N * N){
        magicArray[i][j] = num;

        int new_i = (i-1+N) % N; 
        int new_j = (j+1) % N;

        if (magicArray[new_i][new_j] != 0){
            new_i = (i+1) % N;
            new_j = j;
        }

        i = new_i;
        j = new_j;
        
        num++;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout <<  magicArray[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    printMagicArray(5);
    return 0;
}