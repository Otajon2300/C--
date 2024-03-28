// n ta elementdan tashkil topgan massiv berilgan.Bu massivning juft elementlari yig’indisi hisoblansin. (Ko’rsatkichlardan foydalanib hisoblansin).

// #include <iostream>
// #include <math.h>
// using namespace std;
// int Yigindi(int *a, int n)
// {
//     int yigindi = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             yigindi += a[i];
//         }
//     }
//     return yigindi;
// }

// int main()
// {
//     int n;
//     cout << "Massiv o'lchamini kiriting: ";
//     cin >> n;

//     int *a = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//     }

//     cout << "Massiv elementlari : " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     int yigindi = Yigindi(a, n);
//     cout << "\nJuft elementlar yig'indisi: " << yigindi << endl;

//     return 0;
// }
