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
//     int n;
//     float x;
//     double Q = 0;

//     cout << "n = ";
//     cin >> n;
//     cout << "x = ";
//     cin >> x;

//     for (int k = 1; k <= n; k++)
//     {
//         Q += (pow(-1, k) * pow((x + 3), 2)) / factorial(k);
//     }
//     cout << "Natija Q=" << Q << endl;
// }

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
//     int n;
//     double x;
//     double sum = 0;

//     cout << "n=";
//     cin >> n;
//     cout << "x=";
//     cin >> x;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += pow(-1, i) * ((pow(x, 2 * i)) / factorial(2 * i));
//     }

//     cout << "Natija:" << sum << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 1;
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 4; j++)
//         {
//             if (n % 2 != 0)
//             {

//                 cout << "0 ";
//             }
//             else
//             {
//                 cout << n << " ";
//             }

//             n++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     const double A = 0.5;
//     const double B = 1;
//     int m = 10;

//     double h = (B - A) / m;
//     double x = A;

//     cout << "x\t\tF(x)" << endl;

//     while (x <= B)
//     {

//         double F_x = acos(x);

//         cout << x << "\t" << F_x << endl;

//         x += h;
//     }

//     return 0;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int m;
//     double a=1;

//     cout<<"m = ";
//     cin>>m;

//     for (int i = 1; i <= m; ++i)
//     {
//         a*=i;
//     }

//     cout << "Natija : " << a+7 << endl;
// }

// // b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 10; i++)
//     {
//         y += (pow(-1, i) * (7 / i)) / (1 + i + pow(i, 2));
//     }

//     cout << "Natija : " << y << endl;
// }

// // c)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 13; i++)
//     {
//         double product = 0;

//         for (int R = 1; R <= 14; R++)
//         {
//             product += (pow(-1, i) * cos(i + R) + 5) / (5 * i + 7 / R + i / R);
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
// }

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
//     double s = 0, s1 = 0, y, x = 1, h;
//     int i, n = 10;

//     h = ((0.1) - (1)) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + (pow(-1, n) * (pow(x, 2 * n) / factorial(2 * n)));
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = cos(x);
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= -0.1);
//     {
//         cout << "s = " << s << endl;
//     }
// }

/////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;

//     cout << "n = ";
//     cin >> n;
//     cout << "m = ";
//     cin >> m;

//     double k = 1;
//     for (int i = 3; i <= n; i++)
//     {
//         double s = 0;
//         for (int j = 2; i <= m; i++)
//         {
//             s += (2 * i + j * j);
//         }
//         k *= s;
//     }
//     cout << "Natija = " << k << endl;
// }

// #include <iostream>
// using namespace std;
// void Fibonacci(int n)
// {
//     int first = 0, second = 1, next;

//     cout << n << " gacha bo'lgan Fibonachchi ketma-ketligi: ";

//     for (int i = 0; first <= n; ++i)
//     {
//         cout << first << ", ";
//         next = first + second;
//         first = second;
//         second = next;
//     }
// }

// int main()
// {
//     int n;

//     cout << "n sonini kiriting : ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Iltimos, musbat son kiriting.";
//     }
//     else
//     {
//         Fibonacci(n);
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     double number;
//     double kichik;
//     cout << "n = ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Sonni kiriting: ";
//         cin >> number;

//         if (number > 20)
//         {
//             if (number < kichik)
//             {
//                 kichik = number;
//             }
//         }
//     }

//     cout<<"20 dan katta sonlar orasidagi eng kichigi = "<<kichik<<endl;
// }

// #include <iostream>
// #include <limits>

// using namespace std;

// int main()
// {
//     int n;
//     double number;
//     double kichik = numeric_limits<double>::infinity();

//     cout << "n = ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Sonni kiriting: ";
//         cin >> number;

//         if (number > 20)
//         {
//             if (number < kichik)
//             {
//                 kichik = number;
//             }
//         }
//     }

//     if (kichik != numeric_limits<double>::infinity())
//     {
//         cout << "20 dan katta sonlar orasidagi eng kichigi = " << kichik << endl;
//     }
//     else
//     {
//         cout << "20 dan katta son topilmadi." << endl;
//     }

//     return 0;
// }

