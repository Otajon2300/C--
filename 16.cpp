// #include <iostream>
// #include <math.h>
// using namespace std;
// unsigned long long factorial(int n)
// {
//     if (n <= 0)
//     {

//         return 1;
//     }
//     unsigned long long result = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         result *= i;
//     }
//     return result;
// }
// int main()
// {
//     int k;
//     float Z;

//     cout << "k = ";
//     cin >> k;

//     for (int n = -3; n <= k; n++)
//     {
//         Z *= (((n + 2) != 0 ? (n + 2) : 1) * (abs(n - 4) != 0 ? abs(n - 4) : 1)) / factorial(n + 3);
//     }
//     cout << "Natija Z=" << Z << endl;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n;
//     double x, y;

//     cout << "n=";
//     cin >> n;
//     cout << "x=";
//     cin >> x;

//     for (int i = 1; i <= n; i += 2)
//     {
//         y += sin(i * x) / i;
//     }

//     cout << "Natija:" << y << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 1;

//     for (int i = 1; i <= 4; i++)
//     {
//         if (i % 2 != 0)
//         {
//             for (int j = 1; j <= 4; j++)
//             {
//                 cout << n << "\t";
//                 n++;
//             }
//         }
//         else
//         {
//             int temp = n + 3;
//             for (int j = 1; j <= 4; j++)
//             {
//                 cout << temp << "\t";
//                 temp--;
//             }
//             n += 4;
//         }
//         cout << endl;
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d, e, f;
//     cout << "uch xonali sonni kiriting : ";
//     cin >> a;
//     b = a / 100;
//     c = a - b * 100;
//     d = c / 10;
//     e = c - d * 10;
//     f = b * 100 + d + e * 10;
//     cout << "Uning o'nliklar xonasidagi raqam bilan birliklar xonasidagi raqamni almashtirishdan hosil bo'lgan son : " << f;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int x1, x2, x3;
//     cout << "x1=";
//     cin >> x1;
//     cout << "x2=";
//     cin >> x2;
//     x3 = abs(x1 - x2);
//     cout << "Natija =" << x3;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int berilganSon;
//     cout << "Ikkita xonali son kiriting: ";
//     cin >> berilganSon;

//     if (berilganSon >= 10 && berilganSon <= 99 && berilganSon % 2 == 0)
//     {
//         cout << "Berilgan son ikki xonali juft son." << endl;
//     }
//     else
//     {
//         cout << "Berilgan son ikki xonali juft son emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     double A, B, C;

//     cout << "A ni kiriting: ";
//     cin >> A;

//     cout << "B ni kiriting: ";
//     cin >> B;

//     cout << "C ni kiriting: ";
//     cin >> C;

//     if (A <= B && B <= C)
//     {
//         cout << "Yangi qiymatlar: A=" << A * 2 << ", B=" << B * 2 << ", C=" << C * 2 << endl;
//     }
//     else
//     {
//         A = -A;
//         B = -B;
//         C = -C;
//         cout << "Yangi qiymatlar: A=" << A << ", B=" << B << ", C=" << C << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     int n;
//     float a;
//     cout << "Butun soni nni kiriting (n > 0): ";
//     cin >> n;
//     cout << "a = ";
//     cin >> a;

//     if (n <= 0)
//     {
//         cout << "Noto'g'ri qiymat! n > 0 bo'lishi kerak." << endl;
//         return 1;
//     }

//     cout << "Darajalar:" << endl;
//     for (int i = 1; i <= n; ++i)
//     {
//         double daraja = pow(a, i);
//         cout << a << "^" << i << " = " << daraja << endl;
//     }

//     return 0;
// }
