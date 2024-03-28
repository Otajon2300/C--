// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a;
//     float y;

//     cout << "x=";
//     cin >> a;
//     if (a > 0)
//     {
//         y = pow(x, x) * (log(x) + 1);
//     }

//     cout << "Natija : " << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float m, n, c;
//     float y;

//     cout << "m=";
//     cin >> m;
//     cout << "n=";
//     cin >> n;
//     cout << "c=";
//     cin >> c;

//     if (n + 1 > 0)
//     {
//         y = pow(m, 2.0) * n + 1 - c;
//     }
//     else
//     {
//         y = pow((m + n), 2.0) + c * pow(m, 2.0);
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float z, x, a, y;

//     cout << "z=";
//     cin >> z;
//     cout << "a=";
//     cin >> a;

//     x = (z < 1) ? (pow(z, 2)) : (z + 1);

//     y = a * log(1 + pow(x, 0.2)) + pow(cos(x + 1), 2);

//     cout << "Natija Y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     float u, x, y;

//     cout << "n=";
//     cin >> n;
//     cout << "x=";
//     cin >> x;

//     switch (n)
//     {
//     case 1:
//         u = sin(x);
//         break;
//     case 2:
//         u = cos(x);
//         break;
//     case 3:
//         u = tan(x);
//         break;

//     default:
//         break;
//     }

//     if (u + x > -0.5)
//     {
//         y = pow((2 * u + 1), 2.0) / (7 * M_PI + x);
//     }
//     else if (-0.5 <= (u + x) <= pow(10, -3))
//     {
//         y = pow(cos(u), 2.0) - sin(u / 3);
//     }
//     else if ((u + x) > pow(10, -3))
//     {
//         y = (log(u + x) - exp(2)) / (3.5 * x);
//     }

//     cout << "Natija Y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b, x, y, z, d;

//     cout << "z=";
//     cin >> z;
//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     b = 1 + (pow(x, 2) / (3 + (pow(x, 2) / 5)));

//     a = (b * cos(x - (M_PI / 6))) / (0.5 + pow(sin(y), 2));

//     cout << "Natija: a=" << a << " b=" << b << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b, c;

//     cout << "Uchburchakning tomonlarini kiriting:\n";
//     cout << " Birinchi tomon: ";
//     cin >> a;
//     cout << " Ikkinchi tomon: ";
//     cin >> b;
//     cout << " Uchinchi tomon: ";
//     cin >> c;

//     if (a > 0 && b > 0 && c > 0)
//     {
//         if (a == b && b == c)
//         {
//             cout << "Uchburchak teng tomonli uchburchak 3.\n";
//         }
//         else if (a == b || b == c || a == c)
//         {
//             cout << "Uchburchak teng yonli uchburchak 2.\n";
//         }
//         else
//         {
//             cout << "Oddiy uchburchak 1.\n";
//         }
//     }
//     else
//     {
//         cout << "Uchburchak qurish mumkin emas 0.\n";
//     }

//     return main();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int day;

//     cout << "1 dan 7 gacha bo'lgan butun son kiriting: ";
//     cin >> day;

//     switch (day)
//     {
//     case 1:
//         cout << "Dushanba" << endl;
//         break;
//     case 2:
//         cout << "Seshanba" << endl;
//         break;
//     case 3:
//         cout << "Chorshanba" << endl;
//         break;
//     case 4:
//         cout << "Payshanba" << endl;
//         break;
//     case 5:
//         cout << "Juma" << endl;
//         break;
//     case 6:
//         cout << "Shanba" << endl;
//         break;
//     case 7:
//         cout << "Yakshanba" << endl;
//         break;
//     default:
//         cout << "Noto'g'ri son kiritildi. 1 dan 7 gacha bo'lgan butun sonlardan birini kiriting." << endl;
//         break;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     float a, b, x, Z;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "x=";
//     cin >> x;

//     if (a >= 0)
//     {
//         Z = 7 * pow(x, 2) - 3 * a * b - 5 * a * b;
//     }
//     else
//     {
//         Z = 15 * a - 7 * b;
//     }

//     cout<<"Z = "<< Z << endl;
// }

/////////////////////////////////////////////////////////////////////////

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int n = 1; n <= 10; n++)
//     {
//         y += 1 / pow(n, 3);
//     }

//     cout << "Natija : " << y << endl;
// }

// // b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int R = 1; R <= 15; R++)
//     {
//         y += pow(R, 2) / (pow(R, 4) + 3 * pow(R, 2) + exp(-R));
//     }

//     cout << "Natija : " << y << endl;
// }

// // c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;

//     for (int R = 1; R <= 15; R++)
//     {
//         double product = 1;

//         for (int i = 1; i <= 10; i++)
//         {
//             product *= (pow(R, i) + 1) / (pow(R, 4) + pow(3, i) * R + exp(-R));
//         }
//         y = product;
//     }

