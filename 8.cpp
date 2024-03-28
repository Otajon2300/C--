// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     float a;
//     float S = 0;

//     cout << " n = ";
//     cin >> n;
//     cout << " m = ";
//     cin >> m;
//     cout << " a = ";
//     cin >> a;

//     for (int i = 4; i <= n; i++)
//     {
//         for (int j = 2; j <= m; j++)
//         {
//             S = pow(a, i) + j;
//         }
//     }

//     cout << "Natija : " << S << endl;
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
//     int n;
//     float S1 = 0;
//     float S2 = 0;

//     cout << "n = ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         S1 += pow(-1, (i + 1)) * factorial(i);
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         S2 += pow(-1, i) * factorial(2 * i);
//     }

//     cout << "Natija:"
//          << "\na) s=" << S1 << "\nb) s=" << S2 << endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     int a = 0;
//     int sum = 0;

//     cout << "Butun sonlarni kiritish: " << endl;

//     while (true)
//     {
//         cin >> number;

//         if (number == 0)
//         {
//             break;
//         }

//         else if (number % 7 == 0 && number % 5 != 0)
//         {
//             a++;
//         }
//         if (number < 0)
//         {
//             sum += number;
//         }
//     }

//     cout << "7 ga qoldiqsiz bo'linadigan va 5 ga qoldiqsiz bo'linmagan sonlar soni: " << a << endl;
//     cout << "Manfiy sonlar yig'indisi: " << sum << endl;

//     return 0;
// }