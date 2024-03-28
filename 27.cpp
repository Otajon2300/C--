// #include <iostream>
// using namespace std;

// string decToHexa(int n)
// {
//     string ans = "";

//     while (n != 0)
//     {

//         int rem = 0;

//         char ch;
//         rem = n % 16;

//         if (rem < 10)
//         {
//             ch = rem + 48;
//         }
//         else
//         {
//             ch = rem + 55;
//         }

//         ans += ch;
//         n = n / 16;
//     }

//     int i = 0, j = ans.size() - 1;
//     while (i <= j)
//     {
//         swap(ans[i], ans[j]);
//         i++;
//         j--;
//     }
//     return ans;
// }

// int main()
// {
//     int n;

//     cout << "O'nlik sanoq sistemasidagi son kiriting : ";
//     cin >> n;

//     cout << "O'n oltilik sanoq sistemasida : " << decToHexa(n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int minNumber = INT_MAX;
//     int number;
//     int n;

//     cout << "Nechta son kiritasiz : ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Son #" << i + 1 << ": ";
//         cin >> number;
//         if (number > 20 && number < minNumber)
//         {
//             minNumber = number;
//         }
//     }

//     if (minNumber == INT_MAX)
//     {
//         cout << "20 dan katta hech qanday son kiritilmagan." << endl;
//     }
//     else
//     {
//         cout << "20 dan katta sonlar orasidagi eng kichigi: " << minNumber << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// double yuzini_hisobla(double tomon)
// {
//     return tomon * tomon;
// }

// double perimetrini_hisobla(double tomon)
// {
//     return 4 * tomon;
// }

// int main()
// {
//     double tomon;
//     cout << "Kvadrat tomonini kiriting: ";
//     cin >> tomon;

//     double yuzi = yuzini_hisobla(tomon);
//     double perimetr = perimetrini_hisobla(tomon);

//     cout << "Kvadratning yuzi: " << yuzi << endl;
//     cout << "Kvadratning perimetri: " << perimetr << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// void Izdizlar(int a, int b, int c, double &x1, double &x2)
// {

//     double D = b * b - 4 * a * c;

//     if (D > 0)
//     {
//         x1 = (-b + sqrt(D)) / (2 * a);
//         x2 = (-b - sqrt(D)) / (2 * a);
//         cout << "Ildizlar k: 2" << endl;
//         cout << "x1 = " << x1 << endl;
//         cout << "x2 = " << x2 << endl;
//     }
//     else if (D == 0)
//     {
//         x1 = -b / (2 * a);
//         cout << "Ildizlar k: 1" << endl;
//         cout << "x1 = " << x1 << endl;
//     }
//     else
//     {
//         cout << "Ildizlar k: 0" << endl;
//     }
// }

// int main()
// {
//     int a, b, c;
//     double x1, x2;

//     cout << "Kvadrat tenglama ko'rsatkichi (a): ";
//     cin >> a;

//     cout << "Kvadrat tenglama o'rtachasi (b): ";
//     cin >> b;

//     cout << "Kvadrat tenglama constantasi (c): ";
//     cin >> c;

//     Izdizlar(a, b, c, x1, x2);

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// double calculate_a(int n, double z)
// {
//     if (n < 2)
//     {
//         cout << "n 2 dan katta yoki teng bo'lishi kerak" << endl;
//         return 0.0;
//     }

//     double a_prev = (1.0 - 1.0 / 2);
//     double a_current = a_prev;

//     for (int i = 2; i <= n; i++)
//     {
//         a_prev = a_current;
//         a_current *= (1.0 - 1.0 / (i + 1));

//         if (abs(a_current - a_prev) < z)
//         {
//             return a_current;
//         }
//     }

//     cout << "Berilgan shart bilan bunday (n) topilmadi." << endl;
//     return 0.0;
// }

// int main()
// {
//     int n;
//     double z;

//     cout << "n = ";
//     cin >> n;

//     cout << "z = ";
//     cin >> z;

//     double result = calculate_a(n, z);

//     if (result != 0.0)
//     {
//         cout << "Shartni qanoatlantiradigan birinchi a(n): " << result << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// n o’lchamga ega (n>0), haqiqiy turga tegishli a massivni o‘sish tartibida tartiblovchi SortArray(n,a) nomli void turidagi funksiya tasvirlansin. a massiv kiruvchi va chiquvchi parametr hisoblanadi. Bu funksiya yordamida na, nb, nc o’lchamga ega a, b, c massivlar tartiblansin.

