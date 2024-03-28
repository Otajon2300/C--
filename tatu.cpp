// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b, x, z, s;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "x=";
//     cin >> x;

//     z = (pow(x, 2) * (x + 1)) / (b)-pow((sin(x + a)), 2);

//     s = pow((x * b / a), 1 / 2) - pow(cos(x + pow(b, 3)), 2);

//     cout << "Natija: z=" << z << " s=" << s << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b;
//     float y;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;

//     if (a > b)
//     {
//         y = pow((15 * pow(a, 2) + 21 * pow(b, 2)), 0.5);
//     }
//     else
//     {
//         y = pow((15 * pow(b, 2) + 21 * pow(a, 2)), 0.5);
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;

//     return main();
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int birlik;
//     double miqdor;

//     cout << "1-kilogramm\n2-milligramm\n3-gramm\n4-tonna\n5-sentner" << endl;
//     cout << "Birlik tanlang (1-5 oralig'ida): ";
//     cin >> birlik;

//     cout << "Og'irlik miqdorini kiriting: ";
//     cin >> miqdor;

//     double kilogram;

//     switch (birlik)
//     {
//     case 1:
//         kilogram = miqdor;
//         break;
//     case 2:
//         kilogram = miqdor / 1000000.0;
//         break;
//     case 3:
//         kilogram = miqdor / 1000.0;
//         break;
//     case 4:
//         kilogram = miqdor * 1000.0;
//         break;
//     case 5:
//         kilogram = miqdor * 100.0;
//         break;
//     default:
//         cout << "Noto'g'ri birlik tanlandi." << endl;
//         return 1;
//     }

//     cout << "Kilogrammda: " << kilogram << " kg" << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x = 3, y = 1.24, A, B;

//     A = tan(x * x) + pow((pow(sin(2 * x), 2) + (log(abs(x * x + 2 * y))) / (2 * x + y + 3.57)), 3);

//     B = A * x * pow((((2 * x + y) * 1.3 * pow(10, 6) * exp(x)) / (7 - pow(cos(y), 2))), 1 / 3);

//     cout << "Natija: A=" << A << " B=" << B << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float z, y, a, b, x;

//     cout << "z=";
//     cin >> z;
//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;

//     if (z > 0)
//     {
//         x = 1 / (pow(z, 2) + 2 * z);
//     }
//     else
//     {
//         x = 1 - pow(z, 3);
//     }

//     y = (2.5 * b * a * exp(-3 * x) - 4 * b * pow(x, 2)) / (log(abs(x)) + x * a);

//     cout << "Natija: y=" << y << endl;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     float x;
//     float y;

//     cout << "x ni kiriting: ";
//     cin >> x;

//     y = (x < 0) ? (tan(x) + pow(1 + abs(x - 2), 1 / 2)) : ((x >= 0 && x <= 1) ? (pow((5.12 + x), 1 / 3) + sin(M_PI)) : (3 * x + sin(M_PI * x)));

//     cout << "Natija: " << y << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float narx, m;
//     cout << "1 kg mahsulotning narxini kiriting: ";
//     cin >> narx;
//     cout << "Necha gramm mahsulot olasiz? ";
//     cin >> m;
//     cout << narx * m / 1000 << " pul to'lashingiz kerak!";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float z, x, d, a, y;

//     cout << "z=";
//     cin >> z;
//     cout << "a=";
//     cin >> a;
//     cout << "d=";
//     cin >> d;

//     x = (z > 0) ? (-3 * z) : (pow(z, 2));

//     y = 2 * x * (a * sin(x) + d * exp(-x - 3));

//     cout << "Natija Y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int m;
//     float a, b, z, x, y;

//     cout << "son kiriting (1-3) = ";
//     cin >> a;
//     cout << "x = ";
//     cin >> x;
//     switch (m)
//     {
//     case 1:
//         a = 6;
//         b = 3.2;
//         z = exp(1.5 * a * x);
//         break;
//     case 2:
//         a = 3;
//         b = 6;
//         z = exp(x);
//         break;
//     case 3:
//         a = 2.7;
//         b = 1.8;
//         z = 1.5;
//         break;

//     default:
//         break;
//     }

//     if (x <= a)
//     {
//         y = 3.5 * pow((sin(pow((b * x + z), 3))), 2) - exp(3.5 * a);
//     }
//     else if (a < x <= pow(b, 2.5))
//     {
//         y = log(a + pow(b, 3) * x) + a;
//     }
//     else
//     {
//         y = pow((cos(pow(a, b) + x * z)), 2) + pow(a, 2);
//     }

//     cout << "y=" << y;
// }

// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     if (-pow(x,2)+2>=y && y>=0)

//     {
//         cout << "Kiritilgan nuqta bo'yalgan soha ichida yotadi" << endl;
//     }
//     else
//     {
//         cout << "Kiritilgan nuqta bo'yalgan soxada emas" << endl;
//     }

//     return main();
// }

// #include <iostream>
// using namespace std;

// int main() {
//     double V1, V2, S, T;

