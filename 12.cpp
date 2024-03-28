// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     float c, P;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     c = sqrt(a * a + b * b);

//     P = a + b + c;

//     cout << "gipotenuzasi c = " << c << endl;
//     cout << "perimetri P = " << P << endl;
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

//     int teskariSon = birliklar * 100 + onliklar * 10 + yuzliklar;

//     cout << "Uch xonali sonning teskari tartibdagi qiymati: " << teskariSon << endl;

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

//     if (A > 0 && B > 0 && C > 0)
//     {
//         cout << "A, B, C sonlarning har biri musbat." << endl;
//     }
//     else
//     {
//         cout << "Rostlikni tekshirdi: A, B, C sonlarning har biri musbat emas." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int A, B, C;

//     cout << "Birinchi sonni kiriting (A): ";
//     cin >> A;

//     cout << "Ikkinchi sonni kiriting (B): ";
//     cin >> B;

//     cout << "Uchinchi sonni kiriting (C): ";
//     cin >> C;

//     int kichikSon = A;

//     if (B < kichikSon)
//     {
//         kichikSon = B;
//     }

//     if (C < kichikSon)
//     {
//         kichikSon = C;
//     }

//     cout << "Uch xonali sonlarning eng kichigi: " << kichikSon << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;

//     cout << "n ni kiriting (n > 0): ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Noto'g'ri qiymat! n > 0 bo'lishi kerak." << endl;
//         return 1;
//     }

//     double S = 1.0;
//     for (int i = 1; i <= n; ++i)
//     {
//         S *= (1.0 + i / 10.0);
//     }

//     cout << "Ko'paytma (S) = " << S << endl;

//     return 0;
// }
