// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float b[9] = {3.5, -0.66, 4.3, 0.005, 0.6, -740, 73, 1, 2.5};

//     int z[9];

//     for (int i = 0; i < 9; i++)
//     {
//         z[i] = pow(b[i], 2 / 3);
//     }

//     cout << "b[] = ";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << b[i] << ' ';
//     }

//     cout << "\nz[] = ";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << b[i] << ' ';
//     }
//     cout << endl;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     int n;

//     cout << "Matritsa S ni o'qiting (n ni kiriting): ";
//     cin >> n;

//     int S[10][10];

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             S[i][j] = rand() % 100;
//         }
//     }

//     cout << "Matritsa S :" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << S[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int temp[10][10];
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             temp[j][n - 1 - i] = S[i][j];
//         }
//     }

//     cout << "\nNatija (S matritsa 90 gradusga soat millariga teskari burilgan yo'nalishda):" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << temp[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int massiv(int a[], int n)
// {

//     srand(time(0));
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100 +30;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// int main()
// {
//     int n;
//     int a[100];

//     cout << "n = ";
//     cin >> n;

//     cout << "Massiv a[]=" << massiv(a, n);
// }

// Array ning 5-elementini 2^i darajasiga almashtiring elementi va min elementini toping.

// #include <iostream>
// #include <array>
// #include <cmath>
// using namespace std;
// int main()
// {
//     array<int, 10> arr = {3, 7, 1, 4, 9, 2, 5, 8, 6, 0};

//     int fifthElement = arr[4];
//     arr[4] = pow(2, fifthElement);

//     int minElement = arr[0];
//     for (int i = 1; i < arr.size(); ++i)
//     {
//         if (arr[i] < minElement)
//         {
//             minElement = arr[i];
//         }
//     }

//     cout << "Beshinchi elementning qiymati 2^i darajasiga o'zgargan: " << arr[4] << endl;
//     cout << "Minimum element: " << minElement << endl;

//     return 0;
// }

// listning juft elementlari yig‘indisini hisoblang.

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> myList = {378, 741, 1185, 4747, 9468, 2783, 541, 8564, 6412, 74109};

    int sum = 0;

    for (auto son = myList.begin(); son != myList.end(); ++son)
    {
        if (*son % 2 == 0)
        {
            sum += *son;
        }
    }

    cout << "Juft sonlar yig'indisi: " << sum << endl;

    return 0;
}
