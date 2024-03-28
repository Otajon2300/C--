// Matnli fayl berilgan. Undagi har bir uchragan kichik lotin harflarining uchrashlar miqdori sanalsin va tarkibi quyidagi ko’rinishda bo’lgan matnli fayl hosil qilinsin "<harf>-<uchrashlar soni>"(masalan, "a-25"). Matnda uchramagan harflar hisobga olinmasin. Satrlar kodi bo’yicha o’sish tartibida joylashsin

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {

//     ifstream inputFile("matn.txt");

//     if (!inputFile.is_open())
//     {
//         cout << "Faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     const int harflar_soni = 26;
//     int harflarUchramalar[harflar_soni] = {0};

//     string line;
//     while (getline(inputFile, line))
//     {
//         for (char harf : line)
//         {
//             if (isalpha(harf) && islower(harf))
//             {
//                 harflarUchramalar[harf - 'a']++;
//             }
//         }
//     }

//     inputFile.close();

//     ofstream outputFile("natija.txt");
//     if (!outputFile.is_open())
//     {
//         cout << "Natijalarni saqlash uchun faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < harflar_soni; ++i)
//     {
//         char harf = static_cast<char>('a' + i);
//         if (harflarUchramalar[i] > 0)
//         {
//             outputFile << harf << "-" << harflarUchramalar[i] << endl;
//         }
//     }

//     outputFile.close();

//     cout << "Natijalar faylga saqlandi: natija.txt" << endl;

//     return 0;
// }

// Tarkibi quyi uchburchakli matritsaning faqat noldan farqli elementlaridan iborat bo’lgan haqiqiy sonlar fayli berilgan. Yangi fayl hosil qilinsin va u berilgan matritsaning barcha elementlarini saqlasin.

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main()
// {
//     const char inputFileName[] = "matrix_elements.txt";
//     const char outputFileName[] = "non_zero_elements.bin";

//     ifstream inputFile(inputFileName, ios::in | ios::binary);
//     if (!inputFile)
//     {
//         cout << "Faylni ochishda xatolik!\n";
//         return 1;
//     }

//     ofstream outputFile(outputFileName, ios::out | ios::binary);
//     if (!outputFile)
//     {
//         cout << "Faylni yaratishda xatolik!\n";
//         return 1;
//     }

//     int element;
//     int maxElements = 100;
//     int elements[100];
//     int count = 0;

//     while (inputFile.read(reinterpret_cast<char *>(&element), sizeof(int)) && count < maxElements)
//     {
//         elements[count] = element;
//         count++;
//     }

//     inputFile.close();

//     for (int i = 0; i < count; i++)
//     {
//         if (elements[i] != 0)
//         {
//             outputFile.write(reinterpret_cast<char *>(&elements[i]), sizeof(int));
//         }
//     }

//     outputFile.close();

//     cout << "Binar fayl yaratildi: " << outputFileName << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
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

//     int yigindi = 0;
//     string soz;
//     while (oqishFayli >> soz)
//     {
//         istringstream iss(soz);
//         int son;
//         while (iss >> son)
//         {
//             yigindi += son;
//         }
//     }

//     oqishFayli.close();

//     cout << "Fayldagi sonlarning yig'indisi: " << yigindi << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main()
// {

//     ifstream input_file("input.txt");
//     if (!input_file.is_open())
//     {
//         cout << "Xatolik: Kirish faylini ochib bo'lmadi" << endl;
//         return 1;
//     }

//     ofstream output_file("output.txt");
//     if (!output_file.is_open())
//     {
//         cout << "Xatolik: Chiqish faylini ochib bo'lmadi" << endl;
//         return 1;
//     }

//     long long a, b;
//     long long natija;

//     input_file >> a >> b;

//     input_file.close();

//     natija = a + b;

//     output_file << natija << endl;

//     output_file.close();

//     cout << "Yig'indi output.txt fayliga yozildi" << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
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

//     oqishFayli.close();

//     size_t lastSpace = faylSatr.find_last_of(" ");
//     if (lastSpace != string::npos)
//     {
//         faylSatr = faylSatr.substr(0, lastSpace);
//     }

//     cout << "Fayldagi satr (oxirgi so'z ochirilgan): " << faylSatr << endl;

//     return 0;
// }

// Butun sonlar ketma-ketligi kiritiladi, 0 - ketma-ketlikning oxiri. Ketma-ketlikda uchta juft manfiy sonlar mavjudligini aniqlang.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int count = 0;
//     int birinchison = 0, ikkinchison = 0, uchinchison = 0;

//     while (true)
//     {
//         int num;
//         cout << "Son kiriting (0 - ketma-ketlikni to'xtatadi): ";
//         cin >> num;

//         if (num == 0)
//         {
//             break;
//         }

//         if (num < 0)
//         {
//             if (num % 2 == 0)
//             {
//                 if (birinchison == 0)
//                     birinchison = num;
//                 else if (ikkinchison == 0)
//                     ikkinchison = num;
//                 else if (uchinchison == 0)
//                     uchinchison = num;
//             }
//         }
//     }

//     cout << "Juft manfiy sonlar: ";
//     if (birinchison != 0)
//         cout << birinchison << " ";
//     if (ikkinchison != 0)
//         cout << ikkinchison << " ";
//     if (uchinchison != 0)
//         cout << uchinchison << " ";
//     cout << endl;

//     return 0;
// }

// 0 dan 15 gacha bo‘lgan sonlar ikkilik ko‘rinishida chop qilinsin.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int son = 0;
//     while (son <= 15)
//     {
//         cout << son << " in ikkilik sanoq sistemasida: ";

//         int n = son;
//         int ikkilik[4];
//         for (int i = 3; i >= 0; i--)
//         {
//             ikkilik[i] = n % 2;
//             n /= 2;
//         }

//         for (int i = 0; i < 4; i++)
//         {
//             cout << ikkilik[i];
//         }
//         cout << endl;

//         son++;
//     }
//     return 0;
// }

// To’g’ri to’rtburchakning yuzasini topadigan funksiya yarating. Ushbufunksiya yordamida a va b, a1 va b1 tomonga ega bo’lgan to’g’rito’rtburchakning yuzasini toping.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int yuza(int a, int b)
// {
//     int S = 0;
//     S = a * b;

//     return S;
// }
// int main()
// {
//     int a, b;
//     int a1, b1;
//     int S;
//     int S1;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "a1=";
//     cin >> a1;
//     cout << "b1=";
//     cin >> b1;

//     S = yuza(a, b);
//     S1 = yuza(a1, b1);

//     cout << a << " tomon va " << b << " tomonli to'g'ri to'rtburchakning yuzasi S=" << S << endl;
//     cout << a1 << " tomon va " << b1 << " tomonli to'g'ri to'rtburchakning yuzasi S=" << S1 << endl;
// }

// Haqiqiy sonning ishorasini aniqlovchi ishora nomli funksiya hosilqiling. Funksiya argumenti noldan kichik bo’lsa -1; noldan kattabo’lsa 1; nolga teng bo’lsa 0 qiymat qaytarsin. Haqiqiy a va b sonlariuchun ishora(a)+ishora(b) ifodasi hisoblang.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int ishora(int a)
// {
//     if (a < 0)
//     {
//         return -1;
//     }
//     else if (a > 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int a;
//     int b;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;

//     cout << "Natija" << ishora(a) + ishora(b) << endl;
// }

////////////////////////////////////////////////////////////

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     float x = 0.01655;
//     float y = -2.75;
//     float z = 0.15;
//     float B;

//     B = sqrt((10 * (pow(x, 0.333) + pow(x, (y + 2))) * (pow(asin(z), 2.0) - abs(x - y))));

//     cout << "B = " << fixed << setprecision(3) << B << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c, x;
//     float Z;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;
//     cout << "x = ";
//     cin >> x;

//     if (a < 9)
//     {
//         Z = (a * x * x) / (b - 1);
//     }
//     else
//     {
//         Z = pow((a + 1), 3) + c * x * x * x;
//     }

//     cout << "Z = " << fixed << setprecision(3) << Z << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int birlik;
//     double uzunlik;

//     cout << "Uzunlik birligini tanlang:\n";
//     cout << "1 - Desimetr\n";
//     cout << "2 - Kilometr\n";
//     cout << "3 - Metr\n";
//     cout << "4 - Millimetr\n";
//     cout << "5 - Santimetr\n";
//     cout << "Tanlangan uzunlik birligi: ";
//     cin >> birlik;

//     cout << "Kesma uzunligi ni kiriting: ";
//     cin >> uzunlik;

//     double metrlar;
//     switch (birlik)
//     {
//     case 1:
//         metrlar = uzunlik * 0.1;
//         break;
//     case 2:
//         metrlar = uzunlik * 1000;
//         break;
//     case 3:
//         metrlar = uzunlik;
//         break;
//     case 4:
//         metrlar = uzunlik * 0.001;
//         break;
//     case 5:
//         metrlar = uzunlik * 0.01;
//         break;
//     default:
//         cout << "Noto'g'ri uzunlik birligi kiritildi!" << endl;
//         return 1;
//     }

//     cout << "Kesma uzunligi " << metrlar << " metr." << endl;

//     return 0;
// }

///////////////////////////////////////////////////////////////
// massivning eng kichik elementi va uning indeksini aniqlash
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int A[8] = {3, -7, 8, 10, -75, 128, 7, 10};
//     int min = A[0];
//     int indeksi = 0;

//     cout << "Massiv elementlari:";
//     for (int i = 0; i < 8; i++)
//     {
//         cout << A[i] << " ";
//         if (A[i] < min)
//         {
//             min = A[i];
//             indeksi = i;
//         }
//     }
//     cout << "\nMassivning eng kichik elementi: " << min << "\n Massivning eng kichik elementi indeksi: " << indeksi << endl;
// }

// H(N) massivining o‘rta arifmetik qiymatidan kichik bo‘lgan elementlarining ko‘paytmasini toping.
// #include <iostream>
// #include <ctime>
// using namespace std;

// int main()
// {

//     srand(time(0));
//     int n;
//     int sum = 0;
//     cout << "n = ";
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     float orta_arifmetik = sum / n;

//     double k = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < orta_arifmetik)
//         {
//             k *= a[i];
//         }
//     }

//     cout << "Massivning o'rta arifmetik qiymatidan kichik bo'lgan elementlarining ko'paytmasi: " << k << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <ctime>
// using namespace std;

// int main()
// {

//     srand(time(0));
//     int X[25];
//     int Y[5];
//     int S = 0;

//     cout << "X[]=";
//     for (int i = 1; i <= 25; i++)
//     {
//         X[i] = rand() % 100;
//         cout << X[i] << " ";
//         for (int j = 1; j <= 5; j++)
//         {
//             if (pow(j, 2) == i)
//             {
//                 Y[j] = X[i];
//             }
//         }
//     }
//     cout << endl;
//     cout << "Y[]=";
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << Y[i] << " ";
//         S += Y[i];
//     }
//     cout << endl;
//     cout << "S = " << S << endl;
// }

// int k, S[n][m];S matritsaning ”maxsus” elementlar soni - k aniqlansin.Element ”maxsus” deyiladi, agar u o‘zi joylashgan ustundagi boshqa elementlar yig‘indisidan katta va o‘zi joylashgan satrda chapdagi elementlardan katta, o‘ngdagilaridan esa kichik bo‘lsa.

// #include <iostream>
// #include <math.h>
// #include <ctime>
// using namespace std;

// int main()
// {
// 	srand(time(0));
//     int n, m, k = 0;

//     cout << "Matritsa o'lchamini kiriting: ";
//     cout << "n = ";
//     cin >> n;
//     cout << "m = ";
//     cin >> m;

//     int S[n][m];

//     cout << "Matritsa elementlari:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             S[i][j]=rand() % 100;
//             cout<<S[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             bool maxsus_son = true;

//             int sum_above = 0;
//             for (int k = i - 1; k >= 0; --k)
//             {
//                 sum_above += S[k][j];
//             }

//             int sum_left = 0;
//             for (int k = j - 1; k >= 0; --k)
//             {
//                 sum_left += S[i][k];
//             }

//             if (S[i][j] <= sum_above || S[i][j] <= sum_left)
//             {
//                 maxsus_son = false;
//             }

//             if (maxsus_son)
//             {
//                 k++;
//             }
//         }
//     }

//     cout << "Matritsa maxsus elementlar soni: " << k << endl;

//     return 0;
// }
