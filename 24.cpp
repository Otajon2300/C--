// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     float x, y, a, b, z;
//     int n;

//     cout << "x = ";
//     cin >> x;
//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     cout << "caseni tanlang (1-3):";
//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         z = asin(pow(x, 3.0));
//         break;
//     case 2:
//         z = pow(acos(x), 2.0);
//         break;
//     case 3:
//         z = tan(x);
//         break;

//     default:
//         break;
//     }

//     if (x < a)
//     {
//         y = x * exp(x) + (z + 7.7 * a * b * x);
//     }
//     else if (a <= x <= pow(b, 2.0))
//     {
//         y = tan(a * x + z) + pow(cos(b * x), 2);
//     }
//     else if (x > pow(b, 2.0))
//     {
//         y = log(pow((sin(a + b * x + z * pow(x, 2))), 2.0));
//     }

//     cout << "Natija y=" << y << endl;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int R = 1; R <= 14; R++)
//     {
//         y += (R + 2.4) / (pow(R, 2) + 7 * R + 1);
//     }

//     cout << "Natija : " << y << endl;
// }

// b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;

//     for (int q = 1; q <= 18; q++)
//     {
//         y *= pow(-1, q) * ((cos(pow(q, 2) + 5)) / (pow(q, 4) + abs(q - 71)));
//     }

//     cout << "Natija : " << y << endl;
// }

// c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 16; i++)
//     {
//         double product = 1.0;

//         for (int m = 1; m <= 13; m++)
//         {
//             product *= atan(i + m) / (log(i) + 0.24);
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
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

///////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float a[12];
//     int soni = 0;
//     float sum = 0;

//     cout << "Massivning elementlari kiriting : ";
//     for (int i = 0; i < 12; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < 12; i++)
//     {
//         if (a[i] < a[11])
//         {
//             soni++;
//             sum += a[i];
//         }
//     }

//     cout << "Oxirgi elementdan qiymati kichik bo`lgan elementlari soni : " << soni << endl;
//     cout << "Yig'indisi : " << sum << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 10;
//     int *arr = new int[size];

//     cout << "10 ta ikki xonali sonlarni kiriting:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int *separatedArr = new int[size * 2];
//     for (int i = 0; i < size; i++)
//     {
//         separatedArr[i * 2] = arr[i] / 10;
//         separatedArr[i * 2 + 1] = arr[i] % 10;
//     }

//     cout << "Tugatildi! Yangi massivning holati:\n";
//     for (int i = 0; i < size * 2; i++)
//     {
//         cout << separatedArr[i] << " ";
//     }

//     delete[] arr;
//     delete[] separatedArr;
//     return 0;
// }

// Berilgan ikkilik sanoq sistemasidagi massivda barcha elementlarini siklik bir xona o`ngga suring.

// #include <iostream>
// using namespace std;
// void shiftRight(int arr[], int size)
// {
//     int lastElement = arr[size - 1];

//     for (int i = size - 1; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }

//     arr[0] = lastElement;
// }

// int main()
// {
//     int size;
//     cout << "Massivning o'lchamini kiriting: ";
//     cin >> size;

//     int *arr = new int[size];
//     cout << "Ikkilik sanoq sistemasidagi massivni kiriting: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     shiftRight(arr, size);

//     cout << "Tugatildi! Massivning yangilangan holati:\n";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     delete[] arr;
//     return 0;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     int N, M;
//     cout << "Massivning birinchi o'lchamasi (N): ";
//     cin >> N;
//     cout << "Massivning ikkinchi o'lchamasi (M): ";
//     cin >> M;

//     int massiv[N][M];

//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < M; ++j)
//         {

//             massiv[i][j] = rand() % 100;
//         }
//     }

//     cout << "Massiv : \n";
//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < M; ++j)
//         {

//             cout << massiv[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     int yigindi = 0;
//     for (int j = 0; j < M; ++j)
//     {
//         yigindi += massiv[1][j];
//     }

//     cout << "Ikkinchi qator elementlarining yig'indisi: " << yigindi << endl;

//     return 0;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main()
// {
//     srand(time(0));
//     int N;
//     cout << "Matritsa o'lchamini kiriting (NxN): ";
//     cin >> N;

//     int matritsa[N][N];

//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < N; ++j)
//         {

//             matritsa[i][j] = rand() % 100;
//         }
//     }

//     cout << "Matritsa : \n";
//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = 0; j < N; ++j)
//         {

//             cout << matritsa[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     int yigindi = 0;
//     for (int i = 0; i < N; ++i)
//     {
//         for (int j = i + 1; j < N; ++j)
//         {
//             yigindi += matritsa[i][j];
//         }
//     }

//     cout << "Asosiy diagonal yuqori elementlarining summasi: " << yigindi << endl;

//     return 0;
// }

// Berilgan nomdagi matnli faylni yaratish va unga orasida bitta ochilgan qavs va bitta yopilgan qavs mavjud bo’lgan satr kiritish dasturini tuzing. Bu qavslar orasidagi belgilar sonini aniqlang.

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
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     cout << "Satrni kiriting: ";
//     string satr;
//     getline(cin >> ws, satr);

//     fayl << satr;

//     fayl.close();

//     ifstream faylOqish(faylNomi);
//     if (!faylOqish.is_open())
//     {
//         cout << "Fayl ochilmadi!" << endl;
//         return 1;
//     }

//     string fileContent;
//     getline(faylOqish, fileContent);

//     int count = 0;
//     bool belgi = false;

//     for (char ch : fileContent)
//     {
//         if (ch == '(')
//         {
//             belgi = true;
//         }
//         else if (ch == ')' && belgi)
//         {
//             belgi = false;
//         }
//         else if (belgi)
//         {
//             count++;
//         }
//     }
//     cout << "Satrdagi qavslar orasidagi belgilar soni: " << count << endl;

