// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     float r;
//     cout << "Aylaning radiusini kiriting: ";
//     cin >> r;

//     float uzunlik = 2 * M_PI * r;

//     cout << "Aylana uzunligi : " << uzunlik << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a, b, c;
//     float r;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     r = (a + b - c) / 2;

//     cout << "Ichki chizilgan aylana diametri : " << r * 2 << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, d;

//     cout << "a ni kiriting: ";
//     cin >> a;

//     cout << "b ni kiriting: ";
//     cin >> b;

//     cout << "c ni kiriting: ";
//     cin >> c;

//     cout << "d ni kiriting: ";
//     cin >> d;

//     int engKatta = a;
//     int engKichik = a;

//     if (b > engKatta)
//     {
//         engKatta = b;
//     }
//     else if (b < engKichik)
//     {
//         engKichik = b;
//     }

//     if (c > engKatta)
//     {
//         engKatta = c;
//     }
//     else if (c < engKichik)
//     {
//         engKichik = c;
//     }

//     if (d > engKatta)
//     {
//         engKatta = d;
//     }
//     else if (d < engKichik)
//     {
//         engKichik = d;
//     }

//     cout << "Eng katta son: " << engKatta << endl;
//     cout << "Eng kichik son: " << engKichik << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     double a, b, c;

//     cout << "Uchburchak tomonlarini kiriting:\n";
//     cout << "a ni kiriting: ";
//     cin >> a;

//     cout << "b ni kiriting: ";
//     cin >> b;

//     cout << "c ni kiriting: ";
//     cin >> c;

//     if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a))
//     {
//         cout << "Uchburchak yasash mumkin.\n";
//     }
//     else
//     {
//         cout << "Uchburchak yasash mumkin emas.\n";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i = 1;
//     int n;
//     int sum = 0;

//     cout << "n=";
//     cin >> n;

//     do
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//         i++;
//     } while (i < n);

//     cout << "Natija : " << sum << endl;
//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     long long f = 1;

//     cout << "n = ";
//     cin >> n;

//     for (int i = 0; i <= n; i++)
//     {
//         if (i == 0)
//         {
//             f *= 1;
//         }
//         else
//         {
//             f *= i;
//         }
//     }

//     cout << "Natija : " << f << endl;
// }

// #include <iostream>
// using namespace std;

// int engKatta(int x, int y, int z)
// {
//     if (x >= y && x >= z)
//     {
//         return x;
//     }
//     else if (y >= x && y >= z)
//     {
//         return y;
//     }
//     else
//     {
//         return z;
//     }
// }

// int main()
// {
//     int a, b, c;
//     cout << "a ni kiriting: ";
//     cin >> a;
//     cout << "b ni kiriting: ";
//     cin >> b;
//     cout << "c ni kiriting: ";
//     cin >> c;

//     int katta = engKatta(a, b, c);

//     cout << "Eng katta son: " << katta << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int yigindi(int a, int b)
// {
//     int natija = a + b;
//     return natija;
// }

// int main()
// {
//     int son1 = 5;
//     int son2 = 3;
//     int javob = yigindi(son1, son2);
//     cout << "Yig'indi: " << javob << endl;
//     return 0;
// }

// #include <iostream>
// #include <time.h>
// using namespace std;
// int main()
// {
//     srand(time(0));

//     int n;

//     cout << "n = ";
//     cin >> n;

//     int massiv[n];

//     cout << "Massiv elementlari : ";
//     for (int i = 0; i < 9; ++i)
//     {
//         massiv[i] = rand() % 101;
//         cout << massiv[i] << " ";
//     }

//     int maksimal = massiv[0];
//     int minimal = massiv[0];

//     for (int i = 1; i < 9; ++i)
//     {
//         if (massiv[i] > maksimal)
//         {
//             maksimal = massiv[i];
//         }
//         else if (massiv[i] < minimal)
//         {
//             minimal = massiv[i];
//         }
//     }

//     for (int i = 0; i < 9; ++i)
//     {
//         if (massiv[i] == maksimal)
//         {
//             massiv[i] = minimal;
//         }
//         else if (massiv[i] == minimal)
//         {
//             massiv[i] = maksimal;
//         }
//     }

//     cout << "\nAlmashtirilgan massiv: ";
//     for (int i = 0; i < 9; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a[5];
//     int b[5];
//     int c[5];

//     cout << "a[5] massiv elementlarini kiriting : ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     cout << endl;

//     cout << "b[5] massiv elementlarini kiriting : ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> b[i];
//     }
//     cout << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         c[i] = a[i] + b[i];
//     }

