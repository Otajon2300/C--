// #include <iostream>
// using namespace std;
// int countDigits(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

// int main()
// {
//     int number;
//     cout << "Natural son kiriting: ";
//     cin >> number;

//     int digitCount = countDigits(number);
//     cout << "Raqamlar soni: " << digitCount << endl;

//     return 0;
// }

// // a
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
//     int a, b, c;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     cout << a << " sonning factoriali " << factorial(a) << endl;
//     cout << b << " sonning factoriali " << factorial(b) << endl;
//     cout << c << " sonning factoriali " << factorial(c) << endl;
// }

// // b
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
//     int b;
//     int c;

//     cout << "a = ";
//     cin >> a;
//     cout << "b = ";
//     cin >> b;
//     cout << "c = ";
//     cin >> c;

//     natija(a);
//     natija(b);
//     natija(c);

//     return 0;
// }
