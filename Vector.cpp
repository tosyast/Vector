#include <iostream>
#include <string>
using namespace std; //объявление
#include <windows.h>
#include <vector>
#include <ctime>

void Matrix(vector<vector<int>>& arr, int row, int col)
{
    srand(time(0));
    for (int i = 0; i < row; i++) {
        vector<int> row;
        for (int j = 0; j < col; j++) {
            int num = rand() % 100;
            row.push_back(num);
        }
        arr.push_back(row);
    }
}
void printCMatrix(vector<vector<int>>& arr) 
{
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
double MiddleNum(vector<vector<int>>& arr)
{
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            sum += arr[i][j];
            cnt++;
        }
        
    }
    return(double) sum / cnt;
}
int MaxNum(vector<vector<int>>& arr) 
{
    int max = arr[0][0];
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                if (arr[i][j] > max) {
                    max = arr[i][j];
                }
            }
        }
        return max;

}
int MinNum(vector<vector<int>>& arr) 
{
    int min = arr[0][0];
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int row, col;
    cout << "Введите количество строк: " << endl;
    cin >> row;
    cout << "Введите количество столбцов: " << endl;
    cin >> col;
    vector<vector<int>> arr;
    Matrix(arr, row, col);
    printCMatrix(arr);
    cout << "Среднее число: " << MiddleNum(arr) << endl;
    cout << "Минимальное число: " << MinNum(arr) << endl;
    cout << "Максимальное число: " << MaxNum(arr) << endl;

}