//     cout << "c[] massiv elementlari : ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << c[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;

//     cout << "Birinchi qiymat: " << *ptr << endl;

//     *ptr = 100;

//     cout << "O'zgartirilgan' qiymat: " << *ptr << endl;

//     return 0;
// }

// #include <iostream>
// #include <time.h>
// using namespace std;
// int main() {
//     srand(time(0));
//     int *a;
//     int n;

//     cout << "Massiv o'lchamini kiriting: ";
//     cin >> n;

//     a = new int[n];

//     for (int i = 0; i < n; ++i) {
//         cout << "Qiymat " << i + 1 << ": ";
//         cin >> a[i];
//     }

//     cout << "Siz kiritgan massiv: ";
//     for (int i = 0; i < n; ++i) {
//         cout << a[i] << " ";
//     }

//     delete[] a;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string ism, familiya;

//     cout << "Ismingizni kiriting: ";
//     cin >> ism;

//     cout << "Familiyangizni kiriting: ";
//     cin >> familiya;

//     string toliqIsm = ism + " " + familiya;

//     cout << "To'liq ismingiz: " << toliqIsm << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string satr;

//     cout << "Satrni kiriting: ";
//     getsatr(cin, satr);

//     int count = 0;
//     for (char c : satr)
//     {
//         if (c == 'a')
//         {
//             count++;
//         }
//     }

//     cout << "Satrdagi 'a' belgilari soni: " << count << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main()
// {

//     ofstream fileOut("file.txt");

//     if (fileOut.is_open())
//     {
//         fileOut << "Bu faylga yozilgan matn." << endl;
//         fileOut << "Salom dasturchilar." << endl;
//         fileOut.close();
//     }
//     else
//     {
//         cout << "Faylni ochishda xatolik yuz berdi." << endl;
//     }

//     ifstream fileIn("file.txt");
//     string satr;

//     if (fileIn.is_open())
//     {
//         cout << "Fayldagi matn:" << endl;
//         while (getsatr(fileIn, satr))
//         {
//             cout << satr << endl;
//         }
//         fileIn.close();
//     }
//     else
//     {
//         cout << "Faylni o'qishda xatolik yuz berdi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// struct Shaxs
// {
//     string ism;
//     string familiya;
//     int yosh;
// };

// int main()
// {

//     Shaxs shaxs1;

//     cout << "Ismni kiriting: ";
//     cin >> shaxs1.ism;

//     cout << "Familiyangizni kiriting: ";
//     cin >> shaxs1.familiya;

//     cout << "Yoshini kiriting: ";
//     cin >> shaxs1.yosh;

//     cout << "\nKiritilgan ma'lumotlar:" << endl;
//     cout << "Ism: " << shaxs1.ism << endl;
//     cout << "Familiya: " << shaxs1.familiya << endl;
//     cout << "Yosh: " << shaxs1.yosh << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b;

//     cout << "To'rtburchakning balandligi kiriting: ";
//     cin >> a;
//     cout << "To'rtburchakning enini kiriting: ";
//     cin >> b;

//     int Yuzasi = a * b;
//     cout << "To'rtburchakning yuzasi: " << Yuzasi << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     int a, b;
//     float c;

//     cout << "Uchburchakning A katetini kiriting: ";
//     cin >> a;

//     cout << "Uchburchakning B katetini kiriting: ";
//     cin >> b;

//     c = sqrt(pow(a, 2) + pow(b, 2));

//     cout << "Uchburchakning gipotenuzasi (C): " << c << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b, c, d;
//     cout << "a ni kiriting: ";
//     cin >> a;
//     cout << "b ni kiriting: ";
//     cin >> b;
//     cout << "c ni kiriting: ";
//     cin >> c;
//     cout << "d ni kiriting: ";
//     cin >> d;

//     // Eng katta sonni topish
//     int engKatta = a;

//     if (b > engKatta)
//     {
//         engKatta = b;
//     }

//     if (c > engKatta)
//     {
//         engKatta = c;
//     }

//     if (d > engKatta)
//     {
//         engKatta = d;
//     }

//     cout << "Eng katta son: " << engKatta << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a, b, x, y;
//     a = 5.41;
//     b = 3;
//     cout << "x ning qiymatini kiriting";
//     cin >> x;
//     if (x < b)
//         y = pow(sin(a * x * x), 3) / sqrt(x * x + 1);
//     else
//         y = (cos(a * x) + exp(-a * pow(x, 3))) / (pow(x, 2. / 3) + atan(x));
//     cout << "\n y=" << y;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int sun = 0;

