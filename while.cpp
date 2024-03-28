// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     const double PI = 3.14159265359;
//     const double A = PI / 8;
//     const double B = PI / 4;
//     int m = 10;

//     double h = (B - A) / m;
//     double x = A;

//     cout << "x\t\tF(x)" << endl;

//     while (x <= B)
//     {

//         double F_x = sin(1 / x) + 2;

//         cout << x << "\t" << F_x << endl;

//         x += h;
//     }

//     return 0;
// }

// a)
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

//     for (int i = 1; i <= 2; i++)
//     {
//         double product = 1.0;

//         for (int j = 1; j <= 5; j++)
//         {
//             product *= (i+j);
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     double s = 0, s1 = 0, y, x = -2, h;
//     int i, n = 40;

//     h = ((-0.1) - (-2)) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + (pow(-1, i) * ((pow((1 + x), 2)) / i));
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = log(1 / (2 + 2 * x + pow(x, 2)));
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= -0.1);
//     {
//         cout << "s = " << s << endl;
//     }
// }