// Natural n soni va o‘zaro teng bo‘lmagan n ta butun sonlar ketma-ketligi berilgan. Bu ketma - ketlikning eng katta elementidan kichik bo‘lgan sonlarning eng kattasi topilsin.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int maxElement, secondMaxElement;

//     cout << "Sonlar ketma-ketligini kiriting n: ";
//     cin >> n;

//     cout << "Elementlarni kiriting:\n";
//     cin >> maxElement >> secondMaxElement;

//     if (secondMaxElement > maxElement)
//     {
//         int temp = maxElement;
//         maxElement = secondMaxElement;
//         secondMaxElement = temp;
//     }

//     for (int i = 2; i < n; ++i)
//     {
//         int currentElement;
//         cin >> currentElement;

//         if (currentElement > maxElement)
//         {
//             secondMaxElement = maxElement;
//             maxElement = currentElement;
//         }
//         else if (currentElement > secondMaxElement && currentElement != maxElement)
//         {
//             secondMaxElement = currentElement;
//         }
//     }

//     cout << "Ikkinchi eng katta element: " << secondMaxElement << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "n: ";
//     cin >> n;

//     int max1 = 0;
//     int max2 = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int son;
//         cout << i + 1 << "-sonni kiriting: ";
//         cin >> son;

//         if (son > max1)
//         {
//             max2 = max1;
//             max1 = son;
//         }
//         else if (son > max2)
//         {
//             max2 = son;
//         }
//     }

//     cout << "Ikkinchi eng katta son: " << max2 << endl;

//     return 0;
// }

// Haqiqiy a,b,z (a>b>0, z >0) sonlar va x1,x2,...,y1,y2,... ketma-ketliklar quyidagi
// qonuniyat bilan berilgan:
// x(1) = a, y(1) = b, x(k) = 1/2*(x(k-1) + y(k-1)), y(k) = sqrt(x(k-1)*y(k-1)) .
// Ketma-ketliklarning abs(x(n)-y(n))<z shartni qanoatlantiruvchi birinchi x(n) hadi
// topilsin.

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     float a, b, z;

//     cout << "a ni kiriting (a > b > 0): ";
//     cin >> a;

//     cout << "b ni kiriting (a > b > 0): ";
//     cin >> b;

//     cout << "z ni kiriting (z > 0): ";
//     cin >> z;

//     float x = a;
//     float y = b;

//     while (abs(x - y) >= z)
//     {
//         float x_temp = x;
//         float y_temp = y;

//         x = 0.5 * (x_temp + y_temp);
//         y = sqrt(x_temp * y_temp);
//     }

//     cout << "Birinchi x(n) = " << x << endl;

//     return 0;
// }

// Butun sonlar ketma-ketligi kiritiladi, 0 - ketma-ketlikning oxiri. Ketmaketlikdagi 7 ga karra va 5 ga karra bo’lmagan sonlar sonini va manfiy sonlar yig’indisini aniqlang.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     int a = 0;
//     int sum = 0;

//     cout << "Butun sonlarni kiritish: " << endl;

//     while (true)
//     {
//         cin >> number;

//         if (number == 0)
//         {
//             break;
//         }

//         else if (number % 7 == 0 && number % 5 != 0)
//         {
//             a++;
//         }
//         if (number < 0)
//         {
//             sum += number;
//         }
//     }

//     cout << "7 ga qoldiqsiz bo'linadigan va 5 ga qoldiqsiz bo'linmagan sonlar soni: " << a << endl;
//     cout << "Manfiy sonlar yig'indisi: " << sum << endl;

//     return 0;
// }

// Doiraning yuzini hisoblovchi funksiya hosil qiling. Bu funksiyayordamida 3 ta doira yuzini hisoblang.
// #include <iostream>
// #include <cmath>
// using namespace std;

// const float PI = 3.1415;

// float DoiraYuzi(float radius)
// {
//     return PI * pow(radius, 2);
// }

// int main()
// {
//     float radius1, radius2, radius3;

//     cout << "1-doira radiusini kiriting: ";
//     cin >> radius1;

//     cout << "2-doira radiusini kiriting: ";
//     cin >> radius2;

//     cout << "3-doira radiusini kiriting: ";
//     cin >> radius3;

//     float yuz1 = DoiraYuzi(radius1);
//     float yuz2 = DoiraYuzi(radius2);
//     float yuz3 = DoiraYuzi(radius3);

//     // Natijalarni chiqarish
//     cout << "1-doira yuzi: " << yuz1 << endl;
//     cout << "2-doira yuzi: " << yuz2 << endl;
//     cout << "3-doira yuzi: " << yuz3 << endl;

//     return 0;
// }

// n va m natural soni berilgan. Shu sonlar EKUBini topuvchi funksiyayarating. Ushbu funksiya yordamida a va a1, b va b1 sonlari uchunEKUB ni toping.

// #include <iostream>
// using namespace std;

// int EKUB(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main()
// {
//     int n, m;

//     cout << "n ni kiriting: ";
//     cin >> n;

//     cout << "m ni kiriting: ";
//     cin >> m;

//     int ekub_result = EKUB(n, m);

//     cout << "EKUB(" << n << ", " << m << ") = " << ekub_result << endl;

//     return 0;
// }

/////////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// class Shar
// {
// private:
//     float radius;

// public:
//     Shar(float r) : radius(r)
//     {
//         cout << "Shar yaratildi. Radius: " << radius << endl;
//     }

//     Shar(float r, bool calculateSurfaceArea) : radius(r)
//     {

