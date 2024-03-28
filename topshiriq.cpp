// Berilgan natural sonning mukammalligi, ya'ni o‘zidan boshqa musbat bo‘luvchilarining yig‘indisi shu sonning o‘ziga tengligi aniqlansin. (misol uchun, 6- mukammal, chunki 6=1+2+3).

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int son, b = 0, sum = 0;
//     cout << "son=";
//     cin >> son;

//     int A[son];

//     for (int j = 1; j <= son / 2; j++)
//     {
//         if (son % j == 0)
//         {
//             A[b] = j;
//             b++;
//         }
//     }

//     for (int i = 0; i < b; i++)
//     {
//         sum += A[i];
//     }

//     if (sum == son)
//     {
//         cout << son << " soni mukammal son!\n";
//     }
//     else
//     {
//         cout << son << " soni mukammal son emas!\n";
//     }

//     return 0;
// }

// O'nlik sanoq sistemasidagi p(p<1) kasr sonining oltilik sanoq sistemasiga o'tkazilganda '4' raqami necha marta uchrashi aniqlansin.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     double p;
//     cout << "O'nlik sanoq sistemasidagi kasr sonini kiriting (0 < p < 1): ";
//     cin >> p;

//     if (p <= 0 || p >= 1)
//     {
//         cout << "Xato: p 0 dan kichik yoki 1 dan katta bo'lishi kerak!" << endl;
//         return 1;
//     }

//     cout << "O'nlik sanoq sistemasidan oltilik sanoq sistemasiga o'tkazilgan natija: 0.";

//     int count = 0;
//     while (p != 0.0)
//     {
//         p *= 16;
//         int digit = static_cast<int>(p);
//         if (digit < 10)
//         {
//             cout << digit;
//             if (digit == 4)
//             {
//                 count++;
//             }
//         }
//         else
//         {
//             char hexDigit = 'A' + (digit - 10);
//             cout << hexDigit;
//         }
//         p -= digit;
//     }

//     cout << endl;

//     cout << "4 raqami " << count << " marta uchradi." << endl;

//     return 0;
// }

// * * * * * * *

//   * * * * *

//     * * *

//       *

//     * * *

//   * * * * *

// * * * * * * *

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

// Berilgan sonni kubini topadigan funksiya yarating. Ushbu funksiya yordanida a,b,c,d sonlarini kubini hisoblang.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int kub(int a)
// {
//     int b;

//     b = pow(a, 3);

//     return b;
// }
// int main()
// {
//     int a, b, c, d;
//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;

//     cout << kub(a) << endl;
//     cout << kub(b) << endl;
//     cout << kub(c) << endl;
//     cout << kub(d) << endl;

//     return 0;
// }

// Berilgan ikkita sonni “do‘st son” larga tekshiradigan funksiya yarating. Ushbu funksiya yordamida a va a1, b va b1, c va c1 sonlarini o‘zaro do‘stlikka tekshiring.

// #include <iostream>

// using namespace std;

// void friendNumber(int a, int b)
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

//     friendNumber(a, b);

//     return 0;
// }
