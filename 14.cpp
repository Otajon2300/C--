// #include <iostream>
// using namespace std;
// void Chorak(int x, int y)
// {
//     if (x > 0 && y > 0)
//     {
//         cout << "Berilgan nuqta I chorakda yotadi.";
//     }
//     else if (x < 0 && y > 0)
//     {
//         cout << "Berilgan nuqta II chorakda yotadi.";
//     }
//     else if (x < 0 && y < 0)
//     {
//         cout << "Berilgan nuqta III chorakda yotadi.";
//     }
//     else if (x > 0 && y < 0)
//     {
//         cout << "Berilgan nuqta IV chorakda yotadi.";
//     }
// }
// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     Chorak(x, y);
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a[6] = {5, 9, -1, -8, 3, -6};
//     float b[6] = {-3.4, 5, 7, 6.8, 9.3, 1.2};
//     float c[6];

//     for (int i = 0; i < 6; i++)
//     {
//         c[i] = (a[i] - b[i]) / (a[i] * b[i]);
//     }

//     cout << "a[]=";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a[i] << " ";
//     }

//     cout << "\nb[]=";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << b[i] << " ";
//     }

//     cout << "\nc[]=";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << c[i] << " ";
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// bool tubSon(int n) {
//     if (n <= 1) {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(n); ++i) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// void generatsiya(int *a, int *b, int *c, int size) {
//     int index_b = 0;
//     int index_c = 0;

//     for (int i = 2; i <= size * 2; ++i) {
//         if (tubSon(i)) {
//             a[index_b++] = i;
//         }
//     }

//     for (int i = 0; i < index_b; ++i) {
//         b[0] += a[i];
//     }

//     for (int i = 0; i < index_b; ++i) {
//         if (i % 2 == 0) {
//             c[0] += a[i];
//         }
//     }
// }

// void massivniChiqar(int *arr, int size) {
//     cout << arr[0] << endl;
// }

// int main() {
//     const int size = 10;

//     int *a = new int[size * 2];
//     int *b = new int[1];
//     int *c = new int[1];

//     generatsiya(a, b, c, size);

//     cout << "a) Tub sonlar: ";
//     massivniChiqar(a, size * 2);

//     cout << "b) Ustundagi tub sonlar yig'indisi: ";
//     massivniChiqar(b, 1);

//     cout << "c) Pastdagi tub sonlar yig'indisi: ";
//     massivniChiqar(c, 1);

//     delete[] a;
//     delete[] b;
//     delete[] c;
//     return 0;
// }

// X(N) massivi berilgan. Uning elementlarni teskari tartibda joylashtiring.
// Massivning toq indeksli elementlarining ko„paytmasini hisoblang.

// #include <iostream>
// #include <math.h>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     int n;

//     cout << "n=";
//     cin >> n;

//     int X[n];
//     int k = 1;

//     for (int i = 0; i < n; i++)
//     {
//         X[i] = rand() % 100;
//     }

//     cout << "Massiv X[N]=";
//     for (int i = 0; i < n; i++)
//     {
//         cout << X[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n / 2; ++i)
//     {
//         int temp = X[i];
//         X[i] = X[n - i - 1];
//         X[n - i - 1] = temp;
//     }

//     cout << "Teskari Massiv X[N]=";
//     for (int i = 0; i < n; i++)
//     {
//         cout << X[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < n; i += 2)
//     {
//         k *= X[i];
//     }

//     cout << "Massivning toq indeksli elementlarining ko'paytmasi : " << k << endl;
// }

// 14. a[n][m] massiv elementlarini [-1000; 1000] oraliqdagi tasodifiy sonlar bilan to'ldiring.
// Massivning eng oxirgi musbat elementining nomerini aniqlang va chiqaring

// #include <iostream>
// #include <ctime>
// #include <cstdlib>
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
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             a[i][j] = rand() % 2001 - 1000;
//         }
//     }

//     cout << "Tasodifiy sonlar bilan to'ldirilgan massiv:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     int son = -1;
//     int rowIdx = -1, colIdx = -1;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             if (a[i][j] > 0 && a[i][j] > son)
//             {
//                 son = a[i][j];
//                 rowIdx = i;
//                 colIdx = j;
//             }
//         }
//     }

//     if (rowIdx != -1 && colIdx != -1)
//     {
//         cout << "Eng oxirgi musbat element: " << son << endl;
//         cout << "Indeks: [" << rowIdx << "][" << colIdx << "]" << endl;
//     }
//     else
//     {
//         cout << "Massivda musbat element topilmadi." << endl;
//     }