//     for (int i = 1; i <= 50; i++)
//     {
//         if (i % 2 != 0)
//         {
//             sun += i;
//         }
//     }

//     cout << "0 dan 50 gacha bo'lgan toq sonlar yig'indisi: " << sun << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int daraja(int a)
// {
//     long long dar;

//     dar = pow(a, 4);

//     return dar;
// }
// int main()
// {
//     int son;

//     cout << "son kiriting : ";
//     cin >> son;

//     cout << son << " sonining to'rtinchi darajasi: " << daraja(son) << endl;

//     return 0;
// }

// #include <iostream>
// #include <time.h>
// using namespace std;

// int main()
// {
//     srand(time(0));

//     int n;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> n;

//     int massiv[n];

//     cout << "Massiv elementlari : ";
//     for (int i = 0; i < n; ++i)
//     {
//         massiv[i] = rand() % 101;
//         cout << massiv[i] << " ";
//     }

//     int engKatta = massiv[0];

//     for (int i = 1; i < n; ++i)
//     {
//         if (massiv[i] > engKatta)
//         {
//             engKatta = massiv[i];
//         }
//     }

//     cout << "Massivning eng katta elementi: " << engKatta << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int a = 10;

//     int *pointerA;

//     pointerA = &a;

//     cout << "a ning qiymati: " << a << endl;
//     cout << "Ko'rsatkich orqali olinayotgan qiymat: " << *pointerA << endl;

//     *pointerA = 20;

//     cout << "a ning qiymati: " << a << endl;
//     cout << "Ko'rsatkich orqali oʻzgarayotgan qiymat: " << *pointerA << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {

//     string satr;
//     cout << "Istalgan satrni kiriting: ";
//     getsatr(cin, satr);

//     int soni = 0;
//     for (char ch : satr)
//     {
//         if (ch == 'a' || ch == 'A')
//         {
//             soni++;
//         }
//     }

