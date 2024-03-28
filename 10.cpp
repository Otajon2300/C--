// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b, x, y, d;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "x=";
//     cin >> x;

//     y = b * pow(tan(x), 2) - (a / sin(x / b));

//     d = a * exp(-pow(a, 0.5)) * cos(b * x / a);

//     cout << "Natija: y=" << y << " d=" << d << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x, b;
//     float y;

//     cout << "x=";
//     cin >> x;

//     if (x >= 0)
//     {
//         y = log(x + pow((pow(x, 2.0) + 9), 0.5));
//     }
//     else if(x<0)
//     {
//         y = pow(tan(x),3);
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double a, b, c;

//     cout << "Uchburchak tomonlarini kiriting : ";

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;

//     if ((a + b > c) && (a + c > b) && (b + c > a))
//     {
//         cout << "Uchburchak mavjud." << endl;
//     }
//     else
//     {
//         cout << "Uchburchak mavjud emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c;
//     int cur;
//     cout << "Robot turgan joyni kiriting(s-shimol, j-janub, q-sharq, g-garb) : ";
//     cin >> c;
//     switch (c)
//     {
//     case 's':
//         cur = 1;
//         break;
//     case 'j':
//         cur = 3;
//         break;
//     case 'q':
//         cur = 4;
//         break;
//     case 'g':
//         cur = 2;
//         break;
//     default:
//         cur = 1;
//         break;
//     }

//     int com;
//     do
//     {
//         cout << "Kamanda: 0-stop, 1-chapga buril, 2-o'nga buril - ";
//         cin >> com;
//         if (com == 1)
//             cur--;
//         else if (com == 2)
//             cur++;
//         if (cur == 0)
//             cur = 4;
//         else if (cur == 5)
//             cur = 1;
//     } while (com != 0);

//     switch (cur)
//     {
//     case 1:
//         cout << "shimol";
//         break;
//     case 2:
//         cout << "g'arb";
//         break;
//     case 3:
//         cout << "janub";
//         break;
//     case 4:
//         cout << "sharq";
//         break;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a1, a2, b1, b2, c1, c2;
//     float x, y;

//     cout << "a1=";
//     cin >> a1;
//     cout << "b1=";
//     cin >> b1;
//     cout << "c1=";
//     cin >> c1;
//     cout << "a2=";
//     cin >> a2;
//     cout << "b2=";
//     cin >> b2;
//     cout << "c2=";
//     cin >> c2;

//     y = ((a2 / a1) * c1 - c2) / ((a2 / a1) * b1 - b2);
//     x = (c1 - b1 * y) / a1;
//     cout << "x=" << x << " y=" << y;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double x, y;
//     cout << "Birinchi sonni kiriting: ";
//     cin >> x;
//     cout << "Ikkinchi sonni kiriting: ";
//     cin >> y;

//     double yigindi = x + y;
//     double kopaytma = x * y;
//     double kvadratX = x * x;
//     double kvadratY = y * y;

//     cout << "Yig'indi: " << yigindi << endl;
//     cout << "Ko'paytma: " << kopaytma << endl;
//     cout << "Birinchi sonning kvadrati: " << kvadratX << endl;
//     cout << "Ikkinchi sonning kvadrati: " << kvadratY << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int uchXonali;
//     cout << "Uch xonali sonni kiriting: ";
//     cin >> uchXonali;

//     int birliklar = uchXonali % 10;
//     int onliklar = (uchXonali / 10) % 10;

//     cout << "Birliklar xonasidagi raqam: " << birliklar << endl;
//     cout << "O'nliklar xonasidagi raqam: " << onliklar << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int A, B;

//     cout << "Birinchi butun sonni kiriting (A): ";
//     cin >> A;

//     cout << "Ikkinchi butun sonni kiriting (B): ";
//     cin >> B;

//     if ((A % 2 == 1 && B % 2 == 0) || (A % 2 == 0 && B % 2 == 1))
//     {
//         cout << "A va B sonlarning faqat bittasi toq son." << endl;
//     }
//     else
//     {
//         cout << "A va B sonlarning faqat bittasi toq son emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int A, B;

//     cout << "Birinchi butun sonni kiriting (A): ";
//     cin >> A;

//     cout << "Ikkinchi butun sonni kiriting (B): ";
//     cin >> B;

//     if (A != B)
//     {

//         A = A + B;
//         B = A;
//     }
//     else
//     {

//         A = 0;
//         B = 0;
//     }

//     cout << "Yangilangan A qiymati: " << A << endl;
//     cout << "Yangilangan B qiymati: " << B << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double x;

//     cout << "x = ";
//     cin >> x;

//     double result = cosh(x);

//     cout << "ch(" << x << ") = " << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int x, y, z;
//     float s;

//     cout << "x = ";
//     cin >> x;
//     cout << "y = ";
//     cin >> y;
//     cout << "z = ";
//     cin >> z;