//         if (calculateSurfaceArea)
//         {
//             float S = 4 * 3.14 * radius * radius;
//             cout << "Shar yon sirti yuzi: " << S << endl;
//         }
//     }

//     Shar(float r, bool calculateSurfaceArea, bool calculateVolume) : radius(r)
//     {

//         if (calculateSurfaceArea)
//         {
//             float S = 4 * 3.14 * radius * radius;
//             cout << "Shar yon sirti yuzi: " << S << endl;
//         }

//         if (calculateVolume)
//         {
//             float volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
//             cout << "Shar hajmi: " << volume << endl;
//         }
//     }
// };

// int main()
// {
//     float r;

//     cout << "Shar radiusini kitiring: ";
//     cin >> r;

//     Shar shar1(r);
//     Shar shar2(r, true);
//     Shar shar3(r, false, true);

//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// class Firmaning_xodimlari
// {
// public:
//     friend void print(Firmaning_xodimlari h);

//     char familiyasi[30];
//     char ismi[30];
//     int yoshi;
//     char jinsi[10];
//     char xarbiy_xizmatga_layoqatligi[20];
// };

// void print(Firmaning_xodimlari h)
// {
//     if ((strcmp(h.xarbiy_xizmatga_layoqatligi, "Layoqatli") == 0) && (h.yoshi < 22))
//     {
//         cout << "Eng yosh xodimning familiyasi: " << h.familiyasi << endl;
//     }
// }

// int main()
// {
//     Firmaning_xodimlari k, l;

//     cout << "Xodim familiyasi: ";
//     cin >> k.familiyasi;
//     cout << "Xodim ismi: ";
//     cin >> k.ismi;
//     cout << "Xodim yoshi: ";
//     cin >> k.yoshi;
//     cout << "Xarbiy xizmatga layoqatligi: ";
//     cin >> k.xarbiy_xizmatga_layoqatligi;

//     cout << "Xodim familiyasi: ";
//     cin >> l.familiyasi;
//     cout << "Xodim ismi: ";
//     cin >> l.ismi;
//     cout << "Xodim yoshi: ";
//     cin >> l.yoshi;
//     cout << "Xarbiy xizmatga layoqatligi: ";
//     cin >> l.xarbiy_xizmatga_layoqatligi;

//     print(k);
//     print(l);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char a[] = {'s', '.', 'a', '.', 'l', '.', 'o', '.', 'm', '.', '\n'};
//     int size = sizeof(a) / sizeof(a[0]);

//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] == '.')
//         {
//             cout << "...";
//         }
//         else
//         {
//             cout << a[i];
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char a[] = {'a', 'p', 'p', 'l', 'e', ' ', 'o', 'r', 'a', 'n', 'g', 'e'};
//     int size = sizeof(a) / sizeof(a[0]);

//     for (int i = 0; i < size; i++)
//     {
//         switch (a[i])
//         {
//         case 'a':
//             cout << "apple ";
//             break;
//         case 'o':
//             cout << "orange ";
//             break;
//         default:
//             cout << a[i];
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// char gammaShiftrol(char ch, int gamma)
// {
//     int yangi = (int)ch + gamma;

//     if (yangi > 255)
//     {
//         yangi = 127 + (yangi - 255 - 1);
//     }

//     return (char)yangi;
// }

// int main()
// {
//     char satr = 'A';
//     int gammaValue = 5;

//     char encryptedSymbol = gammaShiftrol(satr, gammaValue);

//     cout << "Asl simvol: " << satr << endl;
//     cout << "Gamma qiymati: " << gammaValue << endl;
//     cout << "Shiftrol natijasi: " << encryptedSymbol << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {

//     string text = "-+Abc-+Def-+Ghi-+";

//     int count = 0;
//     size_t pos = 0;

//     while ((pos = text.find("-+", pos)) != string::npos)
//     {
//         count++;
//         pos += 2;
//     }

//     cout << "Berilgan qatorda \"-+\" birlashmasi " << count << " marta ko'rsatilgan." << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// void teskariOqish(string &soz)
// {
//     size_t uzunlik = soz.length();
//     for (size_t i = 0; i < uzunlik / 2; ++i)
//     {
//         swap(soz[i], soz[uzunlik - i - 1]);
//     }
// }

// int main()
// {
//     string qator = "Berilgan qatordagi barcha so`zlarni teskariga o`girib chiqaring.";

//     size_t boshlanishi = 0;
//     size_t qatorUzunligi = qator.length();
//     while (boshlanishi < qatorUzunligi)
//     {
//         size_t sozBoshlanishi = qator.find_first_not_of(" ", boshlanishi);

//         size_t sozOxirgi = qator.find_first_of(" ", sozBoshlanishi);
//         if (sozOxirgi == string::npos)
//         {
//             sozOxirgi = qatorUzunligi;
//         }

//         string soz = qator.substr(sozBoshlanishi, sozOxirgi - sozBoshlanishi);
//         teskariOqish(soz);
//         cout << soz << " ";

//         boshlanishi = sozOxirgi + 1;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {

//     cout << "Matn kiriting: ";
//     string matn;
//     getline(cin, matn);

//     int probelSoni = 0;
//     for (char c : matn)
//     {
//         if (c == ' ')
//         {
//             probelSoni++;
//         }
//     }

//     for (char &c : matn)
//     {
//         if (probelSoni % 2 == 0)
//         {

//             if (c == ' ')
//             {
//                 c = 'H';
//             }
//         }
//         else
//         {

//             if (c == ' ')
//             {
//                 c = 'Z';
//             }
//         }
//     }

//     cout << "O'zgartirilgan matn: " << matn << endl;

//     return 0;
// }
