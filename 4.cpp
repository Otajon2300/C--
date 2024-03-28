// Uchburchak uchlarining koordinatalari asosida uning yuzasi va perimetri topilsin.
// #include <iostream>
// #include <math.h>
// using namespace std;

// struct Point
// {
//     double x, y;
// };

// double distance(Point a, Point b)
// {
//     return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
// }

// int main()
// {
//     Point A, B, C;

//     cout << "Uchburchak uchlarining koordinatalarini kiriting:\n";
//     cout << "A nuqtasi (x, y): " << endl;
//     cout << "A.x = ";
//     cin >> A.x;
//     cout << "A.y = ";
//     cin >> A.y;

//     cout << "B nuqtasi (x, y): " << endl;
//     cout << "B.x = ";
//     cin >> B.x;
//     cout << "B.y = ";
//     cin >> B.y;

//     cout << "C nuqtasi (x, y): " << endl;
//     cout << "C.x = ";
//     cin >> C.x;
//     cout << "C.y = ";
//     cin >> C.y;

//     double a = distance(A, B);
//     double b = distance(B, C);
//     double c = distance(C, A);

//     double perimeter = a + b + c;
//     double s = perimeter / 2;
//     double yuza = sqrt(s * (s - a) * (s - b) * (s - c));

//     cout << "Uchburchak yuzasi: " << yuza << endl;
//     cout << "Uchburchak perimetri: " << perimeter << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     float Y, x;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     x = (pow(a, 2) - pow(b, 2)) / (pow(c, 2) - b);

//     if (x >= 0)
//     {
//         Y = ((pow(a, 2) + pow(b, 2)) / c) + pow((a * a + x), 1 / 2);
//     }
//     else
//     {
//         Y = (sin(x) + b) / (a - b);
//     }

//     cout << "Natija Y=" << Y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     double z, a, b, x, y;

//     cout << "z = ";
//     cin >> z;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     x = (z < 1) ? pow(z, 3.0) + 0.2 : z + log(z);

//     y = 2 * a * pow(cos(x * x), 3.0) + pow(sin(pow(x, 3.0)), 2.0) - b * x;

//     cout << "Natija y=" << y << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     float x, y, a, b, z;
//     int n;

//     cout << "x = ";
//     cin >> x;

//     cout << "caseni tanlang (1-3):";
//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         a = 0.2;
//         b = 0.5;
//         z = exp(a * x);
//         break;
//     case 2:
//         a = 0.45;
//         b = 0.2;
//         z = exp(2 * a * x);
//         break;
//     case 3:
//         a = 0.9;
//         b = 5;
//         z = exp(2.5 * a * x);
//         break;

//     default:
//         break;
//     }

//     if (x < -log(a))
//     {
//         y = a * pow(sin(x), 2.0) + b * cos(z * x);
//     }
//     else if (-log(a) <= x <= b)
//     {
//         y = pow(a, b) - pow(cos(a + z * x), 3.0);
//     }
//     else if (x > b)
//     {
//         y = pow((2.5 * pow(a, 3.0) + pow((b - z * x * x), 6.0)), 0.5);
//     }

//     cout << "Natija y=" << y << endl;
// }

/////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>

// using namespace std;
// int main()
// {
//     float a[5] = {5.75, -6, 3.4, -2.5, 3.6};
//     float b[5] = {-3.4, -0.5, 8.45, 4.3, 5.6};
//     float c[5];

//     for (int i = 0; i < 5; i++)
//     {
//         c[i] = (a[i] + b[i]) / (pow(a[i], 2.0) * sqrt(b[i]));
//     }

//     cout << "a[]=";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     cout << "b[]=";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;

//     cout << "c[]=";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << c[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int K;

//     cout << "K = ";
//     cin >> K;

//     int U[K];

//     srand(static_cast<unsigned>(time(0)));

//     for (int i = 0; i < K; ++i)
//     {
//         U[i] = rand() % 101;
//     }

//     cout << "U(K) massivi: ";
//     for (int i = 0; i < K; ++i)
//     {
//         cout << U[i] << " ";
//     }
//     cout << endl;

//     int sum = 0;
//     for (int i = 0; i < K; i += 2)
//     {
//         if (U[i] > 0)
//         {
//             sum += U[i];
//         }
//     }

//     cout << "Musbat, toq indeksli elementlar yig'indisi: " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "n = ";
//     cin >> n;

//     float x[n];
//     float y[n];
//     float P = 1;

//     cout << "x[ ] kiriting : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }

//     int k = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         if (x[i] >= 1.0 && x[i] <= 2.0)
//         {
//             y[k++] = x[i];
//         }
//     }

//     cout << "x massivi: ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << x[i] << " ";
//     }
//     cout << endl;

//     cout << "y massivi: ";
//     for (int i = 0; i < k; ++i)
//     {
//         cout << y[i] << " ";
//         P *= y[i];
//     }
//     cout << endl;

//     cout << "P=" << P << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int size = 9;
//     float A[size][size];
//     float s = 0;

//     srand(time(0));

//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             A[i][j] = static_cast<float>(rand() % 100) / 10.0;
//         }
//     }

//     for (int i = 0; i < size; ++i)
//     {
//         s += A[i][i];
//         s += A[i][size - 1 - i];
//     }

//     cout << "Matritsa:" << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "Diagonal elementlarning yig'indisi: " << s << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int size = 9;
//     float A[size][size];
//     float s = 0;

//     srand(time(0));

//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             A[i][j] = static_cast<float>(rand() % 100) / 10.0;
//         }
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         s += A[i][i];
//         if (i < 8)
//         {
//             s += A[i + 1][i];
//             s += A[i][i + 1];
//         }
//         if (i < 7)
//         {
//             s += A[i + 2][i];
//             s += A[i][i + 2];
//         }
//     }

//     cout << "Matritsa:" << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "A matritsaning bo'yalgan sohalardagi elementlarning yig'indisi: " << s << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int size = 9;
//     float A[size][size];
//     float s = 0;

//     srand(time(0));

//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             A[i][j] = static_cast<float>(rand() % 100) / 10.0;
//         }
//     }

//     for (int i = 1; i < 4; i++)
//     {
//         s += A[i][i - 1] + A[i][i] + A[i][i + 1];
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         s += A[4][i];
//     }

//     for (int i = 5; i < 8; i++)
//     {
//         s += A[i][i + 1] + A[i][i] + A[i][i - 1];
//     }

//     cout << "Matritsa:" << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "A matritsaning bo'yalgan sohalardagi elementlarning yig'indisi: " << s << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int size = 9;
//     float A[size][size];
//     float s = 0;

//     srand(time(0));

//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             A[i][j] = static_cast<float>(rand() % 100) / 10.0;
//         }
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         s += A[0][i];
//     }

//     for (int i = 1; i < 8; i++)
//     {
//         s += A[i][0] + A[i][8];
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         s += A[8][i];
//     }

//     cout << "Matritsa:" << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "A matritsaning bo'yalgan sohalardagi elementlarning yig'indisi: " << s << endl;

//     return 0;
// }