///////////////////////////////////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;
// void Uchburchak(float a, float b, float &S, float &r1, float &r2)
// {
//     S = 0.5 * a * b;

//     float c = sqrt(a * a + b * b);
//     r1 = (a + b - c) / 2;

//     r2 = (a * b) / (4 * S);
// }

// int main()
// {
//     float a, b, S, r1, r2;

//     cout << "Uchburchak katetlarini kiriting:\n";
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     Uchburchak(a, b, S, r1, r2);

//     cout << "Uchburchak yuzasi: " << S << endl;
//     cout << "Ichki chizilgan aylananing radiusi: " << r1 << endl;
//     cout << "Tashqi chizilgan aylananing radiusi: " << r2 << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float b[9] = {3.5, -0.66, 4.3, 0.005, 0.6, -740, 73, 1, 2.5};
//     float z[9];

//     for (int i = 0; i < 9; i++)
//     {
//         z[i] = pow(b[i], 0.66);
//     }

//     cout << "b[]=";
//     for (int i = 0; i < 9; i++)
//     {
//         cout << b[i] << " ";
//     }

//     cout << "\nz[]=";
//     for (int i = 0; i < 9; i++)
//     {
//         cout << z[i] << " ";
//     }
// }

// #include <iostream>
// #include <cmath>
// #include <ctime>
// using namespace std;
// void findMaxMin(float **arr, int rows, int cols, int &maxRow, int &maxCol, int &minRow, int &minCol)
// {
//     maxRow = minRow = 0;
//     maxCol = minCol = 0;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             if (arr[i][j] > arr[maxRow][maxCol])
//             {
//                 maxRow = i;
//                 maxCol = j;
//             }

//             if (arr[i][j] < arr[minRow][minCol])
//             {
//                 minRow = i;
//                 minCol = j;
//             }
//         }
//     }
// }

// int main()
// {
//     srand(time(0));
//     const int rows = 3;
//     const int cols = 3;

//     float **x = new float *[rows];
//     for (int i = 0; i < rows; ++i)
//     {
//         x[i] = new float[cols];
//     }

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             x[i][j] = rand() % 100;
//         }
//     }