//     return 0;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int R = 1; R <= 19; R++)
//     {
//         y += (pow(R, 2.0) + 14) / sqrt(pow(3, -R) + pow(R, 3.0));
//     }

//     cout << "Natija : " << y << endl;
// }

// // b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;
//     int b;

//     cout << "b = ";
//     cin >> b;

//     for (int n = 1; n <= 14; n++)
//     {
//         y *= (n + b) / (n + 1 / n);
//     }

//     cout << "Natija : " << y << endl;
// }

// // c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 6; i++)
//     {
//         double a = 0;

//         for (int m = 1; m <= 14; m++)
//         {
//             a += log((pow((pow(m, 2.0) + exp(m - 1)), 0.33)) / (pow(i, 2.0) + pow(2, (i - m))));
//         }
//         y += a;
//     }

//     cout << "Natija : " << y << endl;
// }

///////////////////////////////////////////////

// #include <iostream>
// #include <ctime>
// #include <cmath>

// using namespace std;

// int main()
// {
//     srand(time(0));

//     int k;

//     cout << "K = ";
//     cin >> k;

//     int Z[k];

//     // Fill Z array with random values
//     for (int i = 0; i < k; i++)
//     {
//         Z[i] = rand() % 100;
//     }

//     // Find the maximum and minimum elements in Z
//     int maxElement = Z[0];
//     int minElement = Z[0];

//     for (int i = 1; i < k; i++)
//     {
//         if (Z[i] > maxElement)
//         {
//             maxElement = Z[i];
//         }

//         if (Z[i] < minElement)
//         {
//             minElement = Z[i];
//         }
//     }

//     // Create X array without the maximum and minimum elements
//     int X[k - 2];
//     int xIndex = 0;

//     for (int i = 0; i < k; i++)
//     {
//         if (Z[i] != maxElement && Z[i] != minElement)
//         {
//             X[xIndex] = Z[i];
//             xIndex++;
//         }
//     }

//     // Calculate the geometric mean of elements in X
//     double geometricMean = 1.0;
//     for (int i = 0; i < k - 2; i++)
//     {
//         geometricMean *= X[i];
//     }

//     geometricMean = pow(geometricMean, 1.0 / (k - 2));

//     // Count the elements in X smaller than the geometric mean
//     int countSmaller = 0;
//     for (int i = 0; i < k - 2; i++)
//     {
//         if (X[i] < geometricMean)
//         {
//             countSmaller++;
//         }
//     }

//     // Display the elements of Z and X
//     cout << "Z[]: ";
//     for (int i = 0; i < k; i++)
//     {
//         cout << Z[i] << " ";
//     }

//     cout << endl;

//     cout << "X[]: ";
//     for (int i = 0; i < k - 2; i++)
//     {
//         cout << X[i] << " ";
//     }

//     cout << endl;

//     cout << "X o'rta geometrik : " << geometricMean << endl;
//     cout << "X massivining o'rta geometrik qiymatidan kichik bo'lgan elementlarining soni: " << countSmaller << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Matritsa o'lchamini kiriting (n): ";
//     cin >> n;

//     float A[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             A[i][j] = rand() % 100;
//         }
//     }

//     float b[n];
//     cout << "b[] kiriting:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "b[" << i << "]: ";
//         cin >> b[i];
//     }

//     float c[n];
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = 0;
//         for (int j = 0; j < n; j++)
//         {
//             c[i] += A[i][j] * b[j];
//         }
//     }

//     cout << "Matritsa:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << A[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     cout << "Natija (c=A*b):" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "c[" << i << "] = " << c[i] << endl;
//     }

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

//     int X[n];
//     int soni = 0;

//     cout << "X[]=";
//     for (int i = 0; i < n; i++)
//     {
//         X[i] = rand() % 100;
//         cout << X[i] << " ";
//     }
//     cout << endl;

//     int Z[n / 2];

//     for (int i = 1; i < n; i += 2)
//     {
//         Z[soni] = X[i];
//         soni++;
//     }

//     cout << "Z[]=";
//     for (int i = 0; i < soni; i++)
//     {
//         cout << Z[i] << " ";
//     }
//     cout << endl;

//     int maxElement = INT_MIN;
//     int minElement = INT_MAX;

//     for (int i = 0; i < soni; i++)
//     {
//         if (Z[i] > maxElement)
//         {
//             maxElement = Z[i];
//         }
//         if (Z[i] < minElement)
//         {
//             minElement = Z[i];
//         }
//     }

//     int maxIndex = -1;
//     int minIndex = -1;

