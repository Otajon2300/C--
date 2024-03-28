// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     float x = 0.1, y = 3.5, l = 4.6 * pow(10, -2.0);
//     float p;

//     p = (pow(sin(x), 3.0) + log(2 * y + 3 * x)) / (pow(l, 4.0) + pow(x, 0.5));

//     cout << "Natija : p=" << p << endl;
// }

// Berilgan katetlari bo‘yicha to‘g‘ri burchakli uchburchakning perimetri va yuzasi hisoblansin.
// #include <iostream>
// #include <math.h>
// using namespace std;
// double perimetr(double a, double b)
// {
//     double c = sqrt(a * a + b * b);
//     return a + b + c;
// }

// double yuza(double a, double b)
// {
//     return 0.5 * a * b;
// }

// int main()
// {
//     double a, b;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     if (a <= 0 || b <= 0)
//     {
//         cout << "uchburchakning tomoni noto'g'ri kiritildi." << endl;
//     }
//     else
//     {
//         double perimetri = perimetr(a, b);
//         double yuzasi = yuza(a, b);

//         cout << "Uchburchakning perimetri : " << perimetri << endl;
//         cout << "Uchburchakning yuzasi : " << yuzasi << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     float x;
//     float Z;

//     cout << "x=";
//     cin >> x;

//     if (x > 3)
//     {
//         Z = pow((abs(x / (x + 1)) - pow(x, 0.5)), 0.5);
//     }
//     else if (x <= 3)
//     {
//         Z = pow((log(abs(x)) / x), 3.0);
//     }

//     cout << "Natija Z=" << fixed << setprecision(3) << Z << endl;

//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int son;
//     int count = 0;
//     long long product = 1;

//     cout << "Istalgan son kiriting (oxiri 0 bilan tugashi kerak): ";
//     cin >> son;

//     while (son != 0)
//     {
//         if (son > 0)
//         {
//             count++;
//             product *= son;
//         }
//         cin >> son;
//     }

//     if (count == 0)
//     {
//         cout << "Ketma-ketlikda musbat sonlar mavjud emas." << endl;
//     }
//     else
//     {
//         double geometric = pow(product, 1.0 / count);
//         cout << "Ketma-ketlikdagi musbat sonlar o'rta geometrik qiymati: " << geometric << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int D, M;
//     cout << "Kuning sonini kiriting (1-31): ";
//     cin >> D;
//     cout << "Oyning raqamini kiriting (1-12): ";
//     cin >> M;

//     bool kabisa = false;

//     switch (M)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         if (D >= 1 && D <= 31)
//         {
//             break;
//         }

//         kabisa = true;
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         if (D >= 1 && D <= 30)
//         {
//             break;
//         }

//         kabisa = true;
//         break;
//     case 2:
//         if ((D >= 1 && D <= 28) || (D == 29 && !kabisa))
//         {

//             break;
//         }
//         if (D == 29 && kabisa)
//         {

//             kabisa = false;
//             break;
//         }

//         kabisa = true;
//         break;
//     default:
//         cout << "Noto'g'ri oy raqami kiritildi." << endl;
//         return 1;
//     }

//     if (kabisa)
//     {
//         cout << "Kabisa bo'lmagan yil." << endl;
//     }
//     else
//     {
//         cout << "Kabisa yil." << endl;
//     }

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double x;
//     cout << "x=";
//     cin >> x;

//     double a = 0;
//     double b = 1;

//     for (int i = 1; i < 10; i++)
//     {
//         a += (pow(fabs(7 - x), i)) / (pow(i - 3, 5) != 0 ? pow(i - 3, 5) : 1);
//         b = 1;
//         for (int n = i; n < 18; n++)
//         {
//             b *= (pow(n, 3) - 8) / (n - 12 != 0 ? (n - 12) : 1);
//         }
//     }

//     double result = a * b;
//     cout << "Natija: W=" << result << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n;
//     double x, y;

//     cout << "n=";
//     cin >> n;
//     cout << "x=";
//     cin >> x;

//     for (int i = 1; i <= n; i += 2)
//     {
//         y += cos(i * x) / pow(i, 2);
//     }

//     cout << "Natija:" << y << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int rowStart[] = {1, 2, 9, 10};
//     int rowStep[] = {2, 2, 2, 2};

//     int num_rows = 4;
//     int num_columns = 4;

//     for (int i = 0; i < num_rows; i++)
//     {
//         for (int j = 0; j < num_columns; j++)
//         {
//             cout << rowStart[i] + j * rowStep[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// int main()
// {

//     int massiv[9] = {5, 12, 8, 3, 9, 20, 7, 15, 10};

//     cout << "Boshlang'ich massiv: ";
//     for (int i = 0; i < 9; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     int maksimal = massiv[0];
//     int minimal = massiv[0];

//     for (int i = 1; i < 9; ++i)
//     {
//         if (massiv[i] > maksimal)
//         {
//             maksimal = massiv[i];
//         }
//         else if (massiv[i] < minimal)
//         {
//             minimal = massiv[i];
//         }
//     }

//     for (int i = 0; i < 9; ++i)
//     {
//         if (massiv[i] == maksimal)
//         {
//             massiv[i] = minimal;
//         }
//         else if (massiv[i] == minimal)
//         {
//             massiv[i] = maksimal;
//         }
//     }

