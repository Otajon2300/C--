// #include <iostream>
// #include <cmath>

// using namespace std;

// double uzunlik(double x1, double y1, double x2, double y2)
// {
//     return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
// }

// int main()
// {

//     double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
//     cout << "A nuqtasini kiriting (Ax Ay): ";
//     cin >> Ax >> Ay;
//     cout << "B nuqtasini kiriting (Bx By): ";
//     cin >> Bx >> By;
//     cout << "C nuqtasini kiriting (Cx Cy): ";
//     cin >> Cx >> Cy;
//     cout << "D nuqtasini kiriting (Dx Dy): ";
//     cin >> Dx >> Dy;

//     double AB = uzunlik(Ax, Ay, Bx, By);
//     double BC = uzunlik(Bx, By, Cx, Cy);
//     double CD = uzunlik(Cx, Cy, Dx, Dy);
//     double DA = uzunlik(Dx, Dy, Ax, Ay);
//     double perimetri = AB + BC + CD + DA;

//     double AC = uzunlik(Ax, Ay, Cx, Cy);
//     double BD = uzunlik(Bx, By, Dx, Dy);
//     double yuza = abs(AC * BD);

//     cout << "Perimetri: " << perimetri << endl;
//     cout << "Yuzasi: " << yuza << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int sekundlar;
//     cout << "Kun boshidan boshlab o'tgan vaqtni sekundlarda kiriting: ";
//     cin >> sekundlar;

//     int minutlar = sekundlar / 60;

//     cout << "Kun boshidan boshlab o'tgan vaqt: " << minutlar << " minut" << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a, b, c;
//     cout << "Uchta butun son kiriting: ";
//     cin >> a >> b >> c;

//     bool rostlik = ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0)) ||
//                    ((a % 2 == 0 && c % 2 != 0) || (a % 2 != 0 && c % 2 == 0)) ||
//                    ((b % 2 == 0 && c % 2 != 0) || (b % 2 != 0 && c % 2 == 0));

//     if (rostlik)
//     {
//         cout << "Berilgan uchta butun sonlarning hech bo'lmaganda bir jufti o'zaro qarama-qarshi." << endl;
//     }
//     else
//     {
//         cout << "Berilgan uchta butun sonlar hech bo'lmaganda bir jufti o'zaro qarama-qarshi emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a, b, c, d;
//     cout << "To'rtta butun son kiriting: ";
//     cin >> a >> b >> c >> d;

//     if ((a == b && b == c && d != a) || (a == b && b == d && c != a) ||
//         (a == c && c == d && b != a) || (b == c && c == d && a != b))
//     {
//         cout << "Uchta son bir-biriga teng, qolgan son: " << (a == b ? c : (b == c ? a : b)) << endl;
//     }
//     else
//     {
//         cout << "Berilgan to'rtta son bir-biriga teng emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {

//     int n;
//     cout << "Butun son kiriting: ";
//     cin >> n;

//     int faktorial = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         faktorial *= i;
//     }

//     cout << n << " ning faktoriali: " << faktorial << endl;

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     int sum = 0;
//     int remainder;
//     int soni = 0;

//     cout << "Butun son kiriting (n > 0): ";
//     cin >> n;

//     while (n > 0)
//     {
//         remainder = n % 10;
//         sum += remainder;
//         soni++;
//         n = n / 10;
//     }

//     cout << "Raqamlar yig'indisi: " << sum << endl;
//     cout << "Raqamlar soni: " << soni << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Iltimos, n ni kiriting (n>0): ";
//     cin >> n;

//     double faktorial = 1;

//     for (int i = 1; i <= n; ++i)
//     {
//         faktorial *= i;
//     }

//     cout << "Natija: " << faktorial << endl;

//     return 0;
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

//     if ((a > 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0))
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
//     int n;

//     cout << "n = ";
//     cin >> n;

//     int a[n];

//     cout << "Massiv elementlarini kiriting : ";
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }

//     int ak = a[n - 1];
//     int ak_index = n - 1;

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (a[i] < ak && ak < a[ak_index])
//         {
//             ak = a[i];
//             ak_index = i;
//         }
//     }

//     cout << "Natija = " << ak_index << endl;
// }

// Doira sinfini yarating. Unda kamida 5 ta maydon va ularni ekranga chiqaruvchi, qayta ishlovchi usullarni yarating.

// #include <iostream>
// #include <cmath>

// using namespace std;

// class Doira
// {
// private:
//     double radius;

// public:
//     void kiritish()
//     {
//         cout << "Doira radiusini kiriting: ";
//         cin >> radius;
//     }

//     double atrof_yuzi()
//     {
//         return M_PI * radius * radius;
//     }

//     double uzunlik()
//     {
//         return 2 * M_PI * radius;
//     }

