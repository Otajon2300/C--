// #include <iostream>
// #include <math.h>
// #include <iomanip>
// using namespace std;
// int main()
// {

//     const double A = M_PI / 8;
//     const double B = M_PI / 2;
//     int m = 10;

//     double h = (B - A) / m;
//     double x = A;

//     cout << "x\t\tF(x)" << endl;

//     while (x <= B)
//     {

//         double F_x = x*cos(1/x)+2;

//         cout << x << "\t" <<fixed << setprecision(6)<< F_x << endl;

//         x += h;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// unsigned long long factorial(int n)
// {
//     if (n <= 0)
//     {

//         return 1;
//     }
//     unsigned long long result = 1;
//     for (int i = 1; i <= n; ++i)
//     {
//         result *= i;
//     }
//     return result;
// }
// int main()
// {
//     double s = 0, s1 = 0, y, x = 0.1, h;
//     int i, n = 20;

//     h = (1 - 0.1) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + (pow(x,(2*n+1)))/(factorial(2*n+1));
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = (exp(x)-exp(-x))/2;
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= -0.1);
//     {
//         cout << "s = " << s << endl;
//     }
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// void vaqt(int T, int &H, int &M, int &S)
// {
//     H = T / 3600;
//     T %= 3600;
//     M = T / 60;
//     S = T % 60;
// }

// int main()
// {
//     int T;
//     int H, M, S;
//     cout << "T = ";
//     cin >> T;

//     vaqt(T, H, M, S);

//     cout << "Natija: " << setfill('0') << setw(2) << H << ":" << setw(2) << M << ":" << setw(2) << S << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// double h(double x)
// {
//     return 0.1;
// }

// double y(double a, double b, double x)
// {
//     if (x < cos(a))
//     {
//         return log(a) * x * exp(b * x) + sqrt(3.4 * pow(b, 2) * x);
//     }
//     else
//     {
//         return 1.4 * x - atan(pow(b, 2) * x);
//     }
// }

// int main()
// {
//     double a = 0.5;
//     double b = -1.3;
//     double x1 = 0.4;
//     double xn = 1.4;

//     for (double x = x1; x <= xn; x += h(x))
//     {
//         double result = y(a, b, x);
//         cout << "x = " << x << ", y = " << result << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y[7] = {-0.5, 3.4, 1.4, 0.35, -7.5, 1.2, 0.25};

//     for (int i = 0; i < 7; i++)
//     {
//         if (0 < y[i] && y[i] < 1)
//         {
//             cout << "Massiv elementi " << y[i] << " indeksi " << i << endl;
//         }
//     }
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int s = 0;

//     for (int i = -70; i <= 20; i++)
//     {
//         if (i % 2 == 0)
//         {
//             s += i;
//         }
//     }

//     cout << "Yig'indisi " << s << endl;
// }

////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float u;
//     float x = 0.3;

//     for (int p = 1; p <= 50; p++)
//     {
//         u = sin(p * x) - cos(p * x);
//         if (u > 0)
//         {
//             cout << u << " ";
//         }
//     }
// }

// #include <iostream>
// #include <ctime>
// using namespace std;

// int main()
// {
//     srand(time(0));
//     int N;

//     cout << "N = ";
//     cin >> N;

//     int X[N];
//     int Y[N];

//     int musbatYigindiX = 0;
//     int manfiyKopaytmaX = 1;

//     int musbatYigindiY = 0;
//     int manfiyKopaytmaY = 1;

//     for (int i = 0; i < N; i++)
//     {
//         X[i] = rand() % 200 - 100;
//         Y[i] = rand() % 200 - 100;
//     }

//     for (int i = 0; i < N; ++i)
//     {
//         if (X[i] > 0)
//         {
//             musbatYigindiX += X[i];
//         }
//         else
//         {
//             manfiyKopaytmaX *= X[i];
//         }

//         if (Y[i] > 0)
//         {
//             musbatYigindiY += Y[i];
//         }
//         else
//         {
//             manfiyKopaytmaY *= Y[i];
//         }
//     }

//     cout << "Musbat elementlar yig'indisi (X): " << musbatYigindiX << endl;
//     cout << "Manfiy elementlar ko'paytmasi (X): " << manfiyKopaytmaX << endl;

