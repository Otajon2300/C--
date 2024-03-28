// n ta elementdan tashkil topgan massiv berilgan.Bu massivning elementlarini teskari tartibda chiqaring.
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {

//     srand(time(0));

//     int n;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> n;

//     int *massiv = new int[n];

//     cout << "Massiv : ";
//     for (int i = 0; i < n; ++i)
//     {
//         massiv[i] = rand();
//         cout << massiv[i] << " ";
//     }

//     for (int i = 0; i < n / 2; ++i)
//     {

//         int temp = massiv[i];
//         massiv[i] = massiv[n - 1 - i];
//         massiv[n - 1 - i] = temp;
//     }

//     cout << "\nMassivning teskari tartibi:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     delete[] massiv;

//     return 0;
// }

// float nuqta[n][2], d;
// Matritsaning satr elementlarini tekislikdagi nuqtalarning koordinatalari deb qarab, shu nuqtalar orasidagi eng katta masofa topilsin.

// #include <iostream>
// #include <cmath>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     int n;

//     cout << "n = ";
//     cin >> n;

//     float a[n][2], d;

//     srand(time(0));

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < 2; ++j)
//         {
//             a[i][j] = rand() % 100;
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     d = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         for (int k = i + 1; k < n; ++k)
//         {
//             float distance = sqrt(pow(a[i][0] - a[k][0], 2) + pow(a[i][1] - a[k][1], 2));
//             if (distance > d)
//             {
//                 d = distance;
//             }
//         }
//     }

//     cout << "Elementlar: \n";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << "Point " << i + 1 << ": (" << a[i][0] << ", " << a[i][1] << ")\n";
//     }

//     cout << "Eng katta masofa: " << d << endl;

//     return 0;
// }