//     cout << "Birinchi avtomobil tezligi (V1 km/s): ";
//     cin >> V1;

//     cout << "Ikkinchisi avtomobil tezligi (V2 km/s): ";
//     cin >> V2;

//     cout << "Ular orasidagi masofa (S km): ";
//     cin >> S;

//     // Agar V1 katta V2 dan, ularning orasidagi masofa qanday bo'lishini topamiz.
//     if (V1 > V2) {
//         T = S / (V1 - V2);
//         cout << "Ular orasidagi masofa " << T << " soatdan keyin bo‘ladi." << endl;
//     } else {
//         cout << "Birinchi avtomobil ikkinchisidan tezroq bo‘lishi kerak." << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x, Z;

//     cout << "x=";
//     cin >> x;

//     if (x > 3)
//     {
//         Z = pow((abs(x / (x + 1)) - pow(x, 0.5)), 0.5);
//     }
//     else
//     {
//         Z = pow((log(abs(x)) / x), 3.0);
//     }

//     cout << "Natija : Z=" << Z << endl;
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

//     if (pow((x - 2), 2.0) + pow(y, 2.0) <= 4 && pow(x, 2.0) + pow(y, 2.0) <= 1)
//     {

//         cout << "Kiritilgan nuqta berilgan shartlarni qanoatlantiradi" << endl;
//     }
//     else
//     {
//         cout << "Kiritilgan nuqta berilgan shartlarga mos kelmaydi" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float d, b, c;
//     float x, a;

//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;

//     a = (pow(b, 2.0) - pow(c, 2.0)) / (d);

//     if (a > 0)
//     {
//         x = pow(a, 3.0) / (3 + a);
//     }
//     else
//     {
//         x = pow(abs((a * a + 2) / (1 + a)), 0.5);
//     }

//     cout << "Natija X=" << x << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     string ism[7] = {
//         "A",
//         "S",
//         "A",
//         "L",
//         "X",
//         "O",
//         "N"};

//     for (int i = 0; i < 7; i++)
//     {
//         cout << ism[i];
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int FindMax(int arr[], int size, int index, int max)
// {
//     if (index < size)
//     {
//         if (arr[index] > max)
//         {
//             max = arr[index];
//         }
//         return FindMax(arr, size, index + 1, max);
//     }
//     return max;
// }

// int main()
// {
//     int size;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> size;

//     if (size <= 0)
//     {
//         cout << "Noto'g'ri uzunlik kiritildi!" << endl;
//         return 1;
//     }

//     int *arr = new int[size];

//     cout << "Massivni elementlarini kiriting: ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int max = arr[0];
//     max = FindMax(arr, size, 0, max);

//     cout << "Eng katta son: " << max << endl;

//     delete[] arr;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int interpolationSearch(int arr[], int n, int x)
// {
//     int low = 0;
//     int high = n - 1;

//     while (low <= high && x >= arr[low] && x <= arr[high])
//     {
//         if (low == high)
//         {
//             if (arr[low] == x)
//             {
//                 return low;
//             }
//             return -1;
//         }

//         int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (x - arr[low]);

//         if (arr[pos] == x)
//         {
//             return pos;
//         }

//         if (arr[pos] < x)
//         {
//             low = pos + 1;
//         }
//         else
//         {
//             high = pos - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int x;
//     cout << "Qidiriladigan elementni kiriting: ";
//     cin >> x;

//     int index = interpolationSearch(arr, n, x);

//     if (index != -1)
//     {
//         cout << "Element topildi indeksi: " << index << endl;
//     }
//     else
//     {
//         cout << "Element topilmadi" << endl;
//     }

//     return 0;
// }

// ismni chiqarish vertikal
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size = 6;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || (row == 0 || row == size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if ((row == 0 || row == size / 2 || row == size - 1) || (col == 0 && row <= size / 2) || (col == size - 1 && row >= size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || (row == 0 || row == size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || row == size - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if (col == row || col == size - 1 - row)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if ((col == 0 || col == size - 1 || row == 0 || row == size - 1) && !(row == 0 && col == 0) && !(row == 0 && col == size - 1) && !(row == size - 1 && col == 0) && !(row == size - 1 && col == size - 1))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     for (int row = 0; row < size; row++)
//     {
//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || col == row)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     cout << "\n"
//          << endl;

//     return 0;
// }

// ismni chiqarish gorizaltal

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size = 6;

//     for (int row = 0; row < size; row++)
//     {

//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || (row == 0 || row == size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if ((row == 0 || row == size / 2 || row == size - 1) || (col == 0 && row <= size / 2) || (col == size - 1 && row >= size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || (row == 0 || row == size / 2))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || row == size - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if (col == row || col == size - 1 - row)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if ((col == 0 || col == size - 1 || row == 0 || row == size - 1) && !(row == 0 && col == 0) && !(row == 0 && col == size - 1) && !(row == size - 1 and col == 0) && !(row == size - 1 and col == size - 1))
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << "  ";

//         for (int col = 0; col < size; col++)
//         {
//             if (col == 0 || col == size - 1 || col == row)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }
