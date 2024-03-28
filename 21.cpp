// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double k, x;
//     cout << "k=";
//     cin >> k;
//     cout << "x=";
//     cin >> x;

//     double result = 1.0;
//     double a = 1;
//     for (int t = 2; t <= k; t++)
//     {
//         a *= (t * pow(x, t)) / ((t - 3) != 0 ? (t - 3) : 1.0);
//         double b = 0.0;
//         for (int i = 1; i <= t; i++)
//         {
//             b += (i - 2) / ((i - 7) != 0 ? (i - 7) : 1.0);
//         }
//         result = a * b;
//     }
//     cout << "Natija: P=" << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int n;
//     double x, y = 0.0;

//     cout << "n=";
//     cin >> n;
//     cout << "x=";
//     cin >> x;

//     for (int i = 1; i <= n; i += 2)
//     {
//         if (i % 4 == 1)
//         {
//             y += pow(x, i) / i;
//         }
//         else
//         {
//             y -= pow(x, i) / i;
//         }
//     }

//     cout << "Natija: " << y << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 1; i <= 4; i++)
//     {

//         for (int j = 1; j <= 4 - i; j++)
//         {
//             cout << "  ";
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             cout << " * ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float Z[8] = {-0.75, 3.2, 45.8, -28, 4.7, 28.7, -0.5, 37};

//     float a[8];

//     for (int j = 0; j < 8; j++)
//     {
//         a[j] = sin(2 * Z[j]) + 1;
//     }

//     cout << "Z[]=";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << Z[i] << " ";
//     }

//     cout << "\na[]=";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int kun(int n)
// {

//     if (n == 1)
//     {
//         return 31;
//     }
//     else
//     {
//         return n - 1;
//     }
// }
// void chiqarish(int day)
// {
//     if (day == 0 || day >= 32)
//     {
//         cout << "kun xato kiritildi." << endl;
//     }
//     else
//     {
//         cout << day << " dan bir kun oldingi kun " << kun(day) << endl;
//     }
// }

// int main()
// {
//     int day1, day2, day3;

//     cout << "day1 : ";
//     cin >> day1;
//     cout << "day2 : ";
//     cin >> day2;
//     cout << "day3 : ";
//     cin >> day3;

//     chiqarish(day1);
//     chiqarish(day2);
//     chiqarish(day3);
// }

// Kub sinfini yarating. Unda kamida 5 ta maydon va ularni ekranga chiqaruvchi, qayta ishlovchi usullarni yarating.

// #include <iostream>
// #include <string>

// using namespace std;

// class Kub
// {
// public:
//     string nomi;
//     int s;
//     int tomon;
//     int pi;
//     int son;

//     Kub()
//     {
//         nomi = "";
//         s = 0;
//         tomon = 0;
//         pi = 0;
//         son = 0;
//     }

//     void kiritish()
//     {
//         cout << "Ko`pburchak nomini kiriting: ";
//         cin >> nomi;
//         cout << "Kub tomonlari sonini kiriting: ";
//         cin >> tomon;
//         cout << "Kub yuzini(sm^2) kiriting: ";
//         cin >> s;
//         cout << "Kub piremetrini kiriting : ";
//         cin >> pi;
//         cout << "Kub tartib raqamini kiriting: ";
//         cin >> son;
//     }

//     void chiqazish()
//     {
//         cout << "Ko`pburchak nomi: " << nomi << endl;
//         cout << "Tomon: " << tomon << endl;
//         cout << "Yuza(sm^2): " << s << endl;
//         cout << "Piremetri(sm): " << pi << endl;
//         cout << "Tartib raqami: " << son << endl;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Ko`pburchaklar soni: ";
//     cin >> n;

//     Kub a[n];

//     for (int i = 0; i < n; i++)
//     {
//         a[i].kiritish();
//     }

//     int tartibraqam;
//     cout << "Qaysi tartib raqamli ko`pburchak haqida ma`lumot kerak? ";
//     cin >> tartibraqam;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i].son == tartibraqam)
//         {
//             a[i].chiqazish();
//             break;
//         }
//     }

//     return 0;
// }

// Tufli va tapichka class larini yarating va ularni bog’lovchi funksiyalar yarating

// #include <iostream>
// using namespace std;

// class Tapichka
// {
// public:
//     string nomi;
//     string tuman;
//     int razmeri;
//     int yili;

//     Tapichka() {}

//     Tapichka(string nomi, string tuman, int razmeri, int yili)
//     {
//         this->nomi = nomi;
//         this->tuman = tuman;
//         this->razmeri = razmeri;
//         this->yili = yili;
//     }

//     void kirit(Tapichka tapichkalar[], int n)
//     {
//         cout << "Tapichkalarni kiriting :\n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << i + 1 << " - tapichka ma'lumotlarini kirting :\n";
//             cout << "Nomi : ";
//             cin >> tapichkalar[i].nomi;
//             cout << "Tuman : ";
//             cin >> tapichkalar[i].tuman;
//             cout << "Razmeri : ";
//             cin >> tapichkalar[i].razmeri;
//             cout << "Yili : ";
//             cin >> tapichkalar[i].yili;
//         }
//     }

//     void chiqar(Tapichka tapichkalar[], int n)
//     {
//         cout << "Tapichkalar :\n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Nomi : " << tapichkalar[i].nomi << endl;
//             cout << "Tuman : " << tapichkalar[i].tuman << endl;
//         }
//     }
// };

// class Tufli
// {
// public:
//     string nomi;
//     string tuman;
//     int yili;

//     Tufli() {}

//     Tufli(string nomi, string tuman, int yili)
//     {
//         this->nomi = nomi;
//         this->tuman = tuman;
//         this->yili = yili;
//     }

//     void kirit(Tufli tuflilar[], int n)
//     {
//         cout << "Tuflilarni kiriting :\n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << i + 1 << " - Tufli ma'lumotlarini kirting :\n";
//             cout << "Nomi : ";
//             cin >> tuflilar[i].nomi;
//             cout << "Tuman : ";
//             cin >> tuflilar[i].tuman;
//             cout << "Yili : ";
//             cin >> tuflilar[i].yili;
//         }
//     }

//     void chiqar(Tufli tuflilar[], int n)
//     {
//         cout << "Tuflilar :\n";
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Nomi : " << tuflilar[i].nomi << endl;
//             cout << "Tuman : " << tuflilar[i].tuman << endl;
//         }
//     }
// };

// void tumandagi_tapichka_tufli(Tapichka tapichkalar[], int tapichka_n, Tufli tuflilar[], int tufli_n)
// {
//     string tuman;
//     int cnt = 0;
//     cout << "Tuman nomi : ";
//     cin >> tuman;
//     cout << "Bu tumandagi tapichkalar :\n";
//     for (int i = 0; i < tapichka_n; i++)
//     {
//         if (tapichkalar[i].tuman == tuman)
//         {
//             cnt = 1;
//             cout << tapichkalar[i].nomi << endl;
//         }
//     }
//     if (cnt == 0)
//     {
//         cout << "Bu tumanda tapichkalar yo'q\n";
//     }
//     cnt = 0;
//     cout << "\nBu tumandagi tuflilar :\n";
//     for (int i = 0; i < tufli_n; i++)
//     {
//         if (tuflilar[i].tuman == tuman)
//         {
//             cnt = 1;
//             cout << tuflilar[i].nomi << endl;
//         }
//     }
//     if (cnt == 0)
//     {
//         cout << "Bu tumanda tuflilar yo'q\n";
//     }
// }

// int main()
// {
//     Tapichka tapichkalar[100];
//     Tufli tuflilar[100];
//     int tapichka_son, tufli_son;
//     cout << "Tapichkalar sonini kiriting : ";
//     cin >> tapichka_son;
//     tapichkalar->kirit(tapichkalar, tapichka_son);
//     tapichkalar->chiqar(tapichkalar, tapichka_son);
//     cout << "\nTuflilar sonini kiriting : ";
//     cin >> tufli_son;
//     tuflilar->kirit(tuflilar, tufli_son);
//     tuflilar->chiqar(tuflilar, tufli_son);
//     tumandagi_tapichka_tufli(tapichkalar, tapichka_son, tuflilar, tufli_son);
//     return 0;
// }