//     cout << "float **x;" << endl;
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             cout << x[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     int maxRow, maxCol, minRow, minCol;

//     findMaxMin(x, rows, cols, maxRow, maxCol, minRow, minCol);

//     cout << "Maximum element is at position: (" << maxRow << ", " << maxCol << ") with value " << x[maxRow][maxCol] << endl;
//     cout << "Minimum element is at position: (" << minRow << ", " << minCol << ") with value " << x[minRow][minCol] << endl;

//     for (int i = 0; i < rows; ++i)
//     {
//         delete[] x[i];
//     }
//     delete[] x;

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A, B, C;

//     cout << "A ni kiriting: ";
//     cin >> A;

//     cout << "B ni kiriting: ";
//     cin >> B;

//     cout << "C ni kiriting: ";
//     cin >> C;

//     if (B > A && B < C)
//     {
//         cout << "B soni A va C sonlari orasida yotadi." << endl;
//     }
//     else
//     {
//         cout << "B soni A va C sonlari orasida yotmaydi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num1, num2;

//     cout << "Birinchi sonni kiriting: ";
//     cin >> num1;

//     cout << "Ikkinchi sonni kiriting: ";
//     cin >> num2;

//     if (num1 < num2)
//     {
//         cout << num1 << " kichik birinchi raqam" << endl;
//     }
//     else if (num2 < num1)
//     {
//         cout << num2 << " kichik ikkinchi raqam" << endl;
//     }
//     else
//     {
//         cout << "Sonlar o'zaro teng" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;

//     cout << "a ni kiriting: ";
//     cin >> a;

//     cout << "b ni kiriting (a dan katta): ";
//     cin >> b;

//     int sum = 0;
//     for (int i = a; i <= b; ++i) {
//         sum += i;
//     }

//     cout << "Natija: " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "n ni kiriting: ";
//     cin >> n;

//     int k = 1;
//     while (k * k <= n)
//     {
//         k++;
//     }

//     cout << "Eng kichik k: " << k << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////

// Matnli fayl berilgan. Matnli fayldagi barcha uchragan belgilarni, probel va tinish belgilariga ega bo’lgan (takrorlanishsiz) belgili fayl hosil qilinsin. Belgilar kodi bo’yicha kamayish tartibida joylashsin

// #include <iostream>
// #include <fstream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string inputFileName = "matn.txt";
//     string outputFileName = "uchragan_belgilar.txt";

//     ifstream inputFile(inputFileName);
//     ofstream outputFile(outputFileName);

//     if (!inputFile.is_open() || !outputFile.is_open())
//     {
//         cerr << "Faylni ochib bo'lmadi." << endl;
//         return 1;
//     }

//     char ch;
//     string uniqueCharacters;

//     while (inputFile.get(ch))
//     {
//         if ((isalnum(ch) || isspace(ch) || ch == '.') &&
//             uniqueCharacters.find(ch) == string::npos)
//         {
//             uniqueCharacters.push_back(ch);
//         }
//     }

//     sort(uniqueCharacters.begin(), uniqueCharacters.end());

//     for (char character : uniqueCharacters)
//     {
//         outputFile.put(character);
//     }

//     inputFile.close();
//     outputFile.close();

//     cout << "Belgilar va tinishlar saqlangan yangi fayl hosil qilindi: " << outputFileName << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     const char inputFileName[] = "butun_sonlar.txt";
//     const char outputFileNameS1[] = "S1.bin";
//     const char outputFileNameS2[] = "S2.bin";

//     ifstream inputFile(inputFileName, ios::in);
//     if (!inputFile)
//     {
//         cout << "Faylni ochishda xatolik!\n";
//         return 1;
//     }

//     int son;
//     ofstream outputFileS1(outputFileNameS1, ios::out | ios::binary);
//     ofstream outputFileS2(outputFileNameS2, ios::out | ios::binary);

//     if (!outputFileS1 || !outputFileS2)
//     {
//         cout << "Faylni yaratishda xatolik!\n";
//         return 1;
//     }

//     while (inputFile >> son)
//     {
//         outputFileS1.write(reinterpret_cast<char *>(&son), sizeof(int));

//         outputFileS2.seekp(0, ios::beg);
//         outputFileS2.write(reinterpret_cast<char *>(&son), sizeof(int));
//     }

//     inputFile.close();
//     outputFileS1.close();
//     outputFileS2.close();

//     cout << "Fayllar yaratildi: " << outputFileNameS1 << " va " << outputFileNameS2 << endl;

//     return 0;
// }

//////////////////////////////////////////////////////////////////

// Haqiqiy tipli, 15 ta elementdan iborat massiv berilgan. qiymati birinchi elementnikidan katta bo`lgan elementlari sonini toping.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    const int N = 15;
    float a[N] = {31.2, 63.4, 35.6, 27.8, 39.07, 82.3, 14.5, 26.7, 8.9, 31.2, 13.4, 25.6, 11.8, 19.08, 20.3};

    float max = a[0];
    int soni = 0;

    cout << "Massiv elementlari: ";
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < N; i++)
    {
        if (a[i] > a[0])
        {
            soni++;
        }
    }
    cout << "Birinchi elementidan katta elementlar soni: " << soni << endl;
}

// Haqiqiy tipli Z(16) massivi berilgan. juft indeksdagi sonlar yig`indisi va indeksi 3 ga karrali sonlar yig`indisi ayirmasini toping.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     const int N = 16;
//     float Z[N] = {51.2, 63.4, 35.6, 27.8, 39.07, 82.3, 14.5, 26.7, 8.9, 10.1, 31.2, 13.4, 25.6, 11.8, 19.08, 20.3};

//     float juft = 0;
//     float uchga_karrali = 0;

//     cout << "Massiv elementlari: ";
//     for (int i = 0; i < N; i++)
//     {
//         cout << Z[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < N; ++i)
//     {
//         if (i % 2 == 0)
//             juft += Z[i];

//         if (i % 3 == 0 && i != 0)
//             uchga_karrali += Z[i];
//     }

//     float ayirma = juft - uchga_karrali;

//     cout << "Juft indeksdagi sonlar yig'indisi: " << juft << endl;
//     cout << "Indeksi 3 ga karrali sonlar yig'indisi: " << uchga_karrali << endl;
//     cout << "Ayirma: " << ayirma << endl;

//     return 0;
// }