//     cout << "\nAlmashtirilgan massiv: ";
//     for (int i = 0; i < 9; ++i)
//     {
//         cout << massiv[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main()
// {
//     const int n = 10;
//     srand(time(0));
//     int X[n];
//     int Y[n];
//     int S[n];
//     int soni = 0;

//     for (int i = 0; i < 10; i++)
//     {
//         X[i] = rand() % 100;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         Y[i] = rand() % 100;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (X[i] == Y[j])
//             {
//                 S[soni] = X[i];
//                 soni++;
//             }
//         }
//     }

//     cout << "X massivi: ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << X[i] << " ";
//     }

//     cout << "\nY massivi: ";
//     for (int i = 0; i < n; ++i)
//     {
//         cout << Y[i] << " ";
//     }

//     cout << "\nS massivi: ";
//     for (int i = 0; i < soni; ++i)
//     {
//         cout << S[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <cmath>

// using namespace std;

// int main()
// {

//     string ikkilik_son;

//     cout << "Ikkilik sanoq sistemasidagi kasr son kiriting : ";
//     cin >> ikkilik_son;

//     size_t dot_position = ikkilik_son.find('.');

//     int sakkizlik_son_buten = stoi(ikkilik_son.substr(0, dot_position), 0, 2);

//     double sakkizlik_son_qoldiq = 0;
//     for (size_t i = dot_position + 1; i < ikkilik_son.length(); ++i)
//     {
//         sakkizlik_son_qoldiq += (ikkilik_son[i] - '0') / pow(2, i - dot_position);
//     }

//     cout << "Sakkizlik sanoq sistemasidagi son: " << (sakkizlik_son_buten + sakkizlik_son_qoldiq) << endl;

//     return 0;
// }

// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// using namespace std;

// int main()
// {
//     srand(time(0));

//     const int rows = 5;
//     const int columns = 4;

//     int massiv[rows][columns];

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < columns; ++j)
//         {
//             massiv[i][j] = rand() % 100;
//         }
//     }

//     cout << "Massiv : \n";
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < columns; ++j)
//         {
//             cout << massiv[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     for (int j = 0; j < columns; ++j)
//     {
//         for (int i = 0; i < rows - 1; ++i)
//         {
//             int maxIndex = i;
//             for (int k = i + 1; k < rows; ++k)
//             {
//                 if (massiv[k][j] > massiv[maxIndex][j])
//                 {
//                     maxIndex = k;
//                 }
//             }

//             int temp = massiv[i][j];
//             massiv[i][j] = massiv[maxIndex][j];
//             massiv[maxIndex][j] = temp;
//         }
//     }

//     cout << "Oxirgi ustunlarning elementlari kamayish tartibida saralandi:\n";
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < columns; ++j)
//         {
//             cout << massiv[i][j] << "\t";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <ctime>
// #include <cstdlib>

// using namespace std;

// int main() {
//     srand(time(0));

//     const int rows = 5;
//     const int columns = 4;

//     int massiv[rows][columns];

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < columns; ++j) {
//             massiv[i][j] = rand() % 100;
//         }
//     }

//     cout << "Massiv : \n";
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < columns; ++j) {
//             cout << massiv[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     // Oxirgi ustunlarni o'sish tartibida saralash
//     for (int j = 0; j < columns; ++j) {
//         for (int i = 0; i < rows - 1; ++i) {
//             int maxIndex = i;
//             for (int k = i + 1; k < rows; ++k) {
//                 if (massiv[k][j] > massiv[maxIndex][j]) {
//                     maxIndex = k;
//                 }
//             }
//             // O'zgaruvchilarni almashtirish
//             int temp = massiv[i][j];
//             massiv[i][j] = massiv[maxIndex][j];
//             massiv[maxIndex][j] = temp;
//         }
//     }

//     cout << "Oxirgi ustunlarning elementlari o'sish tartibida saralandi:\n";
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < columns; ++j) {
//             cout << massiv[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>

// const int size = 3;

// void fillSpiralMatrix(int matrix[size][size])
// {
//     int num = size * size;
//     int startRow = 0, endRow = size - 1;
//     int startCol = 0, endCol = size - 1;

//     while (startRow <= endRow && startCol <= endCol)
//     {
//         for (int i = endCol; i >= startCol; --i)
//         {
//             matrix[startRow][i] = num--;
//         }
//         ++startRow;

//         for (int i = startRow; i <= endRow; ++i)
//         {
//             matrix[i][startCol] = num--;
//         }
//         ++startCol;

//         for (int i = startCol; i <= endCol; ++i)
//         {
//             matrix[endRow][i] = num--;
//         }
//         --endRow;

//         for (int i = endRow; i >= startRow; --i)
//         {
//             matrix[i][endCol] = num--;
//         }
//         --endCol;
//     }
// }

// void printMatrix(int matrix[size][size])
// {
//     for (int i = 0; i < size; ++i)
//     {
//         for (int j = 0; j < size; ++j)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int matrix[size][size] = {{0}};
//     fillSpiralMatrix(matrix);

//     cout << "Spiral Matritsa:" << endl;
//     printMatrix(matrix);

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <cctype