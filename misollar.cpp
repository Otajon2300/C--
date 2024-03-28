// To'gri burchakli uchburchakning gipotenuzasi va kateti berilgan bo'lsa, ikkinchi katet va ichki chizilgan aylananing radiysi hisoblansin.
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {

//     double c, a, b;

//     cout << "Gipotenuza (c) ni kiriting: ";
//     cin >> c;

//     cout << "Birinchi katetni (a) kiriting: ";
//     cin >> a;

//     b = sqrt(c * c - a * a);

//     double r = (a * b) / (a + b + c);

//     cout << "Ikkinchi katet (b): " << b << endl;
//     cout << "Ichki aylanadagi radiyus (r): " << r << endl;

//     return 0;
// }

// Aylana uzunligi berilgan, bu aylana bilan chegaralangan doira yuzasi topilsin.

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     double uzunlik;

//     cout << "Aylananing uzunligini kiriting: ";
//     cin >> uzunlik;

//     double radius = uzunlik / (2 * M_PI);
//     double yuza = M_PI * radius * radius;

//     cout << "Chegaralangan doira yuzasi: " << yuza << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Ketma-ketlik uzunligini kiriting (n > 1): ";
//     cin >> n;

//     if (n <= 1)
//     {
//         cerr << "Noto'g'ri qiymat kiritildi. n > 1 bo'lishi kerak.\n";
//         return 1;
//     }

//     int *numbers = new int[n];

//     for (int i = 0; i < n; ++i)
//     {
//         cout << "Son #" << i + 1 << ": ";
//         cin >> numbers[i];
//     }

//     int engKattaQiymat = numbers[0];

//     for (int i = 1; i < n; ++i)
//     {
//         if (numbers[i] > engKattaQiymat)
//         {
//             engKattaQiymat = numbers[i];
//         }
//     }

//     cout << "Eng katta qiymat: " << engKattaQiymat << endl;

//     delete[] numbers;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int ekuk(int a, int b);
// int ekuk(int a, int b, int c);
// int ekuk(int a, int b, int c, int d);

// int main()
// {
//     int num1, num2, num3, num4;
//     cout << "1-sonni kiriting: ";
//     cin >> num1;
//     cout << "2-sonni kiriting: ";
//     cin >> num2;
//     cout << "3-sonni kiriting: ";
//     cin >> num3;
//     cout << "4-sonni kiriting: ";
//     cin >> num4;

//     int result = ekuk(num1, num2, num3, num4);

//     cout << "EKUK: " << result << endl;

//     return 0;
// }

// int ekuk(int a, int b)
// {

//     return (a * b) / __gcd(a, b);
// }

// int ekuk(int a, int b, int c)
// {
//     int temp = ekuk(a, b);

//     return ekuk(temp, c);
// }

// int ekuk(int a, int b, int c, int d)
// {
//     int temp = ekuk(a, b, c);

//     return ekuk(temp, d);
// }

// #include <iostream>
// using namespace std;
// bool egizakmi(int son)
// {
//     if (son < 2)
//     {
//         return false;
//     }
//     for (int i = 2; i <= son / 2; ++i)
//     {
//         if (son % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// void egizaklarniChopEt(int n)
// {
//     if (n <= 0)
//     {
//         cout << "n 2 dan katta butun son bo'lishi kerak" << endl;
//         return;
//     }

//     int egizaklar[1000];

//     int index = 0;
//     for (int i = n + 1; i <= 2 * n; ++i)
//     {
//         if (egizakmi(i))
//         {
//             egizaklar[index] = i;
//             ++index;
//         }
//     }

//     for (int i = 0; i < index; i += 2)
//     {
//         cout << egizaklar[i] << " " << egizaklar[i + 1] << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "n ni kiriting: ";
//     cin >> n;

//     egizaklarniChopEt(n);

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// void chop_qil(istream &infile)
// {
//     string line;

//     if (getline(infile, line))
//     {

//         chop_qil(infile);

//         for (int i = line.length() - 1; i >= 0; i--)
//         {
//             cout << line[i];
//         }
//         cout << endl;
//     }
// }

// int main()
// {

//     ifstream infile("matn.txt");

//     if (!infile)
//     {
//         cerr << "Faylni ochib bo'lmadi." << endl;
//         return 1;
//     }

//     chop_qil(infile);

//     infile.close();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool Palindrom(int number)
// {
//     int son = number;
//     int son2 = 0;

//     while (number > 0)
//     {
//         int a = number % 10;
//         son2 = son2 * 10 + a;
//         number = number / 10;
//     }

//     return son == son2;
// }

// void natija(int number)
// {
//     if (Palindrom(number))
//     {
//         cout << number << " palindrom" << endl;
//     }
//     else
//     {
//         cout << number << " palindrom emas" << endl;
//     }
// }

// int main()
// {
//     int a;

//     cout << "a = ";
//     cin >> a;

//     natija(a);

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a[6] = {5, 9, -1, -8, 3 - 6};
//     float b[6] = {-3.4, 5, 7, 6.8, 9.3, 1.2};
//     float c[6];

//     cout << "a[]:";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;

//     cout << "b[]:";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << b[i] << " ";
//     }
//     cout << endl;

//     for (int i = 0; i < 6; i++)
//     {
//         c[i] = (a[i] - b[i]) / (a[i] * b[i]);
//     }
//     cout << "c[]:";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << c[i] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;

// void printPositiveAndNegativeNumbers()
// {
//     int number;

//     cin >> number;

//     if (number == 0)
//     {
//         return;
//     }

//     if (number < 0)
//     {
//         cout << "Manfiy son: " << number << endl;
//     }

//     else
//     {
//         cout << "Musbat son: " << number << endl;
//     }
//     printPositiveAndNegativeNumbers();
// }

// int main()
// {
//     cout << "Butun sonlarni kiritish: " << endl;

//     printPositiveAndNegativeNumbers();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {

//     string inputFile = "sizning_faylingiz.txt";
//     string outputFile = "yangi_fayl.txt";

//     ifstream input(inputFile);
//     ofstream output(outputFile);

//     if (!input.is_open())
//     {
//         cerr << "Faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     if (!output.is_open())
//     {
//         cerr << "Yangi faylni yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     string line;
//     int lineCount = 0;

//     while (getline(input, line))
//     {

//         size_t pos = 0;
//         int spaceCount = 0;

//         while (pos < line.length() && spaceCount < 5)
//         {
//             if (line[pos] == ' ')
//             {
//                 spaceCount++;
//             }

//             pos++;
//         }

//         if (spaceCount >= 5)
//         {
//             output << line.substr(pos) << endl;
//         }

//         lineCount++;
//     }

//     input.close();
//     output.close();

//     cout << "Bajarildi! Yangi fayl: " << outputFile << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     ifstream file("fayl.txt");

//     if (!file)
//     {
//         cout << "Faylni ochishda xatolik yuz berdi." << endl;
//         return 1;
//     }

//     int current_number;
//     int previous_number = -1;
//     int series_count = 0;

//     while (file >> current_number)
//     {
//         if (current_number != previous_number)
//         {
//             if (series_count > 0)
//             {
//                 cout << "Seriya: " << previous_number << ", elementlar soni: " << series_count << endl;
//             }

//             previous_number = current_number;
//             series_count = 1;
//         }
//         else
//         {
//             series_count++;
//         }
//     }

//     if (series_count > 0)
//     {
//         cout << "Seriya: " << previous_number << ", elementlar soni: " << series_count << endl;
//     }

//     file.close();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void saralash(int arr[], int size) {
//     for (int i = 0; i < size - 1; ++i) {
//         for (int j = 0; j < size - i - 1; ++j) {
//             // Agar o'zgartirish kerak bo'lsa almashtirish
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int a[] = {6, 3, 4, 7, 9, 10, 8};
//     int size = sizeof(a) / sizeof(a[0]);

//     int lastElement = a[size - 1];

//     saralash(a, size - 1);

//     a[size - 1] = lastElement;

//     for (int i = 0; i < size; ++i) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void saralash(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; ++i)
//     {
//         for (int j = 0; j < size - i - 1; ++j)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     int a[] = {6, 3, 4, 7, 9, 10, 8};
//     int n = sizeof(a) / sizeof(a[0]);

//     int last_element = a[n - 1];

//     saralash(a, n - 1);
//     cout << "Birinchi saralash : ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     a[n - 1] = last_element;

//     saralash(a, n);
//     cout << "Ikkinchi saralash : ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {

//     string matn;
//     cout << "Iltimos, matnni kiriting: ";
//     getline(cin, matn);

//     int a_soni = 0;
//     int nuqta_soni = 0;

//     for (char harf : matn)
//     {
//         if (harf == 'a')
//         {
//             a_soni++;
//         }
//         else if (harf == '.')
//         {
//             nuqta_soni++;
//         }
//     }

//     cout << "Matnda " << a_soni << " ta 'a' belgisi bor.\n";
//     cout << "Matnda " << nuqta_soni << " ta '.' (nuqta) belgisi bor.\n";

//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string matn;
    cout << "Iltimos, matnni kiriting: ";
    getline(cin, matn);

    int soni = 0;

    for (char belgi : matn)
    {
        if (belgi == '+' || belgi == '-')
        {
            soni++;
        }
    }

    cout << "Matnda " << soni << " ta '+' va '-' belgisi bor.\n";

    return 0;
}
