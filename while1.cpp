#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    
    double A = M_PI / 4;
    double B = M_PI / 2;
    int m = 10;

    double h = (B - A) / m;
    double x = A;

    cout << "x\t\tF(x)" << endl;

    while (x <= B)
    {

        double F_x = 1/tan(x);

        cout << x << "\t" << F_x << endl;

        x += h;
    }

    return 0;
}

// //a)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int m = 1; m <= 10; m++)
//     {
//         y += 5/(pow(m,2)+m+4);
//     }

//     cout << "Natija : " << y << endl;
// }

// b)
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float y = 0;

//     for (int R = 1; R <= 15; R++)
//     {
//         y += (pow((100 - R), 2)) / (log(R) + pow(5, -R));
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

//     for (int i = 1; i <= 13; i++)
//     {
//         double product = 0;

//         for (int R = 1; R <= 4; R++)
//         {
//             product += (pow(-1, i) * cos(i + R) + 5) / (5 * i + pow(7, -R) + pow(i, -R));
//         }
//         y += product;
//     }

//     cout << "Natija : " << y << endl;
// }

#include <iostream>
#include <math.h>
using namespace std;

unsigned long long factorial(int n)
{
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
int main()
{
    double s = 0, s1 = 0, y, x = 2, h;
    int i, n = 40;

    h = (2 - 1) * 1. / n;

    do
    {
        i = 1;
        s1 = 0;
        do
        {
            s1 = s1 + pow(x, n) / factorial(n);
            i = i + 1;
        } while (i <= n);
        {
            s = s + s1;

            y = exp(x);
            cout << "y(" << x << ")=" << y << endl;
            x = x + h;
        }
    } while (x <= 2);
    {
        cout << "s = " << s << endl;
    }
}