//     for (int i = 0; i < soni; i++)
//     {
//         if (Z[i] == maxElement)
//         {
//             maxIndex = i;
//         }
//         if (Z[i] == minElement)
//         {
//             minIndex = i;
//         }
//     }

//     int temp = Z[maxIndex];
//     Z[maxIndex] = Z[minIndex];
//     Z[minIndex] = temp;

//     cout << "Z[] massivdagi maksimal va minimal elementlarini o'rni o'zaro almashgani:";
//     for (int i = 0; i < soni; i++)
//     {
//         cout << Z[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// n ta elementdan tashkil topgan massiv berilgan. Bu massivning tub elementlari soni aniqlansin.

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool tubmi(int n)
// {
//     if (n <= 1)
//     {
//         return false;
//     }
//     for (int i = 2; i <= sqrt(n); ++i)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {

//     int n;
//     int soni = 0;
//     cout << "Massiv o'lchamini kiriting: ";
//     cin >> n;

//     int massiv[n];
//     cout << "Massiv elementlarini kiriting:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> massiv[i];
//     }

//     cout << "Tub elementlar:" << endl;
//     for (int i = 0; i < n; ++i)
//     {
//         if (tubmi(massiv[i]))
//         {
//             cout << massiv[i] << " ";
//             soni++;
//         }
//     }

//     cout << "Tub elementlari soni : " << soni << endl;

//     return 0;
// }

// #include <iostream>
// #include <unordered_set>
// using namespace std;
// int main()
// {

//     int m, n;
//     cout << "Matritsa o'lchamini kiriting (m va n): ";
//     cin >> m >> n;

//     int matritsa[m][n];
//     cout << "Matritsa elementlarini kiriting:" << endl;
//     for (int i = 0; i < m; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cin >> matritsa[i][j];
//         }
//     }

//     unordered_set<int> belgilar;
//     int k = 0;

//     for (int i = 0; i < m; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             if (belgilar.find(matritsa[i][j]) == belgilar.end())
//             {
//                 belgilar.insert(matritsa[i][j]);
//                 ++k;
//             }
//         }
//     }

//     cout << "Har xil belgilar soni (takrorlanuvchi belgilar bitta hisoblansin): " << k << endl;

//     return 0;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;

// float a[10][10], b[9][9];

// int main()
// {
//     srand(time(0));
//     int k, n;

//     for (int i = 0; i < 10; ++i)
//     {
//         for (int j = 0; j < 10; ++j)
//         {
//             a[i][j] = rand() % 100;
//         }
//     }

//     cout << "Matrix A:" << endl;
//     for (int i = 0; i < 10; ++i)
//     {
//         for (int j = 0; j < 10; ++j)
//         {
//             cout << a[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     cout << "n k ";
//     cin >> n >> k;

//     for (int i = 0, i_b = 0; i < 9; ++i, ++i_b)
//     {
//         for (int j = 0, j_b = 0; j < 9; ++j, ++j_b)
//         {

//             if (i == n - 1)
//             {
//                 ++i_b;
//             }
//             if (j == k - 1)
//             {
//                 ++j_b;
//             }

//             b[i][j] = a[i_b][j_b];
//         }
//     }

//     cout << "\nMatrix B:" << endl;
//     for (int i = 0; i < n - 1; ++i)
//     {
//         for (int j = 0; j < n - 1; ++j)
//         {
//             cout << b[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Berilgan natural sondagi tartibda joylashgan ASCII jadvalidagi belgini topadigan dastur tuzing. (Masalan: N=65 Natija=>‟A‟).

// #include <iostream>
// using namespace std;
// int main()
// {

//     cout << "Iltimos, bir natural son kiriting: ";
//     int naturalSon;
//     cin >> naturalSon;

//     if (naturalSon >= 0 && naturalSon <= 127)
//     {
//         char belgi = static_cast<char>(naturalSon);
//         cout << "ASCII belgi: " << belgi << endl;
//     }
//     else
//     {
//         cout << "Noto'g'ri son kiritildi. Natural son 0 dan 127 gacha bo'lishi kerak." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {

//     cout << "Iltimos, matnni kiriting: ";
//     string matn;
//     getline(cin, matn);

//     size_t pozitsiya = matn.find(' ');
//     if (pozitsiya != string::npos)
//     {
//         matn.replace(0, pozitsiya, "bilmadim");
//         cout << "Yangi matn: " << matn << endl;
//     }
//     else
//     {
//         cout << "Matnda kamida ikkita so'z bo'lishi kerak." << endl;
//     }

//     return 0;
// }

