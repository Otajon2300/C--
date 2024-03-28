// #include <iostream>
// using namespace std;

// int main() {
//     int n, a, max, s = 0;

//     cout << "N ta son: ";
//     cin >> n;

//     cin >> max;

//     for (int i = 1; i < n; i++) {
//         cin >> a;

//         if (a > max) {
//             max = a;
//             s++;
//         } else {
//             max = a;
//         }
//     }

//     cout << "Qo'shnilaridan katta bo'lgan sonlar miqdori: " << s << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;

//     do
//     {
//         cout << "n ni bering (7 dan katta): ";
//         cin >> n;
//     } while (n <= 7);

//     bool found = false;
//     for (int a = 0; 3 * a <= n; ++a)
//     {
//         if ((n - 3 * a) % 5 == 0)
//         {
//             int b = (n - 3 * a) / 5;
//             if (b >= 0 && (b % 2 == 0))
//             {
//                 cout << "a = " << a << ", b = " << b << " yig'indisi = " << n << endl;
//                 found = true;
//                 break;
//             }
//         }
//     }

//     if (!found)
//     {
//         cout << "Bu son uchun 3 va 5 ni qo'llab-quvvatlaydigan juft a va b topilmadi." << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int birinchison, ikkinchison;

    while (true)
    {
        int num;
        cout << "Son kiriting (0 - ketma-ketlikni to'xtatadi): ";
        cin >> num;

        if (num == 0)
        {
            break;
        }

        if (num > 0)
        {
            count++;
            if (count == 1)
            {
                birinchison = num;
            }
            else if (count == 2)
            {
                ikkinchison = num;
                break;
            }
        }
    }

    if (count >= 2)
    {
        cout << "Kiritilgan ikkita musbat son: " << birinchison << " va " << ikkinchison << endl;
    }
    else
    {
        cout << "Kiritilgan sonlar yetarlicha emas" << endl;
    }

    return 0;
}
