#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << " data ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Input data: ";
    for (int i = 0; i < 5; i++)
    {
        cout << " data ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "output data: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
