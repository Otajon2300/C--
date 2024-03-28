// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double k;
//     cout << "k=";
//     cin >> k;

//     double result = 1.0;

//     for (int j = -1; j <= k; j++)
//     {
//         double a = ((j - pow(j, 2.0)) * j) / (j + 14);
//         double b = 0.0;
//         for (int i = j; i <= (k + 3); i++)
//         {
//             b += pow(abs(i - 5), 0.25) / (abs(i - 7) != 0 ? abs(i - 7) : 1.0);
//         }
//         result = a * b;
//     }
//     cout << "Natija: P=" << result << endl;

//     return 0;
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

//     for (int i = 2; i <= n; i += 2)
//     {
//         y += (cos(i * x)) / (pow(i, 2) - 1);
//     }

//     cout << "Natija:" << y << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num = 10;

//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << num-- << "   ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     float x, y, a, b, z;
//     int n;

//     cout << "x = ";
//     cin >> x;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     cout << "caseni tanlang (1-3):";
//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         z = asin(pow(x, 3.0));
//         break;
//     case 2:
//         z = pow(acos(x), 2.0);
//         break;
//     case 3:
//         z = tan(x);
//         break;

//     default:
//         break;
//     }

//     if (x < a)
//     {
//         y = x * exp(x) + (z + 7.7 * a * b * x);
//     }
//     else if (a <= x <= pow(b, 2.0))
//     {
//         y = tan(a * x + z) + pow(cos(b * x), 2);
//     }
//     else if (x > pow(b, 2.0))
//     {
//         y = log(pow((sin(a + b * x + z * pow(x, 2))), 2.0));
//     }

//     cout << "Natija y=" << y << endl;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int R = 1; R <= 14; R++)
//     {
//         y += (R + 2.4) / (pow(R, 2) + 7 * R + 1);
//     }

//     cout << "Natija : " << y << endl;
// }

// b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;

//     for (int q = 1; q <= 18; q++)
//     {
//         y *= pow(-1, q) * ((cos(pow(q, 2) + 5)) / (pow(q, 4) + abs(q - 71)));
//     }

//     cout << "Natija : " << y << endl;
// }

// c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 16; i++)
//     {
//         double product = 1.0;

//         for (int m = 1; m <= 13; m++)
//         {
//             product *= atan(i + m) / (log(i) + 0.24);
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
// }

////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     float x, y, a, b, f, z;
//     int n;

//     cout << "x = ";
//     cin >> x;
//     cout << "z = ";
//     cin >> z;

//     cout << "caseni tanlang (1-3):";
//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         a = 0.8;
//         b = 2.4;
//         f = exp(1.5 * a * x);
//         break;
//     case 2:
//         a = 1.2;
//         b = 2.4;
//         f = exp(1.5 * a * x);
//         break;
//     case 3:
//         a = 3.4;
//         b = 8.1;
//         f = exp(1.5 * a * x);
//         break;

//     default:
//         break;
//     }

//     if (x < -log(abs(a)))
//     {
//         y = pow((3.5 * a - 7.3 * b * x + sin(z * x)), 3.0);
//     }
//     else if (-log(abs(a)) <= x < b)
//     {
//         y = pow(a, b) - pow(cos(a + z * x), 3.0);
//     }
//     else if (x > b)
//     {
//         y = pow((abs(tan(a) - x) - x * x), 0.5);
//     }

//     cout << "Natija y=" << y << endl;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int n = 1; n <= 10; n++)
//     {
//         y += 18 / (5 - 17 * n + pow(n, 3.0));
//     }

//     cout << "Natija : " << y << endl;
// }

//// b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;

//     for (int m = -12; m <= 0; m++)
//     {
//         y *= (pow((abs(m) + 1.8), m * m)) / (m * m + 4 * m + pow(-1, m));
//     }

//     cout << "Natija : " << y << endl;
// }

// c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     long long y = 0;

//     for (int i = 1; i <= 17; i++)
//     {
//         long double product = 1.0;

//         for (int R = 1; R <= 10; R++)
//         {
//             product *= (pow((exp(i + R) * pow((i + R), (i - R))), 0.5)) / (abs(4 * pow(i, 3.0) - pow(R, 4.0)));
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// double h(double x)
// {
//     return 0.2;
// }

// double y(double a, double b, double x)
// {
//     if (x > (a + b))
//     {
//         return log(11.5 * a * x + 33.1 * b * x);
//     }
//     else
//     {
//         return pow(atan(a * x), 2.0) - cos(pow(x, 3.0)) + pow(b, 2.0);
//     }
// }

// int main()
// {
//     double a = 0.4;
//     double b = 0.2;
//     double x1 = 0.2;
//     double xn = 1;

