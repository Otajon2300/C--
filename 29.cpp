// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     const double PI = 3.14159265359;
//     const double A = 0;
//     const double B = PI / 3;
//     int m = 10;

//     double h = (B - A) / m;
//     double x = A;

//     cout << "x\t\tF(x)" << endl;

//     while (x <= B)
//     {

//         double F_x = pow(sin(x), 2) - cos(2 * x);

//         cout << x << "\t" << F_x << endl;

//         x += h;
//     }

//     return 0;
// }

// // a)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int m = 1; m <= 10; m++)
//     {
//         y += 29 / (pow(m, 2) + m + 4);
//     }

//     cout << "Natija : " << y << endl;
// }

// // b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 1;

//     for (int R = 1; R <= 25; R++)
//     {
//         y *= pow((100 - R), 2) / (log(R) + pow(2, (R - 49)));
//     }

//     cout << "Natija : " << y << endl;
// }

// // c)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int i = 1; i <= 8; i++)
//     {
//         double product = 0;

//         for (int R = 1; R <= 13; R++)
//         {
//             product += (pow(-1, i) * cos(i + R)) / (5 * i + 7 * R + i * R - 29);
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
//     double s = 0, s1 = 0, y, x = M_PI, h;
//     int i, n = 40;

//     h = (M_PI - (M_PI/5)) * 1. / n;

//     do
//     {
//         i = 1;
//         s1 = 0;
//         do
//         {
//             s1 = s1 + ((cos(2*n-1)*x)/(pow((2*n-1),2)));
//             i = i + 1;
//         } while (i <= n);
//         {
//             s = s + s1;

//             y = (pow(M_PI,2)/8)-(M_PI*abs(x)/4);
//             cout << "y(" << x << ")=" << y << endl;
//             x = x + h;
//         }
//     } while (x <= -0.1);
//     {
//         cout << "s = " << s << endl;
//     }
// }