//     faylOqish.close();

//     return 0;
// }

// input faylida a,b,c sonlari berilgan. output fayliga bu 3ta sonni o’rta arifmetigini yozish dasturini tuzing.

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ifstream input("input.txt");
//     if (!input.is_open())
//     {
//         cout << "Fayl ochilmadi!" << endl;
//         return 1;
//     }

//     int a, b, c;

//     input >> a >> b >> c;

//     input.close();

//     double orta_arifmetik = static_cast<double>(a + b + c) / 3.0;

//     ofstream output("output.txt");
//     if (!output.is_open())
//     {
//         cout << "Natija fayl ochilmadi!" << endl;
//         return 2;
//     }

//     output << "O'rta arifmetik: " << orta_arifmetik << endl;

//     output.close();

//     return 0;
// }

// 24. Berilgan qatorda har bir nuqtadan keyin yana bitta nuqta qo`ying.

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
//     cout << "Satrni kiriting: ";
//     string satr;
//     getline(cin >> ws, satr);

//     for (size_t i = 0; i < satr.length(); ++i)
//     {
//         if (satr[i] == '.')
//         {
//             satr.insert(i + 1, ".");
//             i++;
//         }
//     }

//     cout << "Fayl nomini kiriting: ";
//     string faylNomi;
//     cin >> faylNomi;

//     ofstream fayl(faylNomi);
//     if (!fayl.is_open())
//     {
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     fayl << "Yangi satr: " << satr << endl;

//     fayl.close();

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>

// using namespace std;

// int main()
// {
//     cout << "Satrni kiriting: ";
//     string satr;
//     getline(cin >> ws, satr);

//     cout << "Fayl nomini kiriting: ";
//     string faylNomi;
//     cin >> faylNomi;

//     ofstream fayl(faylNomi);
//     if (!fayl.is_open())
//     {
//         cout << "Fayl yaratib bo'lmadi!" << endl;
//         return 1;
//     }

//     string juftIndeksli;
//     string toqIndeksli;

//     for (size_t i = 0; i < satr.length(); ++i)
//     {
//         if (i % 2 == 0)
//         {
//             juftIndeksli += satr[i];
//         }
//         else
//         {
//             toqIndeksli += satr[i];
//         }
//     }

//     size_t orta = satr.length() / 2;
//     string birinchiQator = satr.substr(0, orta);
//     string ikkinchiQator = satr.substr(orta);

//     fayl << "Birinchi qator: " << birinchiQator << endl;
//     fayl << "Ikkinchi qator: " << ikkinchiQator << endl;
//     fayl << "Juft indeksli simvollar: " << juftIndeksli << endl;
//     fayl << "Toq indeksli simvollar: " << toqIndeksli << endl;

//     fayl.close();

//     return 0;
// }

///////////////////////////////////////////////

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

// #include <iostream>
// #include <sstream>
// #include <fstream>
// #include <math.h>
// using namespace std;
// int main()
// {

//     string fayl_nomi = "matn.txt";

//     ifstream fayl(fayl_nomi);

//     if (!fayl.is_open())
//     {
//         cout << "Xatolik: Faylni ochib bo'lmadi!" << endl;
//         return 1;
//     }

//     string satr;
//     int soz_soni = 0;
//     int son_soni = 0;

//     while (getline(fayl, satr))
//     {
//         istringstream satr_stream(satr);
//         string soz;
//         while (satr_stream >> soz)
//         {

//             soz_soni++;

//             for (char belgi : soz)
//             {
//                 if (isdigit(belgi))
//                 {
//                     son_soni++;
//                 }
//             }
//         }
//     }

//     cout << "Umumiy so'zlar soni: " << abs(soz_soni - son_soni) << endl;
//     cout << "Umumiy sonlar soni: " << son_soni << endl;

//     fayl.close();

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Bokschilar
{
    string familiya;
    string ism;
    int vazn;
};

int main()
{

    string fayl_nomi = "bokschilar.txt";
    string yangi_fayl_nomi = "yangi_bokschilar.txt";

    ifstream fayl(fayl_nomi);
    ofstream yangi_fayl(yangi_fayl_nomi);

    if (!fayl.is_open() || !yangi_fayl.is_open())
    {
        cout << "Xatolik: Faylni ochib yoki yaratib bo'lmadi!" << endl;
        return 1;
    }

    Bokschilar *bokschilarList = nullptr;
    int bokschilar_soni = 0;

    string familiya, ism;
    int vazn;

    while (fayl >> familiya >> ism >> vazn)
    {
        if (vazn <= 55)
        {

            Bokschilar *temp = new Bokschilar[bokschilar_soni + 1];
            for (int i = 0; i < bokschilar_soni; i++)
            {
                temp[i] = bokschilarList[i];
            }
            temp[bokschilar_soni] = {familiya, ism, vazn};
            delete[] bokschilarList;
            bokschilarList = temp;
            bokschilar_soni++;

            yangi_fayl << familiya << ' ' << ism << ' ' << vazn << endl;
        }
    }

    cout << "55 kg vaznli bokschilar ro'yhati:" << endl;
    for (int i = 0; i < bokschilar_soni; i++)
    {
        const Bokschilar &bokschilar = bokschilarList[i];
        cout << "Familiya: " << bokschilar.familiya
             << ", Ism: " << bokschilar.ism
             << ", Vazni: " << bokschilar.vazn << " kg" << endl;
    }

    fayl.close();
    yangi_fayl.close();

    delete[] bokschilarList;

    cout << "Yangi fayl tayyorlandi: " << yangi_fayl_nomi << endl;

    return 0;
}
