#include <iostream>
using namespace std;
int main() {

    bool swapped = false;

    int m, n, k, arr[1000000], box;

    int i = 0;

    cin >> m >> n >> k;

    if (m >= n) {
        cout << "-1" << endl;
        return 0;
    }

    while (m != n + 1) {

        box = m;

        while (box != 0) {
            arr[i] = box % 10;
            box = box / 10;
            i++;
        }
        
        m++;

    }

     for (int x = 0; x < i; x++) {
        for (int y = 0; y < i - 1; y++) {
            if (arr[y] < arr[y + 1]) {
                swap(arr[y], arr[y + 1]);
                swapped = true;
            }
        }
        if (swapped == false) {
            break;
        }
    }
    
    cout << arr[k - 1] << endl;

    return 0;


}