//     int faktorial = 1;
//     for (int i = 1; i <= 4; ++i)
//     {
//         faktorial *= i;
//     }

//     s = (x * y * z + 3.3 * abs(x + pow(y, 0.25))) / (pow(10, 7.0) + sqrt(log(faktorial)));

//     cout << "Natija: " << s << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int x;
//     float y;

//     cout << "x = ";
//     cin >> x;

//     y = 3 * pow(x, 6.0) - 6 * pow(x, 3.0) - 7;

//     cout << "Natija: " << y << endl;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int b = 10;

//     if (a == b)
//     {
//         cout << "a teng b" << endl;
//     }
//     else
//     {
//         cout << "a teng emas b" << endl;
//     }

//     if (a != b)
//     {
//         cout << "a teng emas b" << endl;
//     }
//     else
//     {
//         cout << "a teng b" << endl;
//     }

//     if (a < b)
//     {
//         cout << "a kichik b" << endl;
//     }
//     else
//     {
//         cout << "a katta yoki teng b" << endl;
//     }

//     if (a > b)
//     {
//         cout << "a katta b" << endl;
//     }
//     else
//     {
//         cout << "a kichik yoki teng b" << endl;
//     }

//     if (a <= b)
//     {
//         cout << "a kichik yoki teng b" << endl;
//     }
//     else
//     {
//         cout << "a katta b" << endl;
//     }

//     if (a >= b)
//     {
//         cout << "a katta yoki teng b" << endl;
//     }
//     else
//     {
//         cout << "a kichik b" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int x, a, b, c;
//     int d, e, k;
//     int q, h, m;

//     float z;

//     cout << "x = ";
//     cin >> x;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;
//     cout << "d = ";
//     cin >> d;
//     cout << "e = ";
//     cin >> e;
//     cout << "k = ";
//     cin >> k;
//     cout << "q = ";
//     cin >> q;
//     cout << "h = ";
//     cin >> h;
//     cout << "m = ";
//     cin >> m;

//     if (x < 2)
//     {
//         z = a + b * x + c * pow(x, 4);
//     }
//     else if (2 <= x <= 3)
//     {
//         z = d + e * x + k * pow(x, 4);
//     }
//     else
//     {
//         z = q + h * x + m * pow(x, 4);
//     }

//     cout << "Natija: " << z << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int x, a, b, c;
//     float z;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;
//     cout << "x = ";
//     cin >> x;

//     if (1 <= x <= 2)
//     {
//         z = sin(x) + tan(x * x);
//     }
//     else if (x > 2)
//     {
//         z = pow(x, (a + b)) + (pow(x, 2) - pow(x, 0.33));
//     }
//     else
//     {
//         z = sin(x + pow(x, x) + a * b * c);
//     }

//     cout << z << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     float y = 0;

//     for (int i = 1; i <= 6; i++)
//     {
//         y += (i+5) / (pow(i,4.0)+27*i+7);
//     }

//     cout << "Natija: " << y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = 0.0374;
//     float y = -0.825;
//     float z = 10;
//     float v;

//     v = (1 + pow((sin(x + y)), 2.0)) / (abs(x - (2 * y) / (1 + x * x * y * y))) * pow(x, abs(y)) + pow((cos(atan(1 / z))), 2.0);

//     cout << "Natija: " << v << endl;

//     return 0;
// }

#include <iostream>
#include <sstream>
using namespace std;

void almashtirish(char A[], const char B[])
{
    istringstream streamA(A);
    istringstream streamB(B);

    string wordA, wordB;
    int wordCount = 0;

    while (streamA >> wordA && streamB >> wordB)
    {
        if (wordA.length() >= 2 && wordB.length() >= 3)
        {

            A[wordCount * 5 + 1] = wordB[2];
        }
        wordCount++;
    }
}

int main()
{
    char A[100], B[100];

    cout << "A satrni kiritng : ";
    cin.getline(A, sizeof(A));

    cout << "B satrni kiritng : ";
    cin.getline(B, sizeof(B));

    almashtirish(A, B);

    cout << "S satr : " << A << endl;

    return 0;
}

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
//     int soni = 0;

//     cout << "Fayl nomini kiriting: ";
//     string faylNomi;
//     cin >> faylNomi;

//     ofstream fayl(faylNomi);
//     if (!fayl.is_open())
//     {
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     cout << "Satrni kiriting: ";
//     string satr;
//     getline(cin >> ws, satr);

//     fayl << satr;

//     fayl.close();

//     ifstream oqishFayli(faylNomi);
//     if (!oqishFayli.is_open())
//     {
//         cout << "Fayl ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     string faylSatr;
//     getline(oqishFayli, faylSatr);

//     for (char ch : faylSatr)
//     {
//         if (ch == 'K' || ch == 'k')
//         {
//             soni++;
//         }
//     }

//     oqishFayli.close();
//     cout << "Fayldagi 'k' lar soni : " << soni << endl;

//     return 0;
// }