//     cout << "Satrda " << soni << " ta 'a' harfi mavjud.\n";

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {

//     ofstream outFile("test.txt");
//     if (!outFile)
//     {
//         cout << "Faylni yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     outFile << "Bu faylga yozilgan matn." << endl;
//     outFile.close();

//     ifstream inFile("test.txt");
//     if (!inFile)
//     {
//         cout << "Faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     string satr;
//     while (getsatr(inFile, satr))
//     {
//         cout << satr << endl;
//     }

//     inFile.close();

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a, b, c;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     c = sqrt(a * a + b * b);

//     cout << "To'g'ri burchakli uchburchakning gipotenuzasi c=" << c << endl;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {

//     int n;
//     cout << "n tomonlar sonini kiriting: ";
//     cin >> n;

//     float togru_burchak = 360.0 / n;

//     float radianlar = togru_burchak * M_PI / 180.0;

//     float yuzi = (n * pow(1, 2)) / (4 * tan(M_PI / n));

//     cout << "Muntazam shakl yuzi: " << yuzi << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {

//     float A;
//     cout << "Kvadratning tomonini kiriting: ";
//     cin >> A;

//     float R;
//     cout << "Doiraning radiusini kiriting: ";
//     cin >> R;

//     float kvadrat_yuzi = A * A;

//     float doira_yuzi = M_PI * R * R;

//     cout << "Kvadratning yuzi: " << kvadrat_yuzi << endl;
//     cout << "Doiraning yuzi: " << doira_yuzi << endl;

//     if (kvadrat_yuzi > doira_yuzi)
//     {
//         cout << "Kvadratning yuzi katta " << endl;
//     }
//     else if (doira_yuzi > kvadrat_yuzi)
//     {
//         cout << "Doiraning yuzi katta " << endl;
//     }
//     else
//     {
//         cout << "Kvadrat va doiraning yuzi teng.";
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int x;
//     cout << "Butun son kiriting: ";
//     cin >> x;

//     int y;

//     if (x >= 0)
//     {
//         y = pow(x, 4);
//     }
//     else
//     {
//         y = 5 * x + pow(x, 2);
//     }

//     cout << "Natija: " << y << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c, d, e;

//     cout << "Beshta butun son kiriting: ";
//     cin >> a >> b >> c >> d >> e;

//     int eng_katta = a;
//     int eng_kichik = a;

//     if (b > eng_katta)
//     {
//         eng_katta = b;
//     }
//     else if (b < eng_kichik)
//     {
//         eng_kichik = b;
//     }

//     if (c > eng_katta)
//     {
//         eng_katta = c;
//     }
//     else if (c < eng_kichik)
//     {
//         eng_kichik = c;
//     }

//     if (d > eng_katta)
//     {
//         eng_katta = d;
//     }
//     else if (d < eng_kichik)
//     {
//         eng_kichik = d;
//     }

//     if (e > eng_katta)
//     {
//         eng_katta = e;
//     }
//     else if (e < eng_kichik)
//     {
//         eng_kichik = e;
//     }

//     cout << "Eng katta son: " << eng_katta << endl;
//     cout << "Eng kichik son: " << eng_kichik << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "Massiv uzunligini kiriting n : ";
//     cin >> n;

//     int *a = new int[n];

//     cout << "Massiv elementlarini kiriting:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << "Element " << i + 1 << ": ";
//         cin >> a[i];
//     }

//     int max = a[0];
//     int min = a[0];

//     for (int i = 1; i < n; ++i)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }

//     cout << "Eng katta element: " << max << endl;
//     cout << "Eng kichik element: " << min << endl;

//     delete[] a;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;

//     cout << "Massiv o'lchamini kiriting n: ";
//     cin >> n;

//     int *massiv = new int[n];

//     cout << "Massiv elementlarini kiriting:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> massiv[i];
//     }

//     int sum = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         sum += massiv[i];
//     }

//     double ortaArifmetika = static_cast<double>(sum) / n;

//     cout << "Massiv elementlarining o'rta arifmetikasi: " << ortaArifmetika << endl;

//     delete[] massiv;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "n ni kiriting: ";
//     cin >> n;

//     cout << "Son\tKvadrati" << endl;
//     for (int i = 1; i <= n; ++i)
//     {
//         int kvadrat = pow(i, 2.0);
//         cout << i << "\t" << kvadrat << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "n ni kiriting: ";
//     cin >> n;

//     cout << "Sonlar, 7 ga bo'linadi, 5 ga bo'linmaydi:" << endl;
//     for (int i = 1; i <= n; ++i)
//     {
//         if (i % 7 == 0 && i % 5 != 0)
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "n ni kiriting: ";
//     cin >> n;

//     cout << "Tub sonlar: ";
//     for (int i = 2; i <= n; ++i)
//     {
//         bool is_prime = true;
//         if (i <= 1)
//         {
//             is_prime = false;
//         }
//         else
//         {
//             for (int j = 2; j * j <= i; ++j)
//             {
//                 if (i % j == 0)
//                 {
//                     is_prime = false;
//                     break;
//                 }
//             }
//         }

//         if (is_prime)
//         {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// double daraja(double son, int n)
// {
//     return pow(son, n);
// }

// int main()
// {

//     double son;
//     int n;

//     cout << "Sonni kiriting: ";
//     cin >> son;

//     cout << "Darajani kiriting: ";
//     cin >> n;

//     cout << son << " ning " << n << " -chi darajasi: " << daraja(son, n) << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// double uchburchakYuzasi(int a, int b, int c)
// {

//     float p = (a + b + c) / 2;
//     float S = sqrt(p * (p - a) * (p - b) * (p - c)); // heron formulasi

//     return S;
// }

// int main()
// {

//     double a, b, c;

//     cout << "Uchburchak tomonlarini kiriting:" << endl;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     cout << "Uchburchak yuzasi: " << uchburchakYuzasi(a, b, c) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int massiv[9] = {5, 12, 8, 3, 9, 20, 7, 15, 10};

//     cout << "Boshlang'ich massiv: ";
//     for (int i = 0; i < 9; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     int maksimal = massiv[0];
//     int minimal = massiv[0];

//     for (int i = 1; i < 9; ++i)
//     {
//         if (massiv[i] > maksimal)
//         {
//             maksimal = massiv[i];
//         }
//         else if (massiv[i] < minimal)
//         {
//             minimal = massiv[i];
//         }
//     }

//     for (int i = 0; i < 9; ++i)
//     {
//         if (massiv[i] == maksimal)
//         {
//             massiv[i] = minimal;
//         }
//         else if (massiv[i] == minimal)
//         {
//             massiv[i] = maksimal;
//         }
//     }

//     cout << "\nAlmashtirilgan massiv: ";
//     for (int i = 0; i < 9; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Massiv o'lchamini kiriting: ";
//     cin >> n;

//     int a[n];
//     cout << "Massiv elementlarini kiriting:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cout << "a[" << i << "] = ";
//         cin >> a[i];
//     }

//     float sum = 0;
//     float product = 1;

//     for (int i = 0; i < n; ++i)
//     {
//         sum += a[i];
//         product *= a[i];
//     }

//     float ortaArifmetikQiymat = sum / n;
//     float ortaGeometrikQiymat = pow(product, 1.0 / n);

//     cout << "O'rta arifmetik: " << ortaArifmetikQiymat << endl;
//     cout << "O'rta geometrik: " << ortaGeometrikQiymat << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string satr;

//     cout << "Satr kiriting: ";
//     getsatr(cin, satr);

//     string uzun_soz, soz;
//     size_t max = 0;

//     size_t start = 0;
//     size_t end = satr.find(' ');

//     while (end != string::npos)
//     {
//         soz = satr.substr(start, end - start);
//         if (soz.length() > max)
//         {
//             max = soz.length();
//             uzun_soz = soz;
//         }

//         start = end + 1;
//         end = satr.find(' ', start);
//     }

//     soz = satr.substr(start);
//     if (!soz.empty() && soz.length() > max)
//     {
//         uzun_soz = soz;
//     }

//     if (!uzun_soz.empty())
//     {
//         cout << "Eng uzun so'z: " << uzun_soz << endl;
//     }
//     else
//     {
//         cout << "Satrda so'z topilmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;
// int main()
// {
//     string satr;

//     cout << "Satr kiriting: ";
//     getline(cin, satr);

//     istringstream iss(satr);
//     string soz;

//     while (iss >> soz)
//     {
//         for (int i = soz.length() - 1; i >= 0; --i)
//         {
//             cout << soz[i];
//         }
//         cout << " ";
//     }

//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     string Fayl_nomi;
//     cout << "Fayl nomini kiriting: ";
//     cin >> Fayl_nomi;

//     ifstream inputFile(Fayl_nomi.c_str());

//     if (!inputFile.is_open())
//     {
//         cout << "Xatolik: Fayl ochilmadi!" << endl;
//         return 1;
//     }

//     string Fayl_nomi_2;
//     cout << "Natijani saqlash uchun yangi fayl nomini kiriting: ";
//     cin >> Fayl_nomi_2;

//     ofstream outputFile(Fayl_nomi_2.c_str());

//     if (!outputFile.is_open())
//     {
//         cout << "Xatolik: Fayl yaratilmadi!" << endl;
//         inputFile.close();
//         return 1;
//     }

//     int a, b, c;

//     while (inputFile >> a >> b >> c)
//     {
//         float p = (a + b + c) / 2;
//         float S = sqrt(p * (p - a) * (p - b) * (p - c));

//         outputFile << "Uchburchak tomonlari: " << a << ", " << b << ", " << c
//                    << " Yuzasi: " << S << endl;
//     }

//     inputFile.close();
//     outputFile.close();

//     cout << "Natijalar yangi faylda saqlandi." << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     string Faylnomi;
//     cout << "Fayl nomini kiriting: ";
//     cin >> Faylnomi;

//     ifstream inputFile(Faylnomi.c_str());

//     if (!inputFile.is_open())
//     {
//         cout << "Xatolik: Fayl ochilmadi!" << endl;
//         return 1;
//     }

//     string faylnomi2;
//     cout << "Natijani saqlash uchun yangi fayl nomini kiriting: ";
//     cin >> faylnomi2;

//     ofstream outputFile(faylnomi2.c_str());

//     if (!outputFile.is_open())
//     {
//         cout << "Xatolik: Fayl yaratilmadi!" << endl;
//         inputFile.close();
//         return 1;
//     }

//     double number;
//     while (inputFile >> number)
//     {
//         double square = pow(number, 2);
//         double cube = pow(number, 3);
//         outputFile << "Son: " << number << ", Kvadrati: " << square << ", Kubi: " << cube << endl;
//     }

//     inputFile.close();
//     outputFile.close();

//     cout << "Natijalar yangi faylda saqlandi." << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct Shaxs
// {
//     string ism;
//     int yosh;
//     double ball;
// };

// int main()
// {
//     Shaxs odam1;
//     odam1.ism = "Ali Valiyev";
//     odam1.yosh = 25;
//     odam1.ball = 85.5;

//     cout << "Ism: " << odam1.ism << endl;
//     cout << "Yosh: " << odam1.yosh << endl;
//     cout << "Bahosi: " << odam1.ball << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// union Malumot
// {
//     int butun;
//     double onlik;
//     char belgi;
// };

// int main()
// {
//     Malumot qiymat;
//     qiymat.butun = 42;

//     cout << "Butun qiymati: " << qiymat.butun << endl;

//     qiymat.onlik = 3.14;

//     cout << "O'nlik qiymati: " << qiymat.onlik << endl;

//     qiymat.belgi = 'A';

//     cout << "Belgi qiymati: " << qiymat.belgi << endl;

//     return 0;
// }
