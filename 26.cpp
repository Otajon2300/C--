// #include <iostream>
// #include <math.h>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     const double A = M_PI / 6;
//     const double B = 2 * M_PI / 3;
//     int m = 10;

//     double h = (B - A) / m;
//     double x = A;

//     cout << "x\t\tF(x)" << endl;

//     while (x <= B)
//     {

//         double F_x = pow(x, 0.5) - pow(cos(x), 2.0);

//         cout << x << "\t" << fixed << setprecision(6) << F_x << endl;

//         x += h;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     double s = 0, s1 = 0, y, x = 0.2, h;
//     int i, n = 20;

//     h = (0.8 - 0.2) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + (pow(x, n) * pow(n, 2)) / (2 * n + 1);
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = (1 / 4) * ((x + 1) / sqrt(x)) * sinh(sqrt(x)) - cosh(sqrt(x));
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= -0.1);
//     {
//         cout << "s = " << s << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// bool KabisaYil(int yil)
// {
//     if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     int yil;
//     cout << "Iltimos, bir yil kiriting: ";
//     cin >> yil;

//     if (KabisaYil(yil))
//     {
//         cout << yil << " kabisa yil." << endl;
//     }
//     else
//     {
//         cout << yil << " kabisa yil emas." << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {
//     float a[8] = {-3.5, 4.25, 3.1, -7.5, 8.3, -11.4, -13.5, 9.6};
//     float b[8];

//     for (int i = 0; i < 8; i++)
//     {
//         if (a[i] > 0)
//         {
//             b[i] = a[i];
//         }
//         else
//         {
//             b[i] = 0;
//         }
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         cout << b[i] << " ";
//     }
// }

// #include <iostream>
// #include <math.h>
// #include <time.h>
// using namespace std;
// void massiv(int Z[], int n)
// {
//     srand(time(NULL));

//     for (int i = 0; i < n; i++)
//     {
//         Z[i] = rand() % 100;
//     }
// }
// int main()
// {
//     int n;
//     int s = 0;

//     cout << "N = ";
//     cin >> n;

//     int X[n];
//     int Y[n];
//     int A[n];

//     massiv(X, n);
//     massiv(Y, n);

//     for (int i = 0; i < n; i++)
//     {
//         A[i] = X[i] + Y[i];
//         s += A[i];
//     }

//     int engKatta = A[0];
//     int engKichik = A[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] > engKatta)
//         {
//             engKatta = A[i];
//         }
//         if (A[i] < engKichik)
//         {
//             engKichik = A[i];
//         }
//     }
//     cout << "A[] = ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << A[i] << " ";
//     }

//     cout << endl;

//     cout << "A[] massivning o'rta arifmetik qiymati " << s / n << endl;
//     cout << "A[] massivning eng katta elementi: " << engKatta << endl;
//     cout << "A[] massivning eng kichik elementi: " << engKichik << endl;
//     cout << "A[] massivning eng katta va eng kichik elementlari orasidagi farq " << engKatta - engKichik << endl;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "n=";
//     cin >> n;
//     cout << "m=";
//     cin >> m;

//     int a[n][m];

//     srand(time(0));

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             a[i][j] = rand() % 15875 - 5874;
//         }
//     }

//     cout << "a[][]:" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "\n\nTeskari a[][]:" << endl;
//     for (int i = n - 1; i >= 0; --i)
//     {
//         for (int j = m - 1; j >= 0; --j)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string ochirilgan_qoshish(const string &satr, int N)
{
    istringstream iss(satr);
    string soz, natija;

    while (iss >> soz)
    {
        if (soz.length() > N)
        {
            char ochirilgan_harf = soz[N];
            soz.erase(N, 1);
            soz += "o'chirilgan";
            soz += ochirilgan_harf;
        }
        natija += soz + " ";
    }

    // oxirgi bo'shliqni olib tashlash
    natija.pop_back();

    return natija;
}

int main()
{
    string input;
    int N;

    cout << "Satrni kiriting: ";
    getline(cin, input);

    cout << "N ni kiriting: ";
    cin >> N;

    string natija = ochirilgan_qoshish(input, N);

    cout << "Natija: " << natija << endl;

    return 0;
}
