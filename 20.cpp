// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<double> X = {1, 0, 1.4, 2, 6, 8.4, 16.2, 9.1, -3.6, -2.8, -1.0, 0.6, -1.2};

//     double product = 1.0;

//     for (double xi : X)
//     {
//         if (1.5 < xi && xi < 3.9)
//         {
//             product *= xi;
//         }
//     }

//     cout << "Ko'paytma: " << product << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "n = ";
//     cin >> n;

//     int X[n];
//     cout << "X elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> X[i];
//     }

//     int Z[n];
//     int zIndex = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (X[i] > 0)
//         {
//             Z[zIndex] = X[i];
//             zIndex++;
//         }
//     }

//     for (int i = 0; i < zIndex - 1; i++)
//     {
//         for (int j = 0; j < zIndex - i - 1; j++)
//         {
//             if (Z[j] < Z[j + 1])
//             {
//                 int temp = Z[j];
//                 Z[j] = Z[j + 1];
//                 Z[j + 1] = temp;
//             }
//         }
//     }

//     cout << "Z massiv elementlarini kamayib borish tartibida : ";
//     for (int i = 0; i < zIndex; i++)
//     {
//         cout << Z[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     int n;
//     int m;

//     cout << "n = ";
//     cin >> n;
//     cout << "m = ";
//     cin >> m;

//     int a[n][m];

//     srand(time(0));
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             a[i][j] = rand() % 2001 - 1000;
//         }
//     }

//     cout << "Boshlang'ich massiv:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     int almashtirishlarSoni = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             if (a[i][j] < 0)
//             {
//                 a[i][j] = abs(a[i][j]);
//                 ++almashtirishlarSoni;
//             }
//         }
//     }

//     cout << "\nAlmashtirilgan massiv:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "\nAlmashtirishlar soni: " << almashtirishlarSoni << endl;

//     return 0