//     cout << "Musbat elementlar yig'indisi (Y): " << musbatYigindiY << endl;
//     cout << "Manfiy elementlar ko'paytmasi (Y): " << manfiyKopaytmaY << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     const int MAX_ROW = 3;
//     const int MAX_COL = 4;

//     int a[MAX_ROW][MAX_COL];
//     int S[MAX_ROW][MAX_COL];
//     int V[MAX_ROW][MAX_COL];

//     srand(time(0));
//     for (int i = 0; i < MAX_ROW; ++i)
//     {
//         for (int j = 0; j < MAX_COL; ++j)
//         {
//             a[i][j] = rand() % 2001 - 1000;
//         }
//     }

//     for (int i = 0; i < MAX_ROW; ++i)
//     {
//         for (int j = 0; j < MAX_COL; ++j)
//         {
//             if (a[i][j] > 0)
//             {
//                 S[i][j] = a[i][j];
//                 V[i][j] = 0;
//             }
//             else
//             {
//                 S[i][j] = 0;
//                 V[i][j] = a[i][j];
//             }
//         }
//     }

//     cout << "Asl massiv:" << endl;
//     for (int i = 0; i < MAX_ROW; ++i)
//     {
//         for (int j = 0; j < MAX_COL; ++j)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "Musbat elementlar massivi:" << endl;
//     for (int i = 0; i < MAX_ROW; ++i)
//     {
//         for (int j = 0; j < MAX_COL; ++j)
//         {
//             cout << S[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "Manfiy elementlar massivi:" << endl;
//     for (int i = 0; i < MAX_ROW; ++i)
//     {
//         for (int j = 0; j < MAX_COL; ++j)
//         {
//             cout << V[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a[11] = {1, 2, 3, 4, 5, 4, 9, 12, 8, 13, 17};

//     int b[11];

//     for (int i = 0; i < 11; i++)
//     {
//         b[i] = i * a[i];
//     }

//     cout << "a[] = ";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << a[i] << ' ';
//     }

//     cout << "\nb[] = ";
//     for (int i = 0; i < 11; i++)
//     {
//         cout << b[i] << ' ';
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     const int n = 3;
//     int matritsa[n][n];

//     cout << "Matritsa elementlarini kiriting:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "matritsa[" << i << "][" << j << "]: ";
//             cin >> matritsa[i][j];
//         }
//     }

//     int engKatta = matritsa[0][0];
//     int engKichik = matritsa[0][0];
//     int engKattaUstun = 0;
//     int engKichikSatr = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matritsa[i][j] > engKatta)
//             {
//                 engKatta = matritsa[i][j];
//                 engKattaUstun = j;
//             }
//             if (matritsa[i][j] < engKichik)
//             {
//                 engKichik = matritsa[i][j];
//                 engKichikSatr = i;
//             }
//         }
//     }

//     int kopaytma = engKatta * matritsa[engKichikSatr][engKattaUstun];

//     cout << "Eng katta element: " << engKatta << endl;
//     cout << "Eng kichik element: " << engKichik << endl;
//     cout << "Eng katta element joylashgan ustun: " << engKattaUstun << endl;
//     cout << "Eng kichik element joylashgan satr: " << engKichikSatr << endl;
//     cout << "Ko'paytma: " << kopaytma << endl;

//     return 0;
// }

////////////////////////////////////
// char turidagi A satrni har N ta soʻzdan keyin kelgan soʻzlarni oʻchiruvchi va ushbu soʻzlarni teskarisiga chiqaruvchi qoʻshadigan dastur tuzing.

// #include <iostream>
// #include <cstring>
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
//             i++;
//         }
//         int end_pos = i;

//         memmove(&a_str[start_pos], &a_str[end_pos + 1], strlen(&a_str[end_pos + 1]) + 1);

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

// String turidagi A satrda nechta tub uzunlikdagi soʻzlar borligini aniqlovchi dastur tuzing.

// #include <iostream>
// #include <string>
// #include <sstream>
// using namespace std;
// bool isPrime(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int countPrimeWords(const string &str)
// {
//     istringstream iss(str);
//     string word;
//     int count = 0;