// #include <iostream>

// using namespace std;
// void sortArray(int n, float a[])
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 float temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
// }
// void kiritish(int n, float a[])
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
// }
// void chiqarish(int n, float a[])
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Massiv o'lchamini kiriting: ";
//     cin >> n;

//     float a[n], b[n], c[n];

//     cout << "A massivni kiriting: ";
//     kiritish(n, a);
//     cout << "B massivni kiriting: ";
//     kiritish(n, b);
//     cout << "C massivni kiriting: ";
//     kiritish(n, c);

//     sortArray(n, a);
//     sortArray(n, b);
//     sortArray(n, c);

//     cout << "Tartiblangandan so'ng" << endl;
//     cout << "\nA massivi: ";
//     chiqarish(n, a);

//     cout << "\nB massivi: ";
//     chiqarish(n, b);

//     cout << "\nC massivi: ";
//     chiqarish(n, c);
//     return 0;
// }

//////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {
//     float y[7] = {-0.5, 3.4, 1.4, 0.35, -7.5, 1.2, 0.25};

//     cout << "y[]=";
//     for (int i = 0; i < 7; i++)
//     {
//         cout << y[i] << " ";
//     }

//     cout << "\n0<y[i]<1=";
//     for (int i = 0; i < 7; i++)
//     {
//         if (0 < y[i] < 1)
//         {
//             cout << y[i] << " ";
//         }
//     }
// }

// X(N) biror to’g’ri chiziqqa tegishli bo’lgan nuqtalar koordinatalar to’plamidan iborat massiv bo’lsin. Shu massivga tegishli bo’lgan, qaysi ikki nuqta orasidagi masofa eng katta ekanligini aniqlang.
// #include <iostream>
// #include <cmath>

// using namespace std;

// double masofa(int x1, int y1, int x2, int y2)
// {
//     return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
// }

// int main()
// {
//     const int N = 5;
//     int X[N][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}}; // Massiv
//     double engKattaMasofa = 0.0;

//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = i + 1; j < N; ++j)
//         {
//             double currentMasofa = masofa(X[i][0], X[i][1], X[j][0], X[j][1]);

//             if (currentMasofa > engKattaMasofa)
//             {
//                 engKattaMasofa = currentMasofa;
//             }
//         }
//     }

//     cout << "Eng katta masofa: " << engKattaMasofa << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {

//     int n;
//     int m;

//     cout<<"n = ";
//     cin>>n;
//     cout<<"m = ";
//     cin>>m;

//     int a[n][m];
//     srand(time(0));

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             a[i][j] = rand() % 20001 - 10000;
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "\nBirinchi musbat elementlar: ";
//     bool foundPositive = false;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] > 0)
//             {
//                 cout << a[i][j] << " ";
//                 foundPositive = true;
//                 break;
//             }
//         }
//         if (foundPositive)
//         {
//             break;
//         }
//     }

//     cout << endl
//               << "Manfiy elementlar: ";

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] < 0)
//             {
//                 cout << a[i][j] << " ";
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <ctime>
// using namespace std;
// int sum(int a[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             sum += a[i];
//         }
//     }

//     return sum;
// }
// int min(int a[], int n)
// {

//     int min = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     srand(time(0));
//     int n;

//     cout << "n = ";
//     cin >> n;

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//     }

//     cout << "a[]=";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     cout << "Juft elementlari yig'indisi : " << sum(a, n) << endl;
//     cout << "Massivning eng kichik elementi : " << min(a, n) << endl;
// }

/////////////////////////////////////////////////////////////////////

// char turidagi A satrni har N- soʻzini katta harfga oʻzgartiruvchi va ushbu soʻzlarni teskari holatga oʻzagartiruvchi dastur tuzing.

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int MAX_LENGTH = 100;
//     char a_str[MAX_LENGTH];

//     cout << "A satrni kiriting: ";
//     cin.getline(a_str, MAX_LENGTH);

//     cout << "N ni kiriting: ";
//     int n;
//     cin >> n;

//     int word_count = 0;
//     int i = 0;
//     while (a_str[i] != '\0')
//     {

//         while (a_str[i] == ' ')
//         {
//             i++;
//         }

//         if (a_str[i] != '\0')
//         {
//             word_count++;
//         }

//         if (word_count == n)
//         {
//             break;
//         }