//     void chiqarish()
//     {
//         cout << "Doira radiusi: " << radius << endl;
//         cout << "Doira atrof yuzi: " << atrof_yuzi() << endl;
//         cout << "Doira uzunligi: " << uzunlik() << endl;
//     }
// };

// int main()
// {
//     int n;
//     cout << "Doiralar soni: ";
//     cin >> n;

//     Doira doiralar[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1 << "-doira ma'lumotlarini kiriting:\n";
//         doiralar[i].kiritish();
//     }

//     cout << "Doiralar haqida ma'lumotlar:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1 << "-doira:\n";
//         doiralar[i].chiqarish();
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <algorithm>

// using namespace std;

// namespace yangi_nomlar_fazosi
// {

//     class Ovqat
//     {
//     protected:
//         int porsiya, narxi;
//         string turi;

//     public:
//         Ovqat() {}

//         Ovqat(int porsiya, int narxi, string turi)
//         {
//             this->porsiya = porsiya;
//             this->narxi = narxi;
//             this->turi = turi;
//         }

//         static void qidirish(Ovqat *massiv, int n, string turi)
//         {
//             for (int i = 0; i < n; i++)
//                 if (massiv[i].turi == turi)
//                     massiv[i].print();
//         }

//         static void saralash(Ovqat *massiv, int n)
//         {
//             for (int i = 0; i < n; i++)
//                 for (int j = i + 1; j < n; j++)
//                     if (massiv[i].narxi > massiv[j].narxi)
//                         swap(massiv[i], massiv[j]);
//         }

//         void ozgartirish(int narxi, int porsiya, string turi)
//         {
//             this->narxi = narxi;
//             this->porsiya = porsiya;
//             this->turi = turi;
//         }

//         void print()
//         {
//             cout << "\nnarxi: " << narxi;
//             cout << "\nporsiya: " << porsiya;
//             cout << "\nturi : " << turi << endl;
//         }
//     };

//     class Ichimlik : public Ovqat
//     {
//     public:
//         Ichimlik() {}
//         Ichimlik(int narxi, int porsiya, string turi)
//         {
//             this->narxi = narxi;
//             this->porsiya = porsiya;
//             this->turi = turi;
//         }
//     };

// }

// int main()
// {
//     using namespace yangi_nomlar_fazosi;
//     int n, m;
//     cout << "Nechta Ovqat haqida ma'lumot kiritmoqchisiz? \n n = ";
//     cin >> n;
//     Ovqat *Ovqatlar;
//     Ovqatlar = new Ovqat[n];
//     if (n)
//         cout << "\nOvqatlar haqida ma'lumotlarni kiritish:\n\n";
//     for (int i = 0; i < n; i++)
//     {
//         int narxi, porsiya;
//         string turi;
//         cout << "Ovqatning narxi: ";
//         cin >> narxi;
//         cout << "Ovqatning porsiyasi: ";
//         cin >> porsiya;
//         cout << "Ovqatning turi: ";
//         cin >> turi;
//         Ovqatlar[i] = Ovqat(narxi, porsiya, turi);
//     }
//     cout << "\nOvqatni saralash, narxi bo'yicha:\n";
//     Ovqatlar[0].saralash(Ovqatlar, n);
//     // Ekranga chiqarish:
//     for (int i = 0; i < n; i++)
//     {
//         Ovqatlar[i].print();
//     }
//     cout << "\nQidirish: \nturi kiriting: ";
//     string turi;
//     cin >> turi;
//     Ovqatlar[0].qidirish(Ovqatlar, n, turi);
//     cout << "Nechta ichimlik haqida ma'lumot kiritmoqchisiz?\nn = ";
//     cin >> m;

//     Ichimlik *Ichimliklar;
//     Ichimliklar = new Ichimlik[m];
//     if (m)
//         cout << "\nichimliklar haqida ma'lumotlarni kiritish:\n\n";
//     for (int i = 0; i < m; i++)
//     {
//         int narxi, porsiya;
//         string turi;
//         cout << "Ichimlikning narxi: ";
//         cin >> narxi;
//         cout << "Ichimlikning porsiyasi: ";
//         cin >> porsiya;
//         cout << "Ichimlikning turi: ";
//         cin >> turi;
//         Ichimliklar[i] = Ichimlik(narxi, porsiya, turi);
//     }
//     cout << "\nichimlikni saralash, narxi bo'yicha:\n";
//     Ichimliklar[0].saralash(Ichimliklar, m);

//     for (int i = 0; i < m; i++)
//     {
//         Ichimliklar[i].print();
//     }
//     cout << "\nQidirish: turi kiriting: ";
//     cin >> turi;
//     Ichimliklar[0].qidirish(Ichimliklar, m, turi);
// }