//     for (double x = x1; x <= xn; x += h(x))
//     {
//         double result = y(a, b, x);
//         cout << "x = " << x << ", y = " << result << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// double uzunlikKopaytmasi(double Ax, double Ay, double Bx, double By, double Cx, double Cy)
// {
//     double ACUzunlik = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));
//     double BCUzunlik = sqrt(pow(Cx - Bx, 2) + pow(Cy - By, 2));
//     return ACUzunlik * BCUzunlik;
// }

// int main()
// {
//     double Ax, Ay, Bx, By, Cx, Cy;
//     cout << "A nuqtasi koordinatalarini kiriting (Ax Ay): ";
//     cin >> Ax >> Ay;
//     cout << "B nuqtasi koordinatalarini kiriting (Bx By): ";
//     cin >> Bx >> By;
//     cout << "C nuqtasi koordinatalarini kiriting (Cx Cy): ";
//     cin >> Cx >> Cy;

//     double kopaytma = uzunlikKopaytmasi(Ax, Ay, Bx, By, Cx, Cy);

//     cout << "AC va BC kesmalar uzunligi ko'paytmasi: " << kopaytma << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     long long son;
//     cout << "Istalgan son kiriting (999 dan katta): ";
//     cin >> son;

//     long long toliqSon = son / 1000;
//     long long qoldiq = son % 1000;

//     cout << "Mingliklar xonasidagi son: " << toliqSon << endl;
//     cout << "Qoldiq: " << qoldiq << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a, b, c;
//     cout << "Uchta butun son kiriting: ";
//     cin >> a >> b >> c;

//     if ((a == b && b == c) || (a != b && b != c && a != c))
//     {
//         cout << "Berilgan uchta butun sonlarning 2 tasi bir-biriga teng emas." << endl;
//     }
//     else
//     {
//         cout << "Berilgan uchta butun sonlarning hech bo'lmaganda 2 tasi bir-biriga teng." << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a, b, c;
//     cout << "Uchta butun son kiriting: ";
//     cin >> a >> b >> c;

//     if (a == b && b == c)
//     {
//         cout << "Uchta son ham bir-biriga teng." << endl;
//     }
//     else if (a == b)
//     {
//         cout << "1-va 2-sonlar bir-biriga teng, qolgan son: " << c << endl;
//     }
//     else if (b == c)
//     {
//         cout << "2-va 3-sonlar bir-biriga teng, qolgan son: " << a << endl;
//     }
//     else if (a == c)
//     {
//         cout << "1-va 3-sonlar bir-biriga teng, qolgan son: " << b << endl;
//     }
//     else
//     {
//         cout << "Uchta son bir-biriga teng emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a;
//     int n;

//     float sum = 1;

//     cout << "a = ";
//     cin >> a;
//     cout << "n = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += pow((-1), n) * pow((a), n);
//     }

//     cout << "Natija: " << sum << endl;
// }

/////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, n;
//     float y = 0;

//     cout << "a = ";
//     cin >> a;
//     cout << "n = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         y += pow((-1), i) * pow(a, i);
//     }

//     cout << "Natija: " << 1 + y << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     if ((a == b || b == c) || (a == b || b == c || a == c))
//     {
//         cout << "True" << endl;
//     }
//     else
//     {
//         cout << "False" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n, m;
//     cout << "Bo'lib butun son kiriting (n > 0): ";
//     cin >> n;
//     cout << "Bo'lib qolgan son kiriting (m > 0): ";
//     cin >> m;

//     int boLibButun = n / m;
//     int qoldiq = n % m;

//     int reversedBoLib = 0;
//     while (boLibButun > 0)
//     {
//         int lastDigit = boLibButun % 10;
//         reversedBoLib = reversedBoLib * 10 + lastDigit;
//         boLibButun /= 10;
//     }

//     int reversedQoldiq = 0;
//     while (qoldiq > 0)
//     {
//         int lastDigit = qoldiq % 10;
//         reversedQoldiq = reversedQoldiq * 10 + lastDigit;
//         qoldiq /= 10;
//     }

//     cout << "Bo'lib butun (teskari tartibda): " << reversedBoLib << endl;
//     cout << "Qoldiq (teskari tartibda): " << reversedQoldiq << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     cout << "n = ";
//     cin >> n;

//     int a[n];

//     cout << "Massiv elementlarini kiriting : ";
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }

//     int ak_index = -1;
//     for (int i = 0; i < n; ++i)
//     {
//         if (a[i] < a[n - 1])
//         {
//             ak_index = i;
//             break;
//         }
//     }

//     if (ak_index != -1)
//     {
//         cout << "Natija = " << a[ak_index] << endl;
//     }
//     else
//     {
//         cout << "Bunday element topilmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "n : ";
//     cin >> n;

//     int a[n];
//     int soni = 0;

//     cout << "Massiv elementlarini kiriting : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }

//     cout << "Massivning toq elementlari o'sish tartibida: ";
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 != 0)
//         {
//             soni++;
//             cout << a[i] << " ";
//         }
//     }
//     cout << endl;

//     cout << "Massivning toq elementlari soni: " << soni << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double x, y;

//     cout << "Iltimos, nuqtaning koordinatalarini kiriting (masalan, x y): ";
//     cin >> x >> y;

//     if (x == 0 && y == 0)
//     {
//         cout << "0" << endl;
//     }
//     else if (x == 0)
//     {
//         cout << "1" << endl;
//     }
//     else if (y == 0)
//     {
//         cout << "2" << endl;
//     }
//     else
//     {
//         cout << "3" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Mashina
// {
// private:
//     string name, brend;
//     int narxi, tezlik;

// public:
//     Mashina(){};
//     Mashina(string name, string brend, int narxi, int tezlik)
//     {
//         this->name = name;
//         this->brend = brend;
//         this->narxi = narxi;
//         this->tezlik = tezlik;
//     }
//     friend void chiqarish(Mashina);
//     int narx()
//     {
//         return this->narxi;
//     }
//     int tez()
//     {
//         return this->tezlik;
//     }
// };

// class Motosikl
// {
// private:
//     string name, brend;
//     int narxi, tezlik;

// public:
//     Motosikl(){};
//     Motosikl(string name, string brend, int narxi, int tezlik)
//     {
//         this->name = name;
//         this->brend = brend;
//         this->narxi = narxi;
//         this->tezlik = tezlik;
//     }
//     friend void chiqarish(Motosikl);
//     int narx()
//     {
//         return this->narxi;
//     }
//     int tez()
//     {
//         return this->tezlik;
//     }
// };

// void chiqarish(Mashina m)
// {
//     cout << "Nomi: " << m.name << endl;
// }

// void chiqarish(Motosikl m)
// {
//     cout << "Nomi: " << m.name << endl;
// }

// int main()
// {
//     int n;
//     cout << "Mashinalar sonini kiriting: ";
//     cin >> n;

//     Mashina *moshina = new Mashina[n];
//     Motosikl *motosikl = new Motosikl[n];

//     string name, brend;
//     int narxi, tezlik;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Mashina " << i + 1 << " ma'lumotlarni kiriting:\n";
//         cout << "Nomi : ";
//         cin >> name;
//         cout << "Brendi : ";
//         cin >> brend;
//         cout << "Narxi : ";
//         cin >> narxi;
//         cout << "Tezligi : ";
//         cin >> tezlik;

//         moshina[i] = Mashina(name, brend, narxi, tezlik);

//         cout << "Motosikl " << i + 1 << " ma'lumotlarni kiriting:\n";
//         cout << "Nomi : ";
//         cin >> name;
//         cout << "Brendi : ";
//         cin >> brend;
//         cout << "Narxi : ";
//         cin >> narxi;
//         cout << "Tezligi : ";
//         cin >> tezlik;

//         motosikl[i] = Motosikl(name, brend, narxi, tezlik);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (moshina[i].narx() > motosikl[i].narx())
//         {
//             cout << "Ushbu mashina motosikldan qimmatroq: ";
//             chiqarish(moshina[i]);
//         }
//         else if (moshina[i].narx() < motosikl[i].narx())
//         {
//             cout << "Ushbu mashina motosikldan arzonroq: ";
//             chiqarish(motosikl[i]);
//         }
//         else
//         {
//             cout << "Mashina va Motosikl bir xil narxda";
//             chiqarish(motosikl[i]);
//             chiqarish(moshina[i]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (moshina[i].tez() > motosikl[i].tez())
//         {
//             cout << "Ushbu mashina motosikldan tezroq: ";
//             chiqarish(moshina[i]);
//         }
//         else if (moshina[i].tez() < motosikl[i].tez())
//         {
//             cout << "Ushbu mashina motosikldan sekinroq: ";
//             chiqarish(motosikl[i]);
//         }
//         else
//         {
//             cout << "Mashina va Motosikl bir xil tezlikda";
//             chiqarish(motosikl[i]);
//             chiqarish(moshina[i]);
//         }
//     }

//     delete[] moshina;
//     delete[] motosikl;

//     return 0;
// }

///////////////////////////////////////////////////////

// Butun turdagi n-tartibli kvadrat matritsaning absolyut qiymati bo‘yicha eng katta elementlari toplisin. Shu elementlar joylashgan ustun va satrlarni o‘chirish orqali yangi matritsa qurilsin.

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "n=";
    cin >> n;

    int a[n][n];
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = rand() % 100;
            if (abs(a[i][j]) > max1)
            {
                max1 = abs(a[i][j]);
                max2 = i;
                max3 = j;
            }
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\n Yangi matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i != max2)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != max3)
                {
                    cout << a[i][j] << "\t";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
