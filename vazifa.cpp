// #include <iostream>

// using namespace std;

// int main()
// {
//     double uzunlik, eni;
//     cout << "To'rtburchakning uzunligini kiriting: ";
//     cin >> uzunlik;
//     cout << "To'rtburchakning enini kiriting: ";
//     cin >> eni;
//     double maydon = uzunlik * eni;
//     cout << "To'rtburchakning maydoni: " << maydon << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A, B;
//     cout << "A ni kiriting: ";
//     cin >> A;
//     cout << "B ni kiriting: ";
//     cin >> B;

//     double orta_arifmetika = (A + B) / 2.0;

//     cout << "O'rta arifmetika: " << orta_arifmetika << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float ball, max_ball, baho, d;
//     cout << "ball=";
//     cin >> ball;
//     cout << "\n max_ball=";
//     cin >> max_ball;
//     d = ball / max_ball;
//     if (d > 0.85)
//         baho = 5;
//     else if (d > 0.75)
//         baho = 4;
//     else if (d > 0.55)
//         baho = 3;
//     else
//         baho = 2;
//     cout << "\n"
//          << baho;
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
// using namespace std;
// double aylanaYuzasi(double yarim_perimetr)
// {
//     double yuzasi = 3.14159 * yarim_perimetr * yarim_perimetr;
//     return yuzasi;
// }

// int main()
// {
//     double radius = 5.0;
//     double yuzasi = aylanaYuzasi(radius);
//     cout << "Aylana yuzasi: " << yuzasi << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int numbers[] = {10, 30, 50, 20, 40};

//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     int max = numbers[0];
//     int secondMax = numbers[0];

//     for (int i = 1; i < size; i++)
//     {
//         if (numbers[i] > max)
//         {
//             secondMax = max;
//             max = numbers[i];
//         }
//         else if (numbers[i] > secondMax)
//         {
//             secondMax = numbers[i];
//         }
//     }

//     cout << "Ikkinchi eng katta son: " << secondMax << endl;

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
//     int *ptr;

//     ptr = &a;
//     cout << "a ning qiymati: " << a << endl;
//     cout << "a ning manzili: " << ptr << endl;

//     *ptr = 10;
//     cout << "Yangilangan a ning qiymati: " << a << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *ptr = new int;
//     *ptr = 5;

//     cout << "xotiradagi qiymat: " << *ptr << endl;

//     delete ptr;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string greeting = "Assalomu alaykum!";
//     cout << greeting << endl;

//     string name;
//     cout << "Ismingizni kiriting: ";
//     cin >> name;
//     cout << "Salom, " << name << "!" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     char letter = 'A';
//     cout << letter << endl;

//     char symbol;
//     cout << "Belgi kiriting: ";
//     cin >> symbol;
//     cout << "Siz kiritgan belgi: " << symbol << endl;

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     ofstream file("example.txt");

//     if (file.is_open())
//     {
//         file << "Bu faylga yozilgan matn." << endl;
//         file.close();
//         cout << "Fayl muvaffaqiyatli yaratildi va yopildi." << endl;
//     }
//     else
//     {
//         cout << "Fayl ochilmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main()
// {
//     ifstream file("example.txt");

//     if (file.is_open())
//     {
//         string line;
//         while (getline(file, line))
//         {
//             cout << line << endl;
//         }
//         file.close();
//     }
//     else
//     {
//         cout << "Fayl ochilmadi." << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Car
// {
// public:
//     string brand;
//     string model;
//     int year;

//     void displayInfo()
//     {
//         cout << "\nBrand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Yil: " << year << endl;
//     }
// };

// int main()
// {

//     Car myCar, myCar1;

//     myCar.brand = "Toyota";
//     myCar.model = "Camry";
//     myCar.year = 2022;

//     myCar1.brand = "Honda";
//     myCar1.model = "Accord";
//     myCar1.year = 2023;

//     myCar.displayInfo();
//     myCar1.displayInfo();

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// // Asosiy sinf
// class Shape
// {
// public:
//     virtual void draw() const
//     {
//         cout << "Drawing a shape." << endl;
//     }
// };

// // Merosxo‘r sinf - Circle
// class Circle : public Shape
// {
// public:
//     void draw() const override
//     {
//         cout << "Drawing a circle." << endl;
//     }
// };

// // Merosxo‘r sinf - Square
// class Square : public Shape
// {
// public:
//     void draw() const override
//     {
//         cout << "Drawing a square." << endl;
//     }
// };

// int main()
// {
//     // Shape sinfi obyektlari
//     Shape shape;
//     Circle circle;
//     Square square;

//     // Polimorfizm - Massiv orqali Shape obyektlarini ishlatish
//     vector<Shape *> shapes;
//     shapes.push_back(&shape);
//     shapes.push_back(&circle);
//     shapes.push_back(&square);

//     // Har bir Shape obyekti uchun draw() metodi chaqiriladi
//     for (const auto &s : shapes)
//     {
//         s->draw();
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// class MalumotlarTuzilmasi
// {
// public:
//     MalumotlarTuzilmasi() {}

//     void qoshish(const string &kalit, const string &qiymat)
//     {
//         tuzilma[kalit] = qiymat;
//     }

//     string olish(const string &kalit) const
//     {

//         if (tuzilma.find(kalit) != tuzilma.end())
//         {
//             return tuzilma.at(kalit);
//         }
//         else
//         {
//             return "";
//         }
//     }

//     size_t xeshni_hisoblash() const
//     {
//         size_t xesh = 0;
//         for (const auto &tozalanma : tuzilma)
//         {

//             xesh ^= hash<string>{}(tozalanma.first + tozalanma.second);
//         }
//         return xesh;
//     }

// private:
//     unordered_map<string, string> tuzilma;
// };

// int main()
// {

//     MalumotlarTuzilmasi tuzilma;

//     tuzilma.qoshish("ism", "John");
//     tuzilma.qoshish("yosh", "25");
//     tuzilma.qoshish("shahar", "Toshkent");

//     size_t xesh = tuzilma.xeshni_hisoblash();
//     cout << "Tuzilma xeshi: " << xesh << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// struct XeshJadvallar
// {
//     string nomi;
//     int yil;
//     double uzunlik;
// };

// void xeshJadvallarniOzgartirish(XeshJadvallar &jadvallar)
// {
//     cout << "Xesh-jadvallarni o'zgartirish\n";
//     cout << "Yangi nomi: ";
//     getline(cin, jadvallar.nomi);

//     cout << "Yangi yili: ";
//     cin >> jadvallar.yil;

//     cout << "Yangi uzunligi: ";
//     cin >> jadvallar.uzunlik;
// }

// void xeshJadvallarniChiqarish(const XeshJadvallar &jadvallar)
// {
//     cout << "\nXesh-jadvallar ma'lumotlari:\n";
//     cout << "Nomi: " << jadvallar.nomi << "\n";
//     cout << "Yili: " << jadvallar.yil << "\n";
//     cout << "Uzunligi: " << jadvallar.uzunlik << "\n";
// }

// int main()
// {

//     XeshJadvallar jadvallar;

//     jadvallar.nomi = "Xesh 1";
//     jadvallar.yil = 2023;
//     jadvallar.uzunlik = 15.5;

//     xeshJadvallarniChiqarish(jadvallar);
//     xeshJadvallarniOzgartirish(jadvallar);
//     xeshJadvallarniChiqarish(jadvallar);

//     return 0;
// }
