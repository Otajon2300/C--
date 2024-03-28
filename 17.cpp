// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main()
// {

//     srand(time(0));

//     double numbers[80];
//     int n;

//     for (int i = 0; i < 80; i++)
//     {
//         numbers[i] = rand() % 100;
//     }

//     cout << "son kiriting: ";
//     cin >> n;

//     double minDifference = abs(numbers[0] - n);
//     int index = 0;

//     for (int i = 1; i < 80; i++)
//     {
//         double difference = abs(numbers[i] - n);
//         if (difference < minDifference)
//         {
//             minDifference = difference;
//             index = i;
//         }
//     }

//     for (int i = 0; i < 80; i++)
//     {
//         cout << " " << numbers[i];
//     }

//     cout << "\nEng yaqini tartib raqami: " << index << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     int p, q;

//     cout << "O'nlik sanoqdagi sonni kiriting (p): ";
//     cin >> p;

//     cout << "2 dan 16 gacha bo'lgan sanoqni (q) kiriting: ";
//     cin >> q;

//     if (q < 2 || q > 16)
//     {
//         cerr << "Sanoqda (q) 2 dan 16 gacha bo'lishi kerak." << endl;
//         return 1;
//     }

//     string natija = "";

//     while (p > 0)
//     {
//         int qoldiq = p % q;

//         char belgi = (qoldiq < 10) ? ('0' + qoldiq) : ('A' + qoldiq - 10);

//         natija = belgi + natija;

//         p /= q;
//     }

//     cout << "Natija: " << natija << endl;

//     return main();
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int k;

//     cout << "k=";
//     cin >> k;

//     for (int i = 1; i <= k; i++)
//     {
//         if (i % 2 == 0 && i % 4 != 0)
//         {
//             sum += i;
//         }
//     }

//     cout << "1 dan 100 oralig'idagi ketma-ketlikdagi to'rtga karrali bo'lmagan juft sonlar yig'indisi: " << sum << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int maxOfThree(int a, int b, int c)
// {
//     int max = a;

//     if (b > max)
//     {
//         max = b;
//     }

//     if (c > max)
//     {
//         max = c;
//     }

//     return max;
// }

// int main()
// {
//     int a, b, c;
//     int a1, b1, c1;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     cout << "a1 = ";
//     cin >> a1;
//     cout << "b1 = ";
//     cin >> b1;
//     cout << "c1 = ";
//     cin >> c1;

//     int max1 = maxOfThree(a, b, c);
//     int max2 = maxOfThree(a1, b1, c1);

//     cout << "Uchta sondan birinchi guruhdagi eng katta son: " << max1 << endl;
//     cout << "Uchta sondan ikkinchi guruhdagi eng katta son: " << max2 << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// double h(double x)
// {
//     return 0.2;
// }

// double y(double a, double b, double x)
// {
//     if (1 / x < a)
//     {
//         return pow(27.4 * b * x + exp(a * x), 0.5);
//     }
//     else
//     {
//         return atan(b * x * x) - log(a * x);
//     }
// }

// int main()
// {
//     double a = 1.4;
//     double b = 3.8;
//     double x1 = 0.5;
//     double xn = 1.7;

//     for (double x = x1; x <= xn; x += h(x))
//     {
//         double result = y(a, b, x);
//         cout << "x = " << x << ", y = " << result << endl;
//     }

//     return 0;
// }
