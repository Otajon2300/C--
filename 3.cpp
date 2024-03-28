// #include <iostream>
// using namespace std;

// void Dustsonlar(int a, int b)
// {
//     int s1 = 0, s2 = 0;

//     for (int i = 1; i < a; i++)
//     {
//         if (a % i == 0)
//         {
//             s1 += i;
//         }
//     }

//     for (int i = 1; i < b; i++)
//     {
//         if (b % i == 0)
//         {
//             s2 += i;
//         }
//     }

//     if (s1 == b && s2 == a)
//     {
//         cout << "Berilgan sonlar o'zaro do'st" << endl;
//     }
//     else
//     {
//         cout << "Berilgan sonlar o'zaro do'st emas" << endl;
//     }
// }

// int main()
// {
//     int a, b;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;

//     Dustsonlar(a, b);

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float z[11] = {0.1, 7.5, 1.1, 0.26, 0.13, 14, 2.5, 8, 0.75, 0.01, 3.4};
//     float y[11];

//     for (int i = 0; i < 11; i++)
//     {
//         y[i] = z[i] / log(z[i]);
//     }

//     cout << "z[]=";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << z[i] << " ";
//     }
//     cout << "\ny[]=";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << y[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;

// void massivniTartiblash(float *arr, int size)
// {
//     if (arr == nullptr || size <= 0)
//     {
//         cerr << "Noto'g'ri massiv yoki o'lcham." << endl;
//         return;
//     }

//     int manfiySonlarSoni = 0;

//     for (int i = 0; i < size; ++i)
//     {
//         if (arr[i] < 0)
//         {
//             manfiySonlarSoni++;
//         }
//     }

//     int musbatIndex = manfiySonlarSoni;
//     int manfiyIndex = 0;

//     for (int i = 0; i < size; ++i)
//     {
//         if (arr[i] < 0)
//         {
//             float temp = arr[manfiyIndex];
//             arr[manfiyIndex] = arr[i];
//             arr[i] = temp;
//             manfiyIndex++;
//         }
//         else
//         {
//             musbatIndex++;
//         }
//     }
// }

// int main()
// {

//     const int ulcham = 6;
//     float massiv[ulcham] = {1.5, -2.0, 3.2, -4.8, 5.1, -6.3};

//     cout << "Massiv: ";
//     for (int i = 0; i < ulcham; ++i)
//     {
//         cout << massiv[i] << " ";
//     }
//     cout << endl;

//     massivniTartiblash(massiv, ulcham);

//     cout << "O'zgartirilgan Massiv: ";
//     for (int i = 0; i < ulcham; ++i)
//     {
//         cout << massiv[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int n = 1; n <= 20; n++)
//     {
//         y += 3 / pow((2 * n + 1), 3);
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

//     for (int R = 1; R <= 17; R++)
//     {
//         y *= (R + 1) / (sin(R) + exp(-R) + 1);
//     }

//     cout << "Natija : " << y << endl;
// }

// c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     double product = 1.0;

//     for (int R = 1; R <= 16; R++)
//     {
//         float y = 0;

//         for (int i = 1; i <= 6; i++)
//         {
//             y += (R + 3) / (pow(R, 3) + 3 * R + pow(i, 3));
//         }
//         product *= y;
//     }

//     cout << "Natija : " << product << endl;
// }

///////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// void turtinchidaraja(double x)
// {
//     long long y = pow(x, 4.0);
//     cout << x << " soning to'rtinchi darajasi " << y << endl;
// }
// int main()
// {
//     float x;

//     cout << "x = ";
//     cin >> x;

//     turtinchidaraja(x);
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// bool isPrime(int num)
// {
//     if (num <= 1)
//     {
//         return false;
//     }

//     if (num <= 3)
//     {
//         return true;
//     }

//     if (num % 2 == 0 || num % 3 == 0)
//     {
//         return false;
//     }

//     for (int i = 5; i * i <= num; i += 6)
//     {
//         if (num % i == 0 || num % (i + 2) == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int a;
//     int b;
//     int c;
//     int d;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;
//     cout << "d = ";
//     cin >> d;

//     if (isPrime(a))
//     {
//         cout << a << " soni tub son.\n";
//     }
//     else
//     {
//         cout << a << " soni tub son emas.\n";
//     }

//     if (isPrime(b))
//     {
//         cout << b << " soni tub son.\n";
//     }
//     else
//     {
//         cout << b << " soni tub son emas.\n";
//     }

//     if (isPrime(c))
//     {
//         cout << c << " soni tub son.\n";
//     }
//     else
//     {
//         cout << c << " soni tub son emas.\n";
//     }

//     if (isPrime(d))
//     {
//         cout << d << " soni tub son.\n";
//     }
//     else
//     {
//         cout << d << " soni tub son emas.\n";
//     }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// bool Palindrom(const string &str)
// {
//     int a = 0;
//     int b = str.length() - 1;

//     while (a < b)
//     {
//         if (str[a] != str[b])
//         {
//             return false;
//         }
//         a++;
//         b--;
//     }

//     return true;
// }

// int main()
// {
//     string fileName;
//     string word;

//     cout << "Fayl nomini kiriting: ";
//     cin >> fileName;

//     cout << "So'zni kiriting: ";
//     cin >> word;

//     ofstream outFile(fileName);
//     outFile << word;
//     outFile.close();

//     ifstream inFile(fileName);
//     string content;
//     inFile >> content;
//     inFile.close();

//     if (Palindrom(content))
//     {
//         cout << "Faylda kiritilgan so'z palindrom.\n";
//     }
//     else
//     {
//         cout << "Faylda kiritilgan so'z palindrom emas.\n";
//     }

//     return 0;
// }