//         while (a_str[i] != ' ' && a_str[i] != '\0')
//         {
//             i++;
//         }
//     }

//     if (word_count == n)
//     {
//         int start_pos = i;
//         while (a_str[i] != ' ' && a_str[i] != '\0')
//         {
//             a_str[i] = toupper(a_str[i]);
//             i++;
//         }
//         int end_pos = i;

//         cout << "Natija: " << a_str << endl;

//         cout << "Teskari: ";
//         for (int j = end_pos - 1; j >= start_pos; j--)
//         {
//             cout << a_str[j];
//         }
//         cout << endl;
//     }
//     else
//     {
//         cout << "Satrda yetarli so'zlar yo'q." << endl;
//     }

//     return 0;
// }

// String turidagi A satrning toq uzunlikdagi soʻzlarini B satrga, soʻng juft uzunlikdagi soʻzlarni joylashtiruvchi dastur tuzing.
// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// int main()
// {
//     string A, B;

//     cout << "A satrini kiriting: ";
//     getline(cin, A);

//     istringstream iss(A);
//     string word;

//     while (iss >> word)
//     {
//         if (word.length() % 2 == 1)
//         {
//             B += word;
//             B += " ";
//         }
//     }

//     iss.clear();
//     iss.str(A);

//     while (iss >> word)
//     {
//         if (word.length() % 2 == 0)
//         {
//             B += word;
//             B += " ";
//         }
//     }

//     B.erase(B.length() - 1, 1);

//     cout << "Natija (B satr): " << B << endl;

//     return 0;
// }

// String turidagi N ta soʻz berilgan. Ushbu soʻzlarning eng uzunini aniqlovchi dastur tuzing.

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;
// int main()
// {

//     int N;
//     cout << "N ni kiriting: ";
//     cin >> N;

//     cin.ignore();
//     string longestWord, currentWord;

//     for (int i = 0; i < N; ++i)
//     {
//         cout << "So'z #" << i + 1 << " : ";
//         cin >> currentWord;

//         if (currentWord.length() > longestWord.length())
//         {
//             longestWord = currentWord;
//         }
//     }

//     // Eng uzun soʻzni chiqarish
//     cout << "Eng uzun so'z: " << longestWord << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// void SortArray(int n, int a[])
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[j] < a[i])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> n;

//     int a[n];
//     int b[n];
//     int c[n];

//     srand(time(0));

//     cout << "a[]: ";
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = rand() % 100;
//         cout << a[i] << " ";
//     }

//     cout << "\n";

//     cout << "b[]: ";
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = rand() % 100;
//         cout << b[i] << " ";
//     }

//     cout << "\n";

//     cout << "c[]: ";
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = rand() % 100;
//         cout << c[i] << " ";
//     }

//     cout << "\n";

//     SortArray(n, a);
//     SortArray(n, b);
//     SortArray(n, c);

//     cout << "Tartiblangan massiv a[]:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

//     cout << "\nTartiblangan massiv b[]:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << b[i] << " ";
//     }

//     cout << "\nTartiblangan massiv a[]:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << c[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int m;

//     cout << "n=";
//     cin >> n;
//     cout << "m = ";
//     cin >> m;

//     int S[n][m];
//     cout << "S[][]:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             S[i][j] = rand() % 100;
//             cout << S[i][j] << " ";
//         }
//         cout << endl;
//     }

//     int k = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             int element = S[i][j];
//             bool maxsus = true;

//             for (int k = 0; k < m; ++k)
//             {
//                 if (S[i][k] > element)
//                 {
//                     maxsus = false;
//                     break;
//                 }
//             }

//             if (maxsus)
//             {
//                 for (int k = 0; k < n; ++k)
//                 {
//                     if (S[k][j] < element)
//                     {
//                         maxsus = false;
//                         break;
//                     }
//                 }
//             }

//             if (maxsus)
//             {
//                 k++;
//                 cout << "\nMaxsus element: " << element << " (qator: " << i << ", ustun: " << j << ")\n";
//             }
//         }
//     }

//     cout << "\nMaxsus elementlar k: " << k << endl;

//     return 0;
// }

// #include <iostream>

// int main() {
//     // Satrni olish
//     string satr;
//     cout << "Satrni kiriting: ";
//     getline(cin, satr);

//     // A massivini e'lon qilish
//     const int MAX_SIZE = satr.length();
//     unsigned char A[MAX_SIZE];

//     // Satrdagi harflarni A massiviga joylash
//     for (int i = 0; i < MAX_SIZE; i++) {
//         A[i] = static_cast<unsigned char>(satr[i]);
//     }

//     // B va C massivlarini e'lon qilish
//     unsigned char B[MAX_SIZE/2 + 1], C[MAX_SIZE/2 + 1];

//     // A massivini chetga bo'lib B va C massivlarga joylash
//     int indexB = 0, indexC = 0;
//     for (int i = 0; i < MAX_SIZE; i++) {
//         if (i % 2 == 0) {
//             B[indexB++] = A[i];
//         } else {
//             C[indexC++] = A[i];
//         }
//     }

//     // Natijalarni chiqarish
//     cout << "A massiv: ";
//     for (int i = 0; i < MAX_SIZE; i++) {
//         cout << static_cast<int>(A[i]) << " ";
//     }

//     cout << "\nB massiv (toq indeksli elementlar): ";
//     for (int i = 0; i < indexB; i++) {
//         cout << static_cast<int>(B[i]) << " ";
//     }

//     cout << "\nC massiv (juft indeksli elementlar): ";
//     for (int i = 0; i < indexC; i++) {
//         cout << static_cast<int>(C[i]) << " ";
//     }

//     cout << endl;

//     return 0;
// }

// String turidagi Satr berilgan. Undagi elementlarni byte turidagi A massivga joylashtirib, toq elementlarini B massivga, juftlarni C massivga joylashtiruvchi dastur tuzing.

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {

//     string Satr = "String turidagi Satr berilgan.";

//     int length = Satr.length();

//     unsigned char *A = new unsigned char[length + 1];
//     unsigned char *B = new unsigned char[length + 1];
//     unsigned char *C = new unsigned char[length + 1];

//     strcpy(reinterpret_cast<char *>(A), Satr.c_str());

//     int indexB = 0;
//     int indexC = 0;

//     for (int i = 0; i < length; i++)
//     {
//         if (i % 2 == 0)
//         {

//             C[indexC++] = A[i];
//         }
//         else
//         {

//             B[indexB++] = A[i];
//         }
//     }

//     A[length] = '\0';
//     B[indexB] = '\0';
//     C[indexC] = '\0';

//     cout << "A massiv: " << reinterpret_cast<char *>(A) << endl;
//     cout << "B massiv: " << reinterpret_cast<char *>(B) << endl;
//     cout << "C massiv: " << reinterpret_cast<char *>(C) << endl;

//     delete[] A;
//     delete[] B;
//     delete[] C;

//     return 0;
// }

// Avtomobillar haqida, String turida ma’lumotlar berilgan(class Avto). Ixtiyoriy avtomobilni 6 ta parametri boʻyicha qidirib topuvchi dastur tuzing.
// #include <iostream>
// #include <string>

// using namespace std;

// class Avto
// {
// public:
//     string nomi;
//     string modeli;
//     int yili;
//     string rangi;
//     double narxi;
//     double uzunligi;

//     void printInfo()
//     {
//         cout << "Nomi: " << nomi << endl;
//         cout << "Modeli: " << modeli << endl;
//         cout << "Yili: " << yili << endl;
//         cout << "Rangi: " << rangi << endl;
//         cout << "Narxi: $" << narxi << endl;
//         cout << "Uzunligi: " << uzunligi << " metr" << endl;
//         cout << "------------------------" << endl;
//     }
// };

// int main()
// {
//     const int avtoCount = 3;

//     Avto avtoArray[avtoCount] = {
//         {"Toyota", "Camry", 2022, "Qora", 25000.0, 4.5},
//         {"Chevrolet", "Malibu", 2023, "Oq", 22000.0, 4.7},
//         {"BMW", "X5", 2022, "Ko'k", 60000.0, 4.9}};

//     string qidirilayotganModel;
//     cout << "Qidirayotgan avtomobil modelini kiriting: ";
//     cin >> qidirilayotganModel;

//     bool topildi = false;
//     for (int i = 0; i < avtoCount; ++i)
//     {
//         if (avtoArray[i].modeli == qidirilayotganModel)
//         {
//             avtoArray[i].printInfo();
//             topildi = true;
//             break;
//         }
//     }

//     if (!topildi)
//     {
//         cout << "Avtomobil topilmadi!" << endl;
//     }

//     return 0;
// }
