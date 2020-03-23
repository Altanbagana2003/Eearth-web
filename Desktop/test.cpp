#include<iostream>
using namespace std;
int main(){

    int n, arr[100][100], box = 1;

    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            arr[i][j] = box;
            box++;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[i][j] / 10 == 0) {
                cout << " " << " " << arr[i][j];
            } else {
                cout << " " << arr[i][j];
            }
        } cout << endl;
    } cout << endl;


    return 0;

}