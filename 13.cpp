// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b, x, z, w;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "x=";
//     cin >> x;

//     z = pow((a * x * sin(2 * x) + exp(-2 * x) * (x + b)), 0.5);

//     w = exp(3) * abs(sin(b * x)) - (pow(x, 3.0) / a);

//     cout << "Natija: z=" << z << " w=" << w << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x;
//     float y;

//     cout << "x=";
//     cin >> x;

//     if (x > 0)
//     {
//         y = pow((sin(2 * x)), 2.0) - pow(cos(x), 2.0);
//     }
//     else if (x <= 0.3)
//     {
//         y = 1 / (pow(x, 2.0) - pow(x, 0.5));
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     float x;
//     cout << "x= ";
//     cin >> x;
//     float Y = (exp(x) + exp(-x)) / 2.0;
//     float Y1 = 1 + abs(x);
//     float Y2 = pow((1 + pow(x, 2.0)), x);
//     cout << "Tartiblanmagan xolati \n"
//          << Y << " " << Y1 << " " << Y2 << endl;
//     ;
//     cout << "Tartiblangan holati " << endl;
//     if (Y >= Y1 && Y1 >= Y2)
//     {
//         cout << Y2 << " " << Y1 << " " << Y << endl;
//     }
//     else if (Y >= Y2 && Y2 >= Y1)
//     {
//         cout << Y1 << " " << Y2 << " " << Y << endl;
//     }
//     else if (Y1 >= Y && Y >= Y2)
//     {
//         cout << Y2 << " " << Y << " " << Y1 << endl;
//     }
//     else if (Y1 >= Y2 && Y2 >= Y)
//     {
//         cout << Y << " " << Y2 << " " << Y1 << endl;
//     }
//     else if (Y2 >= Y && Y >= Y1)
//     {
//         cout << Y1 << " " << Y << " " << Y2 << endl;
//     }
//     else if (Y2 >= Y1 && Y1 >= Y)
//     {
//         cout << Y << " " << Y1 << " " << Y2 << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     float a;
//     int n;
//     cout << "1.  katet a\n2.   gipatenuza\n3.  balandlik\n4.   Yuza\n";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//     {
//         cout << "Katetni kiriting : ";
//         cin >> a;
//         float c = sqrt(2) * a;
//         cout << "Gipatenuza : " << c << endl;
//         cout << "Balandlik : " << c / 2 << endl;
//         cout << "Yuza : " << c * c / 2 / 2 << endl;
//         break;
//     }
//     case 2:
//     {
//         float c;
//         cout << "Gipatenuzani kiriting : ";
//         cin >> c;
//         float a = a / sqrt(2);
//         cout << "Katet : " << a << endl;
//         cout << "Balandlik : " << c / 2 << endl;
//         cout << "Yuza : " << c * c / 2 / 2 << endl;
//         break;
//     }
//     case 3:
//     {
//         float h;
//         cout << "Balandlik kiriting : ";
//         cin >> h;
//         float a = sqrt(2) * h;
//         cout << "Gipatenuza : " << 2 * h << endl;
//         cout << "Katet : " << a << endl;
//         cout << "Yuza : " << h * 2 * h / 2 << endl;
//         break;
//     }
//     case 4:
//     {
//         float s;
//         cout << "Yuza kiriting : ";
//         cin >> s;
//         float c = sqrt(s) * 2;
//         cout << "Gipatenuza : " << c << endl;
//         cout << "Balandlik : " << c / 2 << endl;
//         cout << "Katet : " << c / sqrt(2) << endl;
//         break;
//     }
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     if (pow(x, 2) + pow(y, 2) >= 1 && y >= -1 && y <= 1 && x >= -2 && x <= 2)
//     {
//         cout << "Kiritilgan nuqta berilgan shartlar bo'yicha yotadi" << endl;
//     }
//     else
//     {
//         cout << "Kiritilgan nuqta berilgan shartlarga mos kelmaydi" << endl;
//     }

//     return main();
// }

// Telefon sinfini yarating. Unda kamida 5 ta maydon va ularni ekranga chiqaruvchi, qayta ishlovchi usullarni yarating.

// #include <iostream>
// using namespace std;

// class telefon
// {
// public:
//     string name;
//     int year;
//     string made_country;
//     int price;
//     int memory;

//     void print()
//     {
//         cout << "Name: " << name << "\nYear: " << year << "\nMade country: " << made_country << "\nPrice: " << price << "\nMemory: " << memory << "GB\n\n";
//     }

//     telefon() {}
//     telefon(string a, int b, string c, int d, int f)
//     {
//         name = a;
//         year = b;
//         made_country = c;
//         price = d;
//         memory = f;
//     }
// };

// int main()
// {
//     telefon a[5];