//     while (iss >> word)
//     {
//         if (isPrime(word.length()))
//         {
//             count++;
//         }
//     }

//     return count;
// }

// int main()
// {
//     string inputString;
//     cout << "Satr kiriting: ";
//     getline(cin, inputString);

//     int primeWordCount = countPrimeWords(inputString);
//     cout << "Tub uzunlikdagi so'zlar soni: " << primeWordCount << endl;

//     return 0;
// }

// String turidagi A satrda har bir gapning birinchi soʻzlarini “bilmadim” soʻzi bilan almashtiruvchi dastur tuzing.

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {

//     cout << "Iltimos, matnni kiriting: ";
//     string A;
//     getline(cin, A);

//     size_t pozitsiya = A.find(' ');
//     if (pozitsiya != string::npos)
//     {
//         A.replace(0, pozitsiya, "bilmadim");
//         cout << "Yangi matn: " << A << endl;
//     }
//     else
//     {
//         cout << "Matnda kamida ikkita so'z bo'lishi kerak." << endl;
//     }

//     return 0;
// }

/////////////////////////////////////////////

// Matnli fayl berilgan. Matnning eng uzun bo’lgan birinchi so’zi chop qilinsin. So’z deb, probellar bilan chegaralangan yoki satrning boshi/oxiri bo’lgan belgilar to’plamiga aytiladi.

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <vector>
// using namespace std;
// int main()
// {

//     ifstream inputFile("matnli_fayl.txt");

//     if (!inputFile.is_open())
//     {
//         cerr << "Faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     string line;
//     string longestWord;

//     while (getline(inputFile, line))
//     {
//         istringstream iss(line);
//         string word;

//         while (iss >> word)
//         {

//             if (word.length() > longestWord.length())
//             {
//                 longestWord = word;
//             }
//         }
//     }

//     cout << "Eng uzun so'z: " << longestWord << endl;

//     inputFile.close();

//     return 0;
// }

// Haqiqiy sonlar fayli berilgan. Shu faylning birinchi lokal maksimumi topilsin. (lokal maksimum deb o’z qo’shnilaridan katta bo’lgan elementga aytiladi)

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {

//     const char *fayl_nomi = "haqiqiy_sonlar.txt";

//     ifstream fayl(fayl_nomi);

//     if (!fayl)
//     {
//         cerr << "Xatolik: Faylni ochib bo'lmadi." << endl;
//         return 1;
//     }

//     double old_value, current_value, next_value;
//     fayl >> old_value >> current_value >> next_value;

//     if (!fayl)
//     {
//         cerr << "Xatolik: Fayldan ma'lumot olishda xatolik." << endl;
//         return 1;
//     }

//     while (fayl >> next_value)
//     {
//         if (current_value > old_value && current_value > next_value)
//         {
//             cout << "Birinchi lokal maksimum: " << current_value << endl;
//             return 0;
//         }

//         old_value = current_value;
//         current_value = next_value;
//     }

//     cout << "Birinchi lokal maksimum topilmadi." << endl;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int binarQidiruv(int array[], int size, int qidirilayotganQiymat)
// {
//     int bosh = 0, oxirgi = size - 1;

//     while (bosh <= oxirgi)
//     {
//         int orta = bosh + (oxirgi - bosh) / 2;

//         if (array[orta] == qidirilayotganQiymat)
//             return orta;

//         if (array[orta] > qidirilayotganQiymat)
//             oxirgi = orta - 1;
//         else
//             bosh = orta + 1;
//     }

//     return -1;
// }

// int main()
// {
//     int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int size = sizeof(array) / sizeof(array[0]);

//     int qidirilayotganQiymat;
//     cout << "Qidirilayotgan qiymatni kiriting: ";
//     cin >> qidirilayotganQiymat;

//     int indeks = binarQidiruv(array, size, qidirilayotganQiymat);

//     if (indeks != -1)
//     {
//         cout << "Qiymat topildi. Indeks: " << indeks << endl;
//     }
//     else
//     {
//         cout << "Qiymat topilmadi." << endl;
//     }

//     return 0;
// }