//     cout << "Natija : " << y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// unsigned long long factorial(int n)
// {
//     unsigned long long result = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         result *= i;
//     }
//     return result;
// }
// int main()
// {
//     double s = 0, s1 = 0, y, x = 1, h;
//     int i, n = 10;

//     h = (1 - 0.1) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + log(pow(n, 3)) * pow(x, n) / factorial(n);
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = pow(3, x);
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= 2);
//     {
//         cout << "s = " << s << endl;
//     }
// }

////////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int n, a, max, s = 0;

//     cout << "N ta son: ";
//     cin >> n;

//     cin >> max;

//     for (int i = 1; i < n; i++) {
//         cin >> a;

//         if (a > max) {
//             max = a;
//             s++;
//         } else {
//             max = a;
//         }
//     }

//     cout << "Qo'shnilaridan katta bo'lgan sonlar miqdori: " << s << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     do
//     {
//         cout << "n ni bering (7 dan katta): ";
//         cin >> n;
//     } while (n <= 7);

//     bool found = false;
//     for (int a = 0; 3 * a <= n; ++a)
//     {
//         if ((n - 3 * a) % 5 == 0)
//         {
//             int b = (n - 3 * a) / 5;
//             if (b >= 0 && (b % 2 == 0))
//             {
//                 cout << "a = " << a << ", b = " << b << " yig'indisi = " << n << endl;
//                 found = true;
//                 break;
//             }
//         }
//     }

//     if (!found)
//     {
//         cout << "Bu son uchun 3 va 5 ni qo'llab-quvvatlaydigan juft a va b topilmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n = 7;
//     int x = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             if (j >= x && j <= n - x + 1)
//             {
//                 cout << "*";
//             }
//             else
//             {

//                 cout << " ";
//             }
//         }

//         if (i <= n / 2)
//             x++;
//         else
//             x--;
//         cout << endl;
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a[12] = {2.5, 4.3, -1, 2.75, 3.55, 10.48, 11, 9.8, 12, 10.5, 15.6, 18};
//     float b[12];

//     for (int k = 0; k < 12; k++)
//     {
//         b[k] = exp(a[k] - k);
//     }

//     cout << "a[]=";
//     for (int k = 0; k < 12; k++)
//     {
//         cout << a[k] << " ";
//     }
//     cout<< endl;

//     cout << "b[]=";
//     for (int k = 0; k < 12; k++)
//     {
//         cout << b[k] << " ";
//     }
//     cout<< endl;
// }

// #include <iostream>
// #include <math.h>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     int K;
//     int a;
//     int b;

//     cout << "K = ";
//     cin >> K;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     float U[K];

//     for (int i = 0; i < K; i++)
//     {
//         U[i] = rand() % 100;
//     }

//     cout << "U[]=";
//     for (int i = 0; i < K; i++)
//     {
//         cout << U[i] << " ";
//     }
//     cout << endl;

//     cout << "[a; b] oraliqda : ";
//     for (int i = 0; i < K; i++)
//     {
//         if (U[i] >= a && U[i] <= b)
//         {
//             cout << U[i] << " ";
//         }
//     }
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
//             a[i][j] = rand() % 10000;
//         }
//     }

//     cout << "a[][]:" << endl;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     // massivning har bir satr elementlarini o’sish tartibida chiqarish.

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m - 1; ++j)
//         {
//             for (int k = 0; k < m - j - 1; ++k)
//             {
//                 if (a[i][k] > a[i][k + 1])
//                 {
//                     int temp = a[i][k];
//                     a[i][k] = a[i][k + 1];
//                     a[i][k + 1] = temp;
//                 }
//             }
//         }
//     }

//     cout << "saralangan a[][] = " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/////////////////////////////////////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;
// int getDigit(int number, int n)
// {
//     if (number < pow(10, n - 1))
//     {
//         return 0;
//     }

//     int digit = (number / static_cast<int>(pow(10, n - 1))) % 10;
//     return digit;
// }

// int main()
// {
//     int number, n;
//     cout << "Sonni kiriting: ";
//     cin >> number;
//     cout << "n-ni kiriting: ";
//     cin >> n;

//     int reversedNumber = 0;
//     while (number != 0)
//     {
//         reversedNumber = reversedNumber * 10 + number % 10;
//         number /= 10;
//     }

//     int result = getDigit(reversedNumber, n);
//     cout << "n-o'rinda turgan raqam: " << result << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int z[10] = {10, -5, -8, -6, 17, 25, 31, 10, 12, 38};
//     int soni = 0;

//     cout << "z[]=";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << z[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < 11; i++)
//     {
//         if (z[i] > 0)
//         {
//             cout << z[i] << " indeksi : " << i << endl;
//         }
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// void ikkinchiDaraja(int *arr, int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         arr[i] = pow(2, i);
//     }
// }

// void toliqKvadrat(int *arr, int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         arr[i] = pow(i + 1, 2);
//     }
// }

// void fibonachchi(int *arr, int size)
// {
//     arr[0] = 1;
//     arr[1] = 2;
//     for (int i = 2; i < size; ++i)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
// }

// void massivniChiqar(int *arr, int size)
// {
//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     const int size = 10;

//     int *s = new int[size];

//     ikkinchiDaraja(s, size);
//     cout << "a) Ikkinchi darajalar: ";
//     massivniChiqar(s, size);

//     toliqKvadrat(s, size);
//     cout << "b) To'liq kvadratlar: ";
//     massivniChiqar(s, size);

//     fibonachchi(s, size);
//     cout << "c) Fibonachchi sonlari: ";
//     massivniChiqar(s, size);

//     delete[] s;
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <time.h>
// using namespace std;
// int main()
// {
//     int a[14];
//     int soni = 0;
//     srand(time(0));
//     for (int i = 0; i < 14; i++)
//     {
//         a[i] = rand() % 100;
//     }

//     cout << "Massivning qiymatlari ; ";
//     for (int i = 0; i < 14; i++)
//     {
//         cout << a[i] << " ";
//         if (a[i] % 2 == 0)
//         {
//             soni++;
//         }
//     }
//     cout << endl;

//     cout << "Juft elementlari soni : " << soni << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     const int size = 10;

//     int massiv1[size];
//     cout << "Birinchi massivni kiriting: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cin >> massiv1[i];
//     }

//     int massiv2[size];
//     for (int i = 0; i < size; ++i)
//     {
//         if (i % 2 == 0)
//         {
//             massiv2[i] = massiv1[i + 1];
//         }
//         else
//         {
//             massiv2[i] = massiv1[i - 1];
//         }
//     }

//     cout << "Yangi massiv: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << massiv2[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int ikkilikdanonlikga(long long binaryNumber)
// {
//     int decimalNumber = 0, i = 0, remainder;
//     while (binaryNumber != 0)
//     {
//         remainder = binaryNumber % 10;
//         binaryNumber /= 10;
//         decimalNumber += remainder * pow(2, i);
//         ++i;
//     }
//     return decimalNumber;
// }

// int main()
// {
//     long long binaryNumber;

//     cout << "Ikkilik sanoq sistemasidagi sonni kiriting: ";
//     cin >> binaryNumber;

//     int decimalNumber = ikkilikdanonlikga(binaryNumber);

//     cout << "O`nlik sanoq sistemasidagi son: " << decimalNumber << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string satr;
//     int u_soni = 0;

//     cout << "Satrni kiriting: ";
//     getline(cin, satr);

//     for (int i = 0; i < satr.length(); i++)
//     {
//         if (satr[i] == 'u' || satr[i] == 'U')
//         {
//             u_soni++;
//         }
//     }

//     cout << "Satrda " << u_soni << " ta 'u' harfi bor.\n";

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string A;

//     cout << "Satrni kiriting: ";
//     getline(cin, A);

//     size_t found = A.find("gul");
//     while (found != string::npos)
//     {
//         A.erase(found, 3);
//         found = A.find("gul");
//     }

//     cout << "Yangi satr: " << A << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
//     int soni = 0;

//     cout << "Satrni kiriting: ";
//     string satr;
//     getline(cin >> ws, satr);

//     for (char ch : satr)
//     {
//         if (ch == 'A' || ch == 'a')
//         {
//             soni++;
//         }
//     }

//     cout << "Fayl nomini kiriting: ";
//     string faylNomi;
//     cin >> faylNomi;

//     ofstream fayl(faylNomi);
//     if (!fayl.is_open())
//     {
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     fayl << "Satrdagi 'A' harflar soni : " << soni;

//     fayl.close();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main()
// {

//     string satr;
//     cout << "Iltimos, berilgan qatorni kiriting: ";
//     getline(cin, satr);

//     size_t uzunlik = satr.length();
//     string natija = "";
//     bool probel = false;

//     for (size_t i = 0; i < uzunlik; i++)
//     {
//         if (satr[i] == ' ')
//         {

//             if (!probel)
//             {
//                 natija += ' ';
//                 probel = true;
//             }
//         }
//         else
//         {

//             natija += satr[i];
//             probel = false;
//         }
//     }

//     string faylNomi = "output.doc";

//     ofstream fayl(faylNomi);
//     if (!fayl.is_open())
//     {
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     fayl << natija;

//     fayl.close();

//     cout << "Natija faylga yozildi. Fayl nomi: " << faylNomi << endl;

//     return 0;
// }

