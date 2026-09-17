#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[3][3][4];
    int counter = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++){
                if (counter % 2 == 0)
                    arr[i][j][k] = 2 + counter / 2;
                else
                    arr[i][j][k] = 1 + (counter - 1) / 2;
                counter++;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Lapis ke-" << i + 1 << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++){
                cout << arr[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}