//     a[0] = telefon("Samsung A6+", 2018, "South Korea", 120, 32);
//     a[1] = telefon("Iphone 8+", 2019, "America", 400, 64);
//     a[2] = telefon("Redmi note 10", 2020, "China", 260, 64);
//     a[3] = telefon("Iphone 13 proMax", 2021, "Dubai", 1200, 128);
//     a[4] = telefon("Samsung S10+", 2019, "South Korea", 100, 16);

//     for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//     {
//         a[i].print();
//     }

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//     int K = 2;

//     ifstream input("boshlangich.txt");

//     if (!input.is_open())
//     {
//         cerr << "Xatolik: Faylni ochib bo'lmadi." << endl;
//         return 1;
//     }

//     input.seekg(0, ios::end);
//     int fileLength = input.tellg();
//     input.seekg(0, ios::beg);

//     ofstream output("yangi_fayl.txt");

//     if (fileLength >= K)
//     {
//         string word;
//         while (input >> word)
//         {

//             if (word.find_first_of(" \t\n\r\f\v.,;:?!") == string::npos)
//             {
//                 output << word << ' ';
//             }
//         }
//     }
//     else
//     {
//         cerr << "Xatolik: Boshlang'ich fayl uzunligi " << K << " dan kam." << endl;
//     }

//     input.close();
//     output.close();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;

// void findLocalExtremes(int numbers[], int size, int extremes[], int &extremesCount)
// {
//     for (int i = 1; i < size - 1; ++i)
//     {
//         if (numbers[i] < numbers[i - 1] && numbers[i] < numbers[i + 1])
//         {

//             extremes[extremesCount++] = numbers[i];
//         }
//         else if (numbers[i] > numbers[i - 1] && numbers[i] > numbers[i + 1])
//         {

//             extremes[extremesCount++] = numbers[i];
//         }
//     }
// }

// int main()
// {

//     const char *filename = "sonlar.txt";
//     const char *newFilename = "yangi_fayl.bin";

//     ifstream inputFile(filename, ios::in);

//     if (!inputFile.is_open())
//     {
//         cerr << "Faylni ochib bo'lmadi: " << filename << endl;
//         return 1;
//     }

//     int maxSize = 1000;
//     int *numbers = new int[maxSize];
//     int number;

//     int size = 0;
//     while (inputFile >> number && size < maxSize)
//     {
//         numbers[size++] = number;
//     }

//     int *extremes = new int[size];
//     int extremesCount = 0;

//     findLocalExtremes(numbers, size, extremes, extremesCount);

//     cout << "Umumiy lokal ekstremumlari soni: " << extremesCount << endl;

//     ofstream outputFile(newFilename, ios::binary);
//     outputFile.write(reinterpret_cast<const char *>(extremes), extremesCount * sizeof(int));
//     outputFile.close();

//     delete[] numbers;
//     delete[] extremes;

//     cout << "Natija yangi_fayl.bin fayliga saqlandi." << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// const int MAX_SIZE = 100;

// void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
// {
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
// }

// void writeMatrixToBinaryFile(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols, const char *filename)
// {
//     ofstream file(filename, ios::binary);

//     if (file.is_open())
//     {
//         for (int i = 0; i < rows; ++i)
//         {
//             for (int j = 0; j < cols; ++j)
//             {
//                 if (i > j)
//                 {
//                     file.write(reinterpret_cast<char *>(&matrix[i][j]), sizeof(int));
//                 }
//             }
//         }

//         cout << "Ma'lumotlar binar faylga yozildi: " << filename << endl;

//         file.close();
//     }
//     else
//     {
//         cerr << "Faylni ochib bo'lmadi: " << filename << endl;
//     }
// }

// int main()
// {
//     srand(time(0));

//     int I, J;

//     cout << "I = ";
//     cin >> I;

//     cout << "J = ";
//     cin >> J;

//     int matrix[MAX_SIZE][MAX_SIZE];
//     for (int i = 0; i < I; ++i)
//     {
//         for (int j = 0; j < J; ++j)
//         {
//             matrix[i][j] = rand() % 101;
//         }
//     }

//     cout << "Matritsa:" << endl;
//     printMatrix(matrix, I, J);

//     writeMatrixToBinaryFile(matrix, I, J, "matrix_data.bin");

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cctype>
// using namespace std;
// int main()
// {

//     string inputFileName = "boshlangich.txt";
//     string outputTextFileName = "matnli.txt";
//     string outputNumbersFileName = "haqiqiy_sonlar.txt";

//     ifstream inputFile(inputFileName);

//     ofstream outputTextFile(outputTextFileName);
//     ofstream outputNumbersFile(outputNumbersFileName);

//     if (!inputFile.is_open())
//     {
//         cerr << "Xato: Boshlang'ich faylni ochib bo'lmadi." << endl;
//         return 1;
//     }

//     string line;
//     while (getline(inputFile, line))
//     {

//         outputTextFile << line << endl;