////////////////////////////////////

// #include <iostream>
// #include <string>

//     using namespace std;

// int main()
// {
//     string A, B;
//     int k = 0;

//     cout << "A satrni kiriting : ";
//     getline(cin, A);

//     cout << "B satrni kiriting : ";
//     getline(cin, B);

//     for (int i = 0; i < B.length(); i++)
//     {
//         for (int j = 0; j < A.length(); j++)
//         {
//             if (B[i] == A[j])
//             {
//                 k++;
//                 break; // Agar B[i] A ichida topilsa, keyinroq tekshirishni to'xtatamiz
//             }
//         }
//     }

//     if (B.length() == k)
//         cout << "A satrdan B satrni yaratish mumkin ! ";
//     else
//         cout << "A satrdan B satrni yaratish mumkin emas !";

//     return 0;
// }

// String turidagi Satr berilgan. Undagi elementlarni char turidagi A massivga joylashtirib, polindrom soʻzlar sonini aniqlovchi dastur tuzing.

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// bool isPalindrome(const string &str)
// {
//     int left = 0;
//     int right = str.length() - 1;

//     while (left < right)
//     {
//         if (str[left] != str[right])
//         {
//             return false;
//         }
//         left++;
//         right--;
//     }

//     return true;
// }

// int countPalindromes(const string &sentence)
// {
//     int count = 0;
//     string word;

//     for (char ch : sentence)
//     {
//         if (ch == ' ' || ch == ',' || ch == '.' || ch == '!' || ch == '?' || ch == ':')
//         {
//             if (!word.empty())
//             {
//                 if (isPalindrome(word))
//                 {
//                     count++;
//                 }
//                 word.clear();
//             }
//         }
//         else
//         {
//             word += ch;
//         }
//     }

//     if (!word.empty() && isPalindrome(word))
//     {
//         count++;
//     }

//     return count;
// }

// int main()
// {
//     string input;
//     cout << "Satr kiriting: ";
//     getline(cin, input);

//     int palindromeCount = countPalindromes(input);

//     cout << "Satrda " << palindromeCount << " ta polindrom so'z bor." << endl;

//     return 0;
// }

// Butun sonlar fayli va matnli fayl berilgan. Matn faylining har bir satrining oxiriga butun sonlar faylidagi mos sonlari joylashtirilsin. Agar butun sonlar fayli matn faylidan qisqa bo’lsa, u holda matn faylidagi qolgan satrlar o’zgartirmasdan qoldirilsin

// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <sstream>
// using namespace std;
// int main()
// {

//     ifstream number_file("butun_sonlar.txt");

//     ifstream text_file("matn_fayli.txt");

//     vector<string> results;

//     if (number_file.is_open() && text_file.is_open())
//     {

//         vector<int> numbers;
//         int number;

//         while (number_file >> number)
//         {
//             numbers.push_back(number);
//         }

//         stringstream buffer;
//         buffer << text_file.rdbuf();

//         string line;
//         while (getline(buffer, line))
//         {

//             if (!numbers.empty())
//             {
//                 line += " " + to_string(numbers.back());
//                 numbers.pop_back();
//             }

//             results.push_back(line);
//         }

//         while (!numbers.empty())
//         {
//             results.push_back(to_string(numbers.back()));
//             numbers.pop_back();
//         }

//         number_file.close();
//         text_file.close();
//         ofstream updated_text_file("matn_fayli.txt");
//         for (const auto &result : results)
//         {
//             updated_text_file << result << endl;
//         }
//         updated_text_file.close();

//         cout << "Natija muvaffaqiyatli yaratildi." << endl;
//     }
//     else
//     {
//         cerr << "Xatolik: Fayllarni ochib bo'lmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {

//     ifstream input_file("haqiqiy_sonlar.txt");

//     ofstream odd_file("toq_nomerdagi_elementlar.txt");

//     ofstream even_file("juft_nomerdagi_elementlar.txt");

//     if (input_file.is_open() && odd_file.is_open() && even_file.is_open())
//     {
//         int number;
//         int position = 1;

//         while (input_file >> number)
//         {
//             if (position % 2 == 1)
//             {
//                 odd_file << number << endl;
//             }

//             else
//             {
//                 even_file << number << endl;
//             }

//             position++;
//         }

//         cout << "Fayllar muvaffaqiyatli yaratildi." << endl;

//         input_file.close();
//         odd_file.close();
//         even_file.close();
//     }
//     else
//     {
//         cerr << "Xatolik: Fayllarni ochib bo'lmadi." << endl;
//     }

//     return 0;
// }
