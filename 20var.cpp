// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x = -4.31, y = 7.11, A, B;

//     A = (pow((sin(x + 1)), 1.5) + y * y + 1 + pow(10, -6) * x) / (exp(x + 1) + pow((y * y + 1), 0.5));

//     B = log(abs((A * (pow(y, 2) + 1) - pow((A * (x + 1) * y), 0.33)) / (tan(pow(y, 2) + 1 + A) + abs(x - 8))));

//     cout << "Natija: A=" << A << " B=" << B << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float r, m, y;

//     cout << "r=";
//     cin >> r;
//     cout << "m=";
//     cin >> m;

//     if (abs(r) > (abs(m) + 1 / 2))
//     {
//         y = (4 * r + 3 * m) / (pow(r, 2) + pow(m, 2));
//     }
//     else
//     {
//         y = abs(r - m);
//     }

//     cout << "Natija: y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float z, y, x, b, d, c;

//     cout << "z=";
//     cin >> z;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;

//     if (z < 1)
//     {
//         x = pow(z, 2) + 1;
//     }
//     else
//     {
//         x = z - 1;
//     }

//     y = (d * b * x * exp(pow(sin(x), 3)) + c * log(x + 1)) / (c * pow(x, 0.5));

//     cout << "Natija: y=" << y << endl;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     double x1, y1, x2, y2;

//     cout << "A nuqtasi (x1 y1): ";
//     cin >> x1 >> y1;

//     cout << "B nuqtasi (x2 y2): ";
//     cin >> x2 >> y2;

//     double masofa = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

//     cout << "A va B nuqtalari orasidagi masofa: " << masofa << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int N;

//     cout << "Kun boshidan boshlab o'tgan sekundlarni kiriting: ";
//     cin >> N;

//     int kun, minut, qolganSekund;

//     kun = N / 86400;
//     N %= 86400;

//     minut = N / 60;
//     qolganSekund = N % 60;

//     cout << "Kun: " << kun << " Minut: " << minut << " Qolgan sekundlar: " << qolganSekund << endl;

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
//     int yuzliklar = uchXonali / 100;

//     if (birliklar != onliklar && onliklar != yuzliklar && birliklar != yuzliklar)
//     {
//         cout << "Ushbu sonning barcha raqamlari xar xil." << endl;
//     }
//     else
//     {
//         cout << "Ushbu sonning barcha raqamlari xar xil emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     double xA, yA, xB, yB, xC, yC;

//     cout << "A nuqtasini kiriting (xA yA): ";
//     cin >> xA >> yA;

//     cout << "B nuqtasini kiriting (xB yB): ";
//     cin >> xB >> yB;

//     cout << "C nuqtasini kiriting (xC yC): ";
//     cin >> xC >> yC;

//     double AB = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
//     double AC = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
//     double BC = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));

//     double engYaqinMasofa = AB;
//     char engYaqinNuqta = 'A';

//     if (AC < engYaqinMasofa)
//     {
//         engYaqinMasofa = AC;
//         engYaqinNuqta = 'C';
//     }

//     if (BC < engYaqinMasofa)
//     {
//         engYaqinMasofa = BC;
//         engYaqinNuqta = 'B';
//     }

//     cout << "Eng yaqin nuqta: " << engYaqinNuqta << endl;
//     cout << "Ular orasidagi eng yaqin masofa: " << engYaqinMasofa << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// unsigned long long factorial(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     long long sum = 0;

//     cout << "n = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         sum += factorial(i);
//     }

//     cout << "Natija = " << sum << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int son;
//     cout << "Butun son kiriting: ";
//     cin >> son;

//     if (son > 0)
//     {
//         son += 1;
//     }
//     else
//     {
//         son -= 2;
//     }

//     cout << "Hosil bo'lgan son: " << son << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int a, b;
//     int soni = 0;

//     cout << "a ni kiriting: ";
//     cin >> a;

//     cout << "b ni kiriting (a < b): ";
//     cin >> b;

//     cout << "Barcha butun sonlar: ";
//     for (int i = a; i <= b; ++i)
//     {
//         cout << i << " ";
//         soni++;
//     }

//     cout << endl;
//     cout << "Soni:" << soni << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int A, B;

//     cout << "A ni kiriting: ";
//     cin >> A;

//     cout << "B ni kiriting (A > B): ";
//     cin >> B;

//     int joylashtirishMumkinligi = A / B;

//     cout << "A kesmada B kesmani necha marta joylashtirish mumkin: " << joylashtirishMumkinligi << " marta" << endl;

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

//     if (A > 2 && B <= 3)
//     {
//         cout << "Rostlik: A > 2 va B <= 3." << endl;
//     }
//     else
//     {
//         cout << "Rostlik emas: A > 2 va B <= 3 shartlarini bajaruvchi sonlar emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int A, B, C;

//     cout << "Birinchi butun sonni kiriting (A): ";
//     cin >> A;

//     cout << "Ikkinchi butun sonni kiriting (B): ";
//     cin >> B;

//     cout << "Uchinchi butun sonni kiriting (C): ";
//     cin >> C;

//     int musbatSoni = 0;

//     if (A > 0)
//     {
//         musbatSoni++;
//     }

//     if (B > 0)
//     {
//         musbatSoni++;
//     }

//     if (C > 0)
//     {
//         musbatSoni++;
//     }

//     cout << "Uchta son orasida nechta musbat son bor: " << musbatSoni << " ta" << endl;

//     return 0;
// }
