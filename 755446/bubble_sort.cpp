#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int arr[5] = {};
    int tmp;
    srand(time(0));
    cout << "排序前: ";
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 1000;
        cout << arr[i] << " ";
    }
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j + 1 < i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;   
            }
        }
    }
    cout << "\n排序後: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}