//         for (char ch : line)
//         {
//             if (isdigit(ch))
//             {
//                 outputNumbersFile << ch;
//             }
//         }
//     }

//     inputFile.close();
//     outputTextFile.close();
//     outputNumbersFile.close();

//     cout << "Fayllar muvaffaqiyatli hosil qilindi." << endl;

//     return 0;
// }

//////////////////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// int main()
// {

//     cout << "Char turidagi simvollar bilan to'ldirilgan matn kiriting: ";
//     int maxLength = 100;
//     char input[maxLength];
//     cin.getline(input, maxLength);

//     char result[maxLength];
//     int resultIndex = 0;
//     for (int i = 0; input[i] != '\0'; ++i)
//     {
//         if (!isdigit(input[i]))
//         {
//             result[resultIndex++] = input[i];
//         }
//     }
//     result[resultIndex] = '\0';

//     cout << "O'chirilgan natija: " << result << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void printArraystring(string, int);

// void sort(string s[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         string temp = s[i];

//         int j = i - 1;
//         while (j >= 0 && temp.length() < s[j].length())
//         {
//             s[j + 1] = s[j];
//             j--;
//         }
//         s[j + 1] = temp;
//     }
// }

// void findEqualsLength(string str[], int n)
// {
//     cout << "{";
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0)
//         {
//             cout << str[i];
//         }
//         else
//         {
//             if (str[i].size() == str[i - 1].size())
//             {
//                 cout << ", " << str[i];
//             }
//             else
//             {
//                 cout << "}" << endl
//                      << "{" << str[i];
//             }
//         }
//     }
//     cout << "}";
// }

// int main()
// {
//     string familiya[] = {
//         "Abdurahmonova",
//         "Abdullayev",
//         "Qurbonov",
//         "Mahmarahimova",
//         "Sodiqova",
//         "Ismoilov",
//         "Qosimov",
//         "Saidov",
//         "Toshmatov",
//         "Qodirov",
//         "Rahmonov",
//         "Nazarov"};
//     int n = sizeof(familiya) / sizeof(familiya[0]);

//     sort(familiya, n);

//     findEqualsLength(familiya, n);

//     return 0;
// }

// #include <iostream>
// #include <fstream>
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
//         cerr << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     string soz = "arra bola lola salom anora";
//     fayl << soz;

//     fayl.close();

//     ifstream oqishFayli(faylNomi);
//     if (!oqishFayli.is_open())
//     {
//         cerr << "Fayl ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     string oqilganSoz;
//     while (oqishFayli >> oqilganSoz)
//     {

//         if (oqilganSoz.front() == oqilganSoz.back())
//         {
//             cout << "Bir xil boshlanishi va tugashi harfdan iborat so'z: " << oqilganSoz << endl;
//         }
//     }

//     oqishFayli.close();

//     return 0;
// }

// input faylida nol va birlardan tashkil topgan satr berilgan. Satrdagi birlar miqdorini output fayliga yozish dasturini tuzing.

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {

//     string fayl_nomi = "input.txt";

//     ifstream fayl(fayl_nomi);

//     if (!fayl.is_open())
//     {
//         cerr << "Xatolik: Faylni o'qib bo'lmayapti." << endl;
//         return 1;
//     }

//     int birlar_miqdori = 0;

//     string satr;
//     while (getline(fayl, satr))
//     {

//         for (char belgi : satr)
//         {
//             if (belgi == '1')
//             {
//                 birlar_miqdori++;
//             }
//         }
//     }

//     fayl.close();

//     ofstream natija_fayl("output.txt");
//     natija_fayl << "Birlar miqdori: " << birlar_miqdori << endl;
//     natija_fayl.close();

//     cout << "Birlar miqdori faylga saqlandi." << endl;

//     return 0;
// }

// Telefonlar haqida ma’lumotlar berilgan (class Telephone). Yadrolari va operativ xotirasi kuchli telefonni qidirib topuvchi dastur tuzing.

// #include <iostream>
// #include <forward_list>

// using namespace std;

// float sonlar(forward_list<int> &numbers)
// {
//     float sum = 0;
//     int count = 0;
//     for (int num : numbers)
//     {
//         sum += num;
//         count++;
//     }
//     return sum / count;
// }

// void sonlar_natija(forward_list<int> &numbers)
// {
//     float average = sonlar(numbers);
//     cout << "O'rta arifmetik qiymat: " << average << endl;
//     cout << "O'rta arifmetik qiymatdan kichik qiymatlari: ";
//     for (int num : numbers)
//     {
//         if (num < average)
//         {
//             cout << num << " ";
//         }
//     }
//     cout << endl;
// }

// int main()
// {
//     forward_list<int> numbers = {10, 20, 30, 40, 50, 40, 46, 22, 78};
//     sonlar_natija(numbers);
//     return 0;
// }
