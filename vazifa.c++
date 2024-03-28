// Berilgan float turidagi to’plamning 2 ta juft elementi ko’paytmasidan 2- to’plamni, bo’linmasidan
// 3- to’plamni hosil qiluvchi va ularni ekranga chiqaruvchi dastur tuzing. Ikkala to’plamdan ham bir xil
// qiymatli elemetlar o’chirilib, saralangan to’plam hosil qilinsin hamda uning qiymatlari ekranga chiqarilsin.

// #include <iostream>
// #include <set>
// #include <algorithm>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     multiset<float> nums;
//     set<float> evens;

//     srand(time(0));
//     int n;
//     cout << "Iltimos, to'plam uzunligini kiriting: ";
//     cin >> n;
//     cout << "Iltimos, to'plam elementlarini kiritish uchun Enter tugmasini bosing:" << endl;
//     cin.ignore();
//     for (int i = 0; i < n; ++i)
//     {
//         nums.insert(static_cast<float>(rand()) / RAND_MAX);
//     }

//     float sum = 0;
//     for (auto it = nums.begin(); it != nums.end(); ++it)
//     {
//         if (*it * 10 < RAND_MAX && static_cast<int>(*it * 10) % 2 == 0)
//         {
//             evens.insert(*it);
//             sum += *it;
//         }
//     }
//     cout << "Juft sonlar ko'paytmasi: " << evens.size() * 2 << endl;

//     multiset<float> sorted_nums(nums.begin(), nums.end());
//     float sum2 = 0, sum3 = 0;
//     for (auto it = sorted_nums.begin(); it != sorted_nums.end(); ++it)
//     {
//         if (*it * 10 < RAND_MAX && (static_cast<int>(*it * 10) % 2 == 0 || static_cast<int>(*it * 10) % 3 == 0))
//         {
//             sum2 += *it;
//         }
//         if (*it * 10 < RAND_MAX && static_cast<int>(*it * 10) % 2 == 0 && static_cast<int>(*it * 10) % 3 == 0)
//         {
//             sum3 += *it;
//         }
//     }

//     cout << "2- to'plam: " << sum2 << endl;
//     cout << "3- ga bo'linadigan sonlar yig'indisi: " << sum3 << endl;

//     return 0;
// }

// Berilgan to’plam bo’sh bo’lsa, 5 xil dublikat elementlar bilan to’ldirilsin va
// tartiblanmagan holatda ekranga chop etilsin. Aks holda to’plamning 5-positsiyasidan boshlab,
// 4 ta element qo’shilsin va ekranga chop etilsin.

// #include <iostream>
// #include <map>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     multimap<float, int> nums;
//     srand(time(0));

//     int n;
//     cout << "Iltimos, to'plam uzunligini kiriting: ";
//     cin >> n;

//     if (n == 0)
//     {
//         for (int i = 0; i < 5; ++i)
//         {
//             nums.insert(make_pair(static_cast<float>(rand()) / RAND_MAX, i));
//         }
//         cout << "To'plam tartiblanmagan holatda: " << endl;
//         for (auto it = nums.begin(); it != nums.end(); ++it)
//         {
//             cout << it->first << endl;
//         }
//     }
//     else
//     {
//         map<float, int> sorted_nums;
//         for (int i = 0; i < n; ++i)
//         {
//             sorted_nums.insert(make_pair(static_cast<float>(rand()) / RAND_MAX, i));
//         }
//         if (n < 5)
//         {
//             for (int i = n; i < 5; ++i)
//             {
//                 sorted_nums.insert(make_pair(sorted_nums.begin()->first, i));
//             }
//         }
//         else if (n > 5)
//         {
//             auto it = sorted_nums.begin();
//             for (int i = 0; i < 4; ++i)
//             {
//                 ++it;
//             }
//             sorted_nums.erase(it, sorted_nums.end());
//         }
//         cout << "To'plam tartiblangan holatda: " << endl;
//         for (auto it = sorted_nums.begin(); it != sorted_nums.end(); ++it)
//         {
//             cout << it->first << endl;
//         }
//     }

//     return 0;
// }

// Navbat eng kichik elementi topilsin va uning o‘rniga 0 joylashtirilsin.

// #include <iostream>
// #include <queue>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     queue<int> myQueue;
//     srand(time(NULL));

//     for (int i = 0; i < 10; i++)
//     {
//         int num = rand() % 100 + 1;
//         myQueue.push(num);
//     }

//     const int &k = myQueue.front();
//     int min = k;
//     int size = myQueue.size();
//     for (int i = 0; i < size; i++)
//     {
//         if (myQueue.front() < min)
//         {
//             min = myQueue.front();
//         }
//         myQueue.push(myQueue.front());
//         myQueue.pop();
//     }

//     cout << "Navbatning haqiqiy elementlari: \n";
//     size = myQueue.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << myQueue.front() << " ";
//         myQueue.push(myQueue.front());
//         myQueue.pop();
//     }
//     cout << endl;

//     size = myQueue.size();
//     for (int i = 0; i < size; i++)
//     {
//         if (myQueue.front() == min)
//         {
//             myQueue.pop();
//             myQueue.push(0);
//         }
//         else
//         {
//             myQueue.push(myQueue.front());
//             myQueue.pop();
//         }
//     }
//     cout << "Navbatning almashtirilganidan so'ng elementlari: \n";
//     size = myQueue.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout << myQueue.front() << " ";
//         myQueue.pop();
//     }
//     cout << endl;

//     return 0;
// }

// 4 Berilgan float turidagi to‘plam qiymatlarining butun(nuqtadan oldin)
// qismi 2- to‘plamga, kasr(nuqtadan keyin) qismi 3- to‘plamga joylashtiruvchi
// va ularni ekranga chiqaruvchi dastur tuzing. Ikkala to‘plamdan ham bir xil
// qiymatli elemetlar o‘chirilib Saralangan to‘plam hosil qilinsin hamda uning
// qiymatlari ekranga chiqarilsin.

// #include <iostream>
// #include <set>
// #include <string>
// #include <fstream>
// using namespace std;
// int main()
// {
//     set<float> initial;
//     set<int> butun;
//     set<float> kasr;
//     int n, intpart;
//     float tmp, floatpart;
//     cout << "Elementlar soni : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << i + 1 << "- element : ";
//         cin >> tmp;
//         initial.insert(tmp);
//     }
//     for (set<float>::const_iterator p = initial.begin(); p != initial.end(); p++)
//     {
//         tmp = *p;
//         intpart = (int)tmp;
//         floatpart = tmp - intpart;
//         butun.insert(intpart);
//         if (floatpart != .0)
//         {
//             kasr.insert(floatpart);
//         }
//     }
//     set<float>::value_compare sortedKasr = kasr.value_comp();
//     set<int>::value_compare sortedButun = butun.value_comp();
//     cout << "Kasr Qismi\n";
//     for (set<float>::const_iterator p = kasr.begin(); p != kasr.end(); p++)
//     {
//         tmp = *p;
//         cout << tmp << endl;
//     }
//     cout << "Butun Qismi\n";
//     int itmp;
//     for (set<int>::const_iterator p = butun.begin(); p != butun.end(); p++)
//     {
//         itmp = *p;
//         cout << itmp << endl;
//     }
//     return 0;
// }

// 4.Talabalar haqida (familiya, ismi, sharfi, fani, guruhi va bahosi)
// to‘plam berilgan. Ixtiyoriy qidirilayotgan guruhda har bir fandan nechta
// talaba 5 bahoga, nechtasi 4 bahoga, nechtasi 3 bahoga va nechtasi
// o‘zlashtira olamayotganligi aniqlovchi va bahosi bo‘yich talabalarni
// qidiruvchi dastur tuzing

// #include <iostream>
// #include <set>
// using namespace std;
// class Student
// {
// private:
//     string name;
//     string surname;
//     string subject;
//     string group;
//     int grade;

// public:
//     void setAttr()
//     {
//         cout << "\n\nIsmi : ";
//         cin >> this->name;
//         cout << "Familiyasi : ";
//         cin >> this->surname;
//         cout << "Fani  : ";
//         cin >> this->subject;
//         cout << "Gruhi : ";
//         cin >> this->group;
//         cout << "Baxosi : ";
//         cin >> this->grade;
//     }
//     int getGrade()
//     {
//         return this->grade;
//     }
//     void printAttr()
//     {
//         cout << "  " << surname << " " << name << "   " << subject << "  gruxi - " << group << " baxosi  " << grade << endl;
//     }
// };

// int main()
// {
//     int n, grd[6] = {0, 0, 0, 0, 0, 0};
//     multiset<int> grades;
//     cout << "Talabalar soni : ";
//     cin >> n;
//     Student students[n];
//     for (int i = 0; i < n; i++)
//     {
//         students[i].setAttr();
//         grades.insert(students[i].getGrade());
//     }
//     int tmp_grade;
//     for (set<int>::const_iterator p = grades.begin(); p != grades.end(); p++)
//     {
//         tmp_grade = *p;
//         grd[tmp_grade]++;
//     }
//     cout << "\n";
//     for (int i = 5; i >= 0; i--)
//     {
//         if (grd[i] != 0)
//         {
//             if (i > 2)
//             {
//                 cout << i << "-baxosi(o`tgan) - " << grd[i] << endl;
//             }
//             else
//             {
//                 cout << i << "-baxosi(o`tolmagan) - " << grd[i] << endl;
//             }
//         }
//     }
//     cout << "Baxosi bo`yicha qidirish : ";
//     cin >> tmp_grade;
//     for (int i = 0; i < n; i++)
//     {
//         if (students[i].getGrade() == tmp_grade)
//         {
//             students[i].printAttr();
//         }
//     }
// }

// 4 Navbatda yuvilish uchun N ta tarelka turibdi. Ichida yuvilganlari ham
// bor. Har bir tarelkaga 1 minutdan vaqt ketmoqda. Lekin tarelka
// yuvuvchining vaqti kam. U tarelkalarni N/2 vaqt birligida yuvib
// tugatmoqchi. Tarelka yuvuvchiga yordam beradigan dastur tuzing
// #include <iostream>
// #include <stack>

// using namespace std;

// int main()
// {
//     int N;
//     cout << "Tarelkalar sonini kiriting: ";
//     cin >> N;

//     stack<int> tarelkalar;
//     for (int i = 1; i <= N; i++)
//     {
//         tarelkalar.push(i);
//     }

//     int vaqt = 0;
//     while (!tarelkalar.empty())
//     {
//         int t1 = tarelkalar.top();
//         tarelkalar.pop();

//         if (!tarelkalar.empty())
//         {
//             int t2 = tarelkalar.top();
//             tarelkalar.pop();

//             vaqt += 1;

//             cout << "Tarelka #" << t1 << " va #" << t2 << " yuvildi (vaqti: " << vaqt << " minut)" << endl;
//         }
//     }

//     return 0;
// }

// 4 Sinf xonalari haqida ma’lumotlar berilgan (class Classroom). Ixtiyoriy sinfxonani no meri va band yoki band emasligi bo‘yicha qidirib topuvchi dastur
// tuzing

// #include <iostream>
// #include <array>

// using namespace std;

// class Classroom
// {
// public:
//     int number;
//     bool is_band;
// };

// int main()
// {
//     const int CLASSROOM_COUNT = 5;
//     array<Classroom, CLASSROOM_COUNT> classrooms = {
//         {{101, true}, {102, false}, {103, false}, {104, true}, {105, true}}};

//     int search_number;
//     bool search_is_band;

//     cout << "Sinfxona raqamini kiriting: ";
//     cin >> search_number;

//     cout << "Band yoki band emasligini kiriting (1 - band, 0 - band emas): ";
//     cin >> search_is_band;

//     bool found = false;
//     for (const Classroom &c : classrooms)
//     {
//         if (c.number == search_number && c.is_band == search_is_band)
//         {
//             found = true;
//             cout << "Sinfxona topildi: #" << c.number << ", " << (c.is_band ? "band" : "band emas") << endl;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout << "Sinfxona topilmadi." << endl;
//     }

//     return 0;
// }

// 4. Vector elementlari ichidan ixtiyoriy qidirilga son bor yo‘qligini aniqlash va
// ushu sonni o‘chiruvchi funksiyalari yarating.

// #include <bits/stdc++.h>
// #include <vector>

// using namespace std;

// void findAndRemove(vector<int> &vec, int num)
// {
//     for (auto it = vec.begin(); it != vec.end(); ++it)
//     {
//         if (*it == num)
//         {
//             vec.erase(it);
//             cout << num << " o'chirildi" << endl;
//             return;
//         }
//     }
//     cout << num << " topilmadi" << endl;
// }

// void removeAll(vector<int> &vec, int num)
// {
//     vec.erase(remove(vec.begin(), vec.end(), num), vec.end());
//     cout << num << " o'chirildi" << endl;
// }

// int main()
// {
//     vector<int> vec = {1, 3, 5, 7, 9};

//     findAndRemove(vec, 5);
//     findAndRemove(vec, 4);

//     vec = {2, 4, 2, 4, 6, 8, 2};
//     removeAll(vec, 2);

//     return 0;
// }

// 4. String turidagi To‘plam berilgan. Undagi elementlarni char turidagi A
// massivga joylashtirib, ixtiyoriy elementdan keyingi elementlarni chiqaruvchi
// dastur tuzing

// #include <iostream>
// #include <deque>
// #include <string>

// using namespace std;

// int main()
// {
//     string s = "Hello world!";
//     int n = s.size();

//     char A[n];
//     for (int i = 0; i < n; i++)
//     {
//         A[i] = s[i];
//     }

//     deque<char> dq;
//     for (int i = 0; i < n; i++)
//     {
//         dq.push_back(A[i]);
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         if (dq[i] != dq[i + 1])
//         {
//             cout << dq[i + 1] << " ";
//         }
//     }

//     return 0;
// }

// 4 U to‘plamning musbat qiymatlarni, B to‘plamning toq qiymatlari bilan almashtiruvchi
// dastur tuzing.

// #include <iostream>
// #include <forward_list>

// using namespace std;

// int main()
// {
//     int U[] = {1, -2, 3, -4, 5, -6};
//     int n = sizeof(U) / sizeof(U[0]);

//     forward_list<int> A, B;
//     for (int i = 0; i < n; i++)
//     {
//         if (U[i] > 0)
//         {
//             A.push_front(U[i]);
//         }
//         if (U[i] % 2 == 1)
//         {
//             B.push_front(U[i]);
//         }
//     }

//     B.remove_if([](int x)
//                 { return x % 2 == 1; });

//     for (auto i : A)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     for (auto i : B)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// ustivor_navbat eng kichik elementi o'chirilsin

// #include <iostream>
// #include <queue>

// using namespace std;

// int main()
// {

//     priority_queue<int, vector<int>, greater<int>> pq;

//     pq.push(4);
//     pq.push(2);
//     pq.push(7);
//     pq.push(1);
//     pq.push(9);
//     pq.push(5);

//     int smallest = pq.top();

//     pq.pop();

//     while (!pq.empty())
//     {
//         cout << pq.top() << " ";
//         pq.pop();
//     }
//     cout << endl;

//     return 0;
// }

// navbatda birinchi va oxirgi elementlar o‘rni almashtirilsin

// #include <iostream>
// #include <queue>

// using namespace std;

// int main()
// {

//     queue<int> q;

//     q.push(4);
//     q.push(2);
//     q.push(7);
//     q.push(1);
//     q.push(9);
//     q.push(5);

//     int temp = q.front();
//     q.front() = q.back();
//     q.back() = temp;

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;

//     return 0;
// }

// Stek o‘rtasiga '*' belgi joylashtirilsin

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<char> my_stack = {'a', 'b', 'c', 'd', 'e', 'f'};

//     my_stack.insert(my_stack.begin() + my_stack.size() / 2, '*');

//     for (auto element : my_stack)
//     {
//         cout << element << " ";
//     }

//     return 0;
// }

// Ustivor_navbat eng kichik elementi topilsin va undan keyin 0 joylashtirilsin.

// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     queue<int> qu;
//     queue<int> qu2;
//     int n;
//     cout << "Navbat elementlari sonini kiriting:";
//     cin >> n;
//     cout << "Navbat elementlarini kiriting:";
//     for (int i = 0, a; i < n; i++)
//     {
//         cin >> a;
//         qu.push(a);
//         qu2.push(a);
//     }
//     const int &k = qu2.front();
//     int min = k;
//     for (int i = 0; i < n; i++)
//     {
//         if (qu2.front() < min)
//             min = qu2.front();
//         qu2.pop();
//     }
//     cout << "min=" << min << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (qu.front() == min)
//         {
//             qu2.push(qu.front());
//             qu2.push(0);
//             qu.pop();
//             continue;
//         }
//         qu2.push(qu.front());
//         qu.pop();
//     }
//     n = qu2.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << qu2.front() << " ";
//         qu2.pop();
//     }
// }

// a)	Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to’lating shuffle funksiyasi yordamida amallar bajaring;

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <random>
// #include <chrono>
// using namespace std;

// int main()
// {

//     vector<int> myVector(10);
//     iota(myVector.begin(), myVector.end(), 1);

//     cout << "Initial order: ";
//     for (int i : myVector)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     unsigned seed = chrono::system_clock::now().time_since_epoch().count();
//     shuffle(myVector.begin(), myVector.end(), default_random_engine(seed));

//     cout << "Shuffled order: ";
//     for (int i : myVector)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// b)	Iteratorlardan foydalanib deque konteyneri ustida amallar bajaring;

// #include <iostream>
// #include <deque>
// using namespace std;

// int main()
// {
//     deque<int> mydeque;

//     mydeque.push_front(1);
//     mydeque.push_front(2);
//     mydeque.push_front(3);
//     mydeque.push_back(4);
//     mydeque.push_back(5);
//     mydeque.push_back(6);

//     deque<int>::iterator it;
//     for (it = mydeque.begin(); it != mydeque.end(); ++it)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     mydeque.pop_front();
//     mydeque.pop_back();

//     for (it = mydeque.begin(); it != mydeque.end(); ++it)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     return 0;
// }

// c)	realloc () funksiyasidan foydalanib xotirani dinamik taqsimlashni amalga oshiring.

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     int *ptr = (int *)malloc(5 * sizeof(int));
//     if (ptr == NULL)
//     {
//         cout << "Xotira ajratish muvaffaqiyatsiz tugadi." << endl;
//         return 1;
//     }
//     cout << "Boshlang'ich qiymatlar:" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << ptr[i] << " ";
//     }
//     cout << endl;

//     int *new_ptr = (int *)realloc(ptr, 10 * sizeof(int));
//     if (new_ptr == NULL)
//     {
//         cout << "Xotira ajratishni qayta qurish muvaffaqiyatsiz tugadi." << endl;
//         free(ptr);
//         return 1;
//     }

//     for (int i = 5; i < 10; i++)
//     {
//         new_ptr[i] = i * i;
//     }

//     cout << "Yangi qiymatlar:" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << new_ptr[i] << " ";
//     }
//     cout << endl;

//     free(new_ptr);

//     return 0;
// }

// Complex sinfidan foydalanib, kompleks sonlarni yig’indisi va bo’linmasini toping.

// #include <iostream>
// #include <complex>

// using namespace std;

// int main()
// {

//     complex<double> a(3, 4);  // 3 + 4i
//     complex<double> b(-2, 1); // -2 + i

//     complex<double> c = a + b;

//     complex<double> d = a / b;

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "a + b = " << c << endl;
//     cout << "a / b = " << d << endl;

//     system("pause");
//     return 0;
// }

// Valarray sinfidan foydalanib,massiv elementlari uchinchi darajasini toping.

// #include <iostream>
// #include <valarray>
// #include <cmath>

// using namespace std;

// int main()
// {

//     int arr[] = {2, 3, 4, 5, 6};

//     valarray<int> va(arr, 5);

//     cout << "Massiv elementlari: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//     cout << endl;

//     valarray<int> result = pow(va, 3);

//     cout << "Massiv elementlari uchinchi darajasi: ";
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// gslice sinfidan foydalanib, valarray massiv elementlari 0 indeksdan boshlab, (2,4) uzunlikdagi massivni  (4,6) qadamlari ko’paytmasini  hisoblang.

// #include <iostream>
// #include <valarray>
// using namespace std;
// int main()
// {
//     valarray<double> arr(24);
//     for (int i = 0; i < 24; i++)
//     {
//         arr[i] = i;
//     }

//     gslice slice(0, {2, 4}, {6, 4});
//     valarray<double> sliced_arr = arr[slice];

//     double result = 1.0;
//     for (auto elem : sliced_arr)
//     {
//         result *= sin(elem);
//     }

//     cout << "Ko'paytirilgan massiv elementlarining sinusining ko'paytmasi: " << result << endl;

//     return 0;
// }

// Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to’lating copy funksiyasi yordamida amallar bajaring;

// #include <iostream>
// #include <vector>
// #include <list>
// #include <algorithm>
// using namespace std;
// int main()
// {

//     vector<int> vec{1, 2, 3};
//     list<int> lst{4, 5, 6};

//     vector<int> copied_vec;

//     copy(vec.begin(), vec.end(), back_inserter(copied_vec));

//     cout << "copied_vec ichidagi elementlar : ";
//     for (auto elem : copied_vec)
//     {
//         cout << elem << " ";
//     }
//     cout << endl;

//     copy(lst.begin(), lst.end(), back_inserter(copied_vec));

//     cout << "List nusxasidan keyin copied_vec ichidagi elementlar: ";
//     for (auto elem : copied_vec)
//     {
//         cout << elem << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Iteratorlardan foydalanib set konteyneri ustida amallar bajaring;

// #include <iostream>
// #include <set>

// using namespace std;

// int main()
// {

//     set<int> my_set{5, 3, 7, 1, 9};

//     cout << "my_set elementlari : ";
//     for (auto it = my_set.begin(); it != my_set.end(); ++it)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     auto it = my_set.find(7);
//     if (it != my_set.end())
//     {
//         cout << "my_set dagi 7 elementi topildi " << endl;
//     }
//     else
//     {
//         cout << "my_set dagi 7 elementi topilmadi " << endl;
//     }

//     auto it2 = my_set.find(3);
//     if (it2 != my_set.end())
//     {
//         my_set.erase(it2);
//         cout << "my_set dan 3 elementi o'chirildi" << endl;
//     }

//     cout << "3 elementi o'chirilgandan keyin my_set dagi elementlar: ";
//     for (auto it3 = my_set.begin(); it3 != my_set.end(); ++it3)
//     {
//         cout << *it3 << " ";
//     }
//     cout << endl;

//     return 0;
// }

// malloc () funksiyasidan foydalanib xotirani dinamik taqsimlashni amalga oshiring .

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     int *ptr = (int *)malloc(5 * sizeof(int));

//     if (ptr == nullptr)
//     {
//         cerr << "Xotira ajratish muvaffaqiyatsiz tugadi!" << endl;
//         exit(EXIT_FAILURE);
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i] = i * 2;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << ptr[i] << " ";
//     }
//     cout << endl;

//     free(ptr);

//     return 0;
// }

// Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to’lating move funksiyasi yordamida amallar bajaring;
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <ctime>
// #include <set>
// using namespace std;
// bool isEven(int i)
// {
//     return ((i % 2) == 0);
// }
// int main()
// {

//     srand(time_t(NULL));
//     multiset<int> m;
//     cout << "Tasodifiy qo'shish->" << endl;

//     for (int i = 0; i < 20; i++)
//     {
//         int move = move % 100 + 1;
//         m.insert(move);
//         cout << i + 1 << ") " << move << endl;
//     }

//     multiset<int>::iterator it = m.begin();
//     cout << "Variant->" << endl;

//     for (it = m.begin(); it != m.end(); it++)
//     {
//         cout << *it << " ";
//     }

//     it = find_if(m.begin(), m.end(), isEven);
//     cout << "Shart bajarish->" << *it << "\n";

//     return 0;
// }

// Iteratorlardan foydalanib vector konteyneri ustida amallar bajaring;
// #include <iostream>
// #include <vector>
// #include <ctime>
// using namespace std;
// int main(int argc, char *argv[])
// {

//     srand(time_t(NULL));
//     vector<int> q;
//     int t;
//     cout << "Sonlar->";
//     cin >> t;
//     cout << "Vector sonlar->" << endl;

//     for (int i = 0; i < t; i++)
//     {
//         int random = rand() % 100 + 1;
//         q.push_back(random);
//         cout << i + 1 << ")" << random << endl;
//     }
//     auto iter = q.begin();

//     while (iter != q.end())
//     {
//         *iter = 2 * (*iter);
//         ++iter;
//     }
//     for (iter = q.begin(); iter != q.end(); ++iter)
//     {
//         cout << *iter << "\t";
//     }

//     return 0;
// }

// free () funksiyasidan foydalanib xotirani dinamik taqsimlashni amalga oshiring .
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     int *arr = (int *)malloc(5 * sizeof(int));
//     if (arr == nullptr)
//     {
//         cerr << "Error: memory allocation failed!" << endl;
//         return 1;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     free(arr);

//     return 0;
// }

// Yangi konteynerlar hosil qiling, uni standart funksiyalar yordamida elementlar bilan to’lating fill funksiyasi yordamida
// amallar bajaring;
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {

//     vector<int> myVector(5);

//     fill(myVector.begin(), myVector.end(), 10);

//     cout << "10 bilan to'ldirilgan vektor: ";
//     for (int i : myVector)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     fill_n(myVector.begin(), 3, 20);

//     cout << "Birinchi 3 element 20 ga almashtirilgan vektor: ";
//     for (int i : myVector)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Iteratorlardan foydalanib multimap konteyneri ustida amallar bajaring;
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     multimap<int, string> myMultimap;

//     myMultimap.insert(make_pair(1, "olma"));
//     myMultimap.insert(make_pair(2, "banan"));
//     myMultimap.insert(make_pair(3, "apelsin"));
//     myMultimap.insert(make_pair(3, "shaftoli"));

//     cout << "Konteynerning tarkibidagi elementlar: ";
//     for (auto it = myMultimap.begin(); it != myMultimap.end(); ++it)
//     {
//         cout << "(" << it->first << ", " << it->second << ") ";
//     }
//     cout << endl;

//     auto range = myMultimap.equal_range(3);
//     cout << "3 kaliti bilan bog'liq qiymatlar: ";
//     for (auto it = range.first; it != range.second; ++it)
//     {
//         cout << it->second << " ";
//     }
//     cout << endl;

//     return 0;
// }

// free () funksiyasidan foydalanib xotirani dinamik taqsimlashni amalga oshiring
// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int *arr = (int *)malloc(n * sizeof(int)); // n ta butun sonlar uchun xotirani alokatsiya qilish

//     if (arr == NULL)
//     {
//         cout << "Xotira alokatsiyasi muvaffaqiyatsiz bo'ldi." << endl;
//         return 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = i * 2;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     free(arr);

//     return 0;
// }

// #include <iostream>
// #include <valarray>
// using namespace std;
// int main()
// {
//     valarray<int> myArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     slice mySlice(2, 5, 1);
//     size_t numElements = mySlice.size();

//     cout << "Elementlar soni: " << numElements << endl;

//     return 0;
// }

// #include "stdafx.h"
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <gmpxx.h>

// using namespace std;

// class Millayarderlar
// {
// public:
//     string FIO;
//     string yashash_manzili;
//     mpz_class boyligi;
//     string firmalari;
//     int yoshi;
// };

// bool boyunaGoreSiralama(const Millayarderlar &a, const Millayarderlar &b)
// {
//     return a.boyligi < b.boyligi;
// }

// int main()
// {
//     vector<Millayarderlar> millayarderlarListesi;

//     Millayarderlar m1;
//     m1.FIO = "Elon Musk";
//     m1.yashash_manzili = "California, USA";
//     m1.boyligi = "123456789012345678901234567890";
//     m1.firmalari = "SpaceX, Tesla, Neuralink";
//     m1.yoshi = 50;
//     millayarderlarListesi.push_back(m1);

//     Millayarderlar m2;
//     m2.FIO = "Jeff Bezos";
//     m2.yashash_manzili = "Washington, USA";
//     m2.boyligi = "987654321098765432109876543210";
//     m2.firmalari = "Amazon";
//     m2.yoshi = 57;
//     millayarderlarListesi.push_back(m2);

//     Millayarderlar m3;
//     m3.FIO = "Bill Gates";
//     m3.yashash_manzili = "Washington, USA";
//     m3.boyligi = "555555555555555555555555555555";
//     m3.firmalari = "Microsoft";
//     m3.yoshi = 65;
//     millayarderlarListesi.push_back(m3);

//     sort(millayarderlarListesi.begin(), millayarderlarListesi.end(), boyunaGoreSiralama);

//     for (const auto &millayarder : millayarderlarListesi)
//     {
//         cout << millayarder.FIO << ", Boy: " << millayarder.boyligi.get_str() << endl;
//     }

//     return 0;
// }

////////////////////////////////////////

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     float a = M_PI / 4, b = M_PI / 2, n = 10, x = a, y, h;

//     h = (b - a) / n;
//     for (int i = 0; i <= n; i++)
//     {
//         y = cos(1/x);
//         x += h;
//         cout << "\n y=(" << x << ")=" << y;
//     }
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Oqituvchi {
// private:
//     string familiya;
//     string telefon;

// public:
//     Oqituvchi(string familiya, string telefon) {
//         this->familiya = familiya;
//         this->telefon = telefon;
//     }

//     string getFamiliya() const {
//         return familiya;
//     }

//     string getTelefon() const {
//         return telefon;
//     }
// };

// void telefonBoylabChop(Oqituvchi oqituvchi, string telefon) {
//     if (oqituvchi.getTelefon() == telefon) {
//         cout << "Telefon raqami: " << oqituvchi.getTelefon() << ", Familiya: " << oqituvchi.getFamiliya() << endl;
//     } else if (oqituvchi.getFamiliya() == telefon) {
//         cout << "Familiya: " << oqituvchi.getFamiliya() << ", Telefon raqami: " << oqituvchi.getTelefon() << endl;
//     } else {
//         cout << "Berilgan telefon raqamiga yoki familiyaga mos keluvchi o'qituvchi topilmadi." << endl;
//     }
// }

// int main() {
//     Oqituvchi oqituvchi1("Qodirov", "998901234567");
//     Oqituvchi oqituvchi2("Ismoilov", "998998765432");

//     string telefon = "998998765432"; // Telefon raqamiga mos keluvchi o'qituvchi (oqituvchi2)

//     telefonBoylabChop(oqituvchi1, telefon);
//     telefonBoylabChop(oqituvchi2, telefon);

//     return 0;
// }

// A, B haqiqiy va amal butun son berilgan. A va B sonlari ustiga arifmetik amallar bajaruvchi dastur tuzilsin.
// Amal quyidagi qiymatlarni qabul qiladi: 1-qo’shish, 2-ayirish, 3-bo’lish, 4-ko’paytirish

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k;
//     float a, b, c, d;
//     int A, B;

//     cout << "A = ";
//     cin >> A;
//     cout << "B = ";
//     cin >> B;

//     for (int k = 1; k <= 4; k++)
//     {
//         switch (k)
//         {
//         case 1:
//             cout << "A + B = " << A + B << endl;
//             break;
//         case 2:
//             cout << "A - B = " << A - B << endl;
//             break;
//         case 3:
//             cout << "A / B = " << A / B << endl;
//             break;
//         case 4:
//             cout << "A * B = " << A * B << endl;
//             break;

//         default:
//             break;
//         }
//     }
// }

// Ro'yxat berilgan ekrandan kiritilgan so'zga teng bo'lgan elementi bor yo'gligini aniqlang.

// #include <bits/stdc++.h>

// using namespace std;

// int main()

// {

//     list<string> l;

//     int n;

//     cout << "Ro'yxatdagi elementlar sonini kiriting: ";

//     cin >> n;

//     cout << "Ro'yxat elementlarini kiriting:\n";

//     for (int i = 1; i <= n; i++)

//     {

//         string x;

//         cin >> x;

//         l.push_back(x);
//     }

//     string s;

//     cout << "So'z kiriting: ";

//     cin >> s;

//     int ok = 0;

//     while (l.size())

//     {

//         if (l.back() == s)

//         {

//             ok = 1;

//             break;
//         }

//         l.pop_back();
//     }

//     if (ok)

//     {

//         cout << "Berilgan so'z ro'yxatda bor";
//     }

//     else

//         cout << "Berilgan so'z ro'yxatda yo'q";
// }

// Stekning juft o'rinda turgan elementlari o'chirilsin.

// #include <iostream>
// #include <stack>
// #include <cstdlib>
// using namespace std;
// int main() {
//     stack<int> myStack;
//     int n;

//     cout<<"Elementlar soni: ";
//     cin>>n;

//     cout<<"Elementlarni kiriting: ";
//     for (int i = 0; i < n; i++)
//     {

//         int randomNumber;
//         cin>>randomNumber;
//         myStack.push(randomNumber);
//     }

//     stack<int> tempStack;

//     while (!myStack.empty()) {
//         int topElement = myStack.top();
//         myStack.pop();

//         if (topElement % 2 != 0) {
//             tempStack.push(topElement);
//         }
//     }

//     while (!tempStack.empty()) {
//         int element = tempStack.top();
//         tempStack.pop();
//         myStack.push(element);
//     }

//     while (!myStack.empty()) {
//         int element = myStack.top();
//         cout << element << " ";
//         myStack.pop();
//     }

//     return 0;
// }

// Berilgan string turidagi to 'plamning 2 ta so’zdan iborat elementidan 2-to'plamni, 1 ta so'zdan iborat elementidan 3- to'plamni hosil qiluvchi va ularni ekranga chiqaruvchi dastur tuzing.
// Ikkala to'plamdan ham bir xil qiymatli elemetlar o'chirilib Saralangan to 'plam hosil qilinsin hamda uning qiymatlari ekranga chiqarilsin

// #include <iostream>
// #include <set>
// #include <algorithm>
// using namespace std;
// int main() {
//     string input;
//     cout << "Iltimos, bir string kiriting: ";
//     getline(cin, input);

//     set<string> set1, set2;
//     multiset<string> multiset1, multiset2;

//     size_t pos = 0;
//     while ((pos = input.find(' ')) != string::npos) {
//         string word = input.substr(0, pos);
//         set1.insert(word);
//         multiset1.insert(word);
//         input.erase(0, pos + 1);
//     }
//     set1.insert(input);
//     multiset1.insert(input);

//     for (auto it = set1.begin(); it != set1.end();) {
//         if (count(it->begin(), it->end(), ' ') == 1) {
//             set2.insert(*it);
//             it = set1.erase(it);
//         } else {
//             ++it;
//         }
//     }

//     for (auto it = multiset1.begin(); it != multiset1.end();) {
//         if (count(it->begin(), it->end(), ' ') == 0) {
//             multiset2.insert(*it);
//             it = multiset1.erase(it);
//         } else {
//             ++it;
//         }
//     }

//     cout << "Birinchi to'plamda 2 ta so'zdan iborat elementlar: ";
//     for (const string& word : set2) {
//         cout << word << " ";
//     }
//     cout << endl;

//     cout << "Birinchi to'plamda 1 ta so'zdan iborat elementlar: ";
//     for (const string& word : set1) {
//         cout << word << " ";
//     }
//     cout << endl;

//     cout << "Ikkinchi to'plamda 2 ta so'zdan iborat elementlar: ";
//     for (const string& word : multiset2) {
//         cout << word << " ";
//     }
//     cout << endl;

//     cout << "Ikkinchi to'plamda 1 ta so'zdan iborat elementlar: ";
//     for (const string& word : multiset1) {
//         cout << word << " ";
//     }
//     cout << endl;

//     return 0;
// }

// massivda  bittagina bo‘lsa  ham nolga teng elementi  mavjud.  Ushbu massivning qiymati nolga teng bo‘lgan birinchi elementgacha bo‘lgan elementlarning yig‘indisini hisoblash dasturini tuzing. Boshlang‘ich ma’lumotlar: 1, 17, 2, 4, -5, 0, 7, 8.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int massiv[8] = {1, 17, 2, 4, -5, 0, 7, 8};
//     int yigindi = 0;

//      for (int i = 0; i < 8; ++i) {
//         if (massiv[i] == 0) {
//             break;
//         }
//         yigindi += massiv[i];
//     }

//     cout << "Birinchi noldan avval elementlarning yig'indisi: " << yigindi << endl;

//     return 0;
// }

// O‘lchami 10 x 5 bo‘lgan haqiqiy turdagi matritsa berilgan. Matritsa satrlarining eng katta elementlari o‘sishi bo‘yicha tartiblansin.

// #include <iostream>
// #include <algorithm>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// bool compare(int a, int b)
// {
//     return a < b;
// }

// int main()
// {
//     const int rows = 10;
//     const int cols = 5;
//     int matritsa[rows][cols];

//     srand(time(0));

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             matritsa[i][j] = rand() % 100;
//         }
//     }

//     cout << "Matritsa :\n";
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             cout << matritsa[i][j] << "\t";
//         }
//         cout << "\n";
//     }

//     cout << endl;

//     for (int i = 0; i < rows; ++i)
//     {
//         sort(matritsa[i], matritsa[i] + cols, compare);
//     }

//     cout << "Matritsa satrlarining eng katta elementlari o'sishi bo'yicha tartiblangan natija:\n";
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             cout << matritsa[i][j] << "\t";
//         }
//         cout << "\n";
//     }

//     return 0;
// }

// Berilgan sonni tublikka tekshiradigan funksiya yarating. Bu funksiya yordamida a,b,c,d sonlarini tub songa tekshiring

// #include <iostream>
// #include <cmath>

// bool isPrime(int num)
// {
//     if (num <= 1)
//     {
//         return false;
//     }

//     if (num <= 3)
//     {
//         return true;
//     }

//     if (num % 2 == 0 || num % 3 == 0)
//     {
//         return false;
//     }

//     for (int i = 5; i * i <= num; i += 6)
//     {
//         if (num % i == 0 || num % (i + 2) == 0)
//         {
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int a = 7;
//     int b = 15;
//     int c = 23;
//     int d = 30;

//     if (isPrime(a))
//     {
//         cout << a << " soni tub son.\n";
//     }
//     else
//     {
//         cout << a << " soni tub son emas.\n";
//     }

//     if (isPrime(b))
//     {
//         cout << b << " soni tub son.\n";
//     }
//     else
//     {
//         cout << b << " soni tub son emas.\n";
//     }

//     if (isPrime(c))
//     {
//         cout << c << " soni tub son.\n";
//     }
//     else
//     {
//         cout << c << " soni tub son emas.\n";
//     }

//     if (isPrime(d))
//     {
//         cout << d << " soni tub son.\n";
//     }
//     else
//     {
//         cout << d << " soni tub son emas.\n";
//     }

//     return 0;
// }

// Maydon sinfi yaratilsin. Shu maydonga tegishli 3 ta sinf konstruktori yaratilsin. Bu sinf konstruktori uchta geometric shaklni maydonini topib ekranga chiqarilsin.

// #include <bits/stdc++.h>
// using namespace std;
// class Maydon
// {
// public:
//     Maydon(int a, int b, int s)
//     {
//         cout << "1 - geometrik shakl maydoni: Kvadrat s= " << a * a << endl;
//     }
//     Maydon()
//     {

//         cout << "2- geometrik shakl maydoni nuqta, yuzaga ega emas!" << endl;
//     }
//     Maydon(int a, int b)
//     {

//         cout << "3- shakl geometrik shakl maydoni: To'g'ri to'rtburchak s= " << a * b << endl;
//     }
// };

// int main()
// {
//     int g, h;
//     cout << "birinchi son: ";
//     cin >> g;
//     cout << "ikkinchi son: ";
//     cin >> h;

//     Maydon(g, g, g);
//     Maydon();
//     Maydon(g, h);
//     return 0;
// }

// Tovarlar ro’yxati quyidagilardan iborat. Tovar nomi, tovar miqdori, narxi va tovarning omborga kelib tushgan vaqti. Narxi 10000 so’mdan oshiq va bir oydan ko’proq saqlanayotgan tovarlar ro’yxatini chiqarish.

// #include <bits/stdc++.h>
// using namespace std;
// class Tovarlar_ruyxati
// {
// public:
//     friend void print(Tovarlar_ruyxati h);
//     char tovar_nomi[30];
//     int tovar_miqdori;
//     int narxi;
//     int tovarning_omborga_kelib_tushgan_vaqti;
// };
// void print(Tovarlar_ruyxati h)
// {

//     if ((h.narxi > 10000) && (h.tovarning_omborga_kelib_tushgan_vaqti > 30))
//     {
//         cout << "Tovar nomi: " << h.tovar_nomi << endl;
//     }
//     else
//     {

//         cout << "Bunday tovar yo'q!";
//     }
// }

// int main()
// {
//     Tovarlar_ruyxati k, l;
//     cout << "Tovar nomi: ";
//     cin >> k.tovar_nomi;
//     cout << "Tovar miqdori: ";
//     cin >> k.tovar_miqdori;
//     cout << "Narxi: ";
//     cin >> k.narxi;
//     cout << "Tovarning omborga kelib tushgan vaqti: ";
//     cin >> k.tovarning_omborga_kelib_tushgan_vaqti;

//     cout << "Tovar nomi: ";
//     cin >> l.tovar_nomi;
//     cout << "Tovar miqdori: ";
//     cin >> l.tovar_miqdori;
//     cout << "Narxi: ";
//     cin >> l.narxi;
//     cout << "Tovarning omborga kelib tushgan vaqti: ";
//     cin >> l.tovarning_omborga_kelib_tushgan_vaqti;
//     print(k);
//     print(l);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <ctime>
// #include <cstdlib>

// struct Tovar {
//     string nomi;
//     int miqdori;
//     int narxi;
//     time_t vaqt;
// };

// int main() {
//     const int tovarlar_soni = 10;
//     vector<Tovar> tovarlar;

//     string tovar_nomlar[] = {
//         "Olov",
//         "Non",
//         "Suv",
//         "Mol",
//         "Sabzavotlar",
//         "Go'sht",
//         "Sut",
//         "Shakar",
//         "Tuz",
//         "Yog'"
//     };

//     srand(time(0));

//     for (int i = 0; i < tovarlar_soni; ++i) {
//         Tovar tovar;
//         tovar.nomi = tovar_nomlar[i];
//         tovar.miqdori = rand() % 100 + 1; // 1 dan 100 gacha tasodifiy miqdor
//         tovar.narxi = rand() % 9901 + 10000; // 10000 dan 19900 gacha tasodifiy narx
//         tovar.vaqt = time(0) - rand() % (30 * 24 * 60 * 60); // Bir oydagi tasodifiy vaqt

//         tovarlar.push_back(tovar);
//     }

//     cout << "Narxi 10000 so'mdan oshiq va bir oydan ko'proq saqlanayotgan tovarlar ro'yxati:\n";
//     for (const Tovar& tovar : tovarlar) {
//         if (tovar.narxi > 10000 && difftime(time(0), tovar.vaqt) > 30 * 24 * 60 * 60) {
//             cout << "Tovar nomi: " << tovar.nomi << "\n";
//             cout << "Tovar miqdori: " << tovar.miqdori << "\n";
//             cout << "Tovar narxi: " << tovar.narxi << "\n";
//             cout << "Tovarning omborga kelib tushgan vaqti: " << ctime(&tovar.vaqt) << "\n";
//             cout << "--------------------------------------\n";
//         }
//     }

//     return 0;
// }

// Kun boshidan boshlab N sekund vaqt o'tti.
// Kun boshidan boshlab qancha minut va sekund o’tganini aniqlovchi programma tuzilsin.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;

//     cout << "Kun boshidan boshlab necha sekund o'tdi = ";
//     cin >> a;

//     b = a / 60;
//     c = a - b * 60;
//     cout << "Kun boshidan boshlab " << b << " minut va " << c << " sekunt vaqt o'tdi.";
// }

// Matritsaning har bir ustun elеmеntlarining qiymatini kamayishi bo’yicha tartiblansin.

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<vector<int>> transpose(const vector<vector<int>> &matrix)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     vector<vector<int>> transposed(cols, vector<int>(rows));

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             transposed[j][i] = matrix[i][j];
//         }
//     }

//     return transposed;
// }

// int main()
// {

//     vector<vector<int>> matrix = {
//         {4, 2},
//         {86, -18},
//         {54, 96},
//         {60, -15},
//         {43, 20}};

//     matrix = transpose(matrix);
//     for (int col = 0; col < matrix.size(); col++)
//     {
//         sort(matrix[col].begin(), matrix[col].end(), greater<int>());
//     }
//     matrix = transpose(matrix);

//     for (const auto &row : matrix)
//     {
//         for (const int &value : row)
//         {
//             cout << value << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // Svetoforning ishlash algoritmi quyidagicha: yashil-sariq-qizil-sariq-yashil-…. Yashil va qizil ranglar 60 sekund, sariq rang 10 sekund yonib tursa, N minutdan keyin svetoforning yashil rangi necha marta yonishini aniqlash algoritmi va dasturini tuzing

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N; // N minut
//     cout << "Svetoforning ishlashini aniqlash uchun N minutni kiriting: ";
//     cin >> N;

//     int sariqSoat = 0;
//     int yashilSoat = 0;
//     int qizilSoat = 0;

//     for (int i = 1; i <= N; i++)
//     {
//         if (i % 70 <= 60)
//         {

//             if (i % 70 < 10)
//             {
//                 sariqSoat++;
//             }
//             else
//             {
//                 qizilSoat++;
//             }
//         }
//         else
//         {

//             yashilSoat++;
//         }
//     }

//     cout << "Yashil rangda " << yashilSoat << " marta yoniladi." << endl;

//     return 0;
// }

// Shaxmat doskasida bitta yurishda “ot” figurasining yurishini aniqlash dasturini tuzing. Shaxmat doskasi A1,A2, .. H8 tarzida nomlangan.

// #include <iostream>
// #include <cmath>
// #include <string>

// using namespace std;

// int main() {
//     string input;
//     cout << "Boshlang'ich va oxirgi joylarni kiriting (masalan, A1-A3): ";
//     cin >> input;

// 	if (input.length() != 5 || input[2] != '-' || input[0] < 'A' || input[0] > 'H' || input[3] < 'A' || input[3] > 'H' || input[1] < '1' || input[1] > '8' || input[4] < '1' || input[4] > '8') {
//         cout << "ERROR To'g'ri kiriting. Masalan: A1-A3 " << endl;
//         return 1;
//     }

//     char startCol = input[0];
//     char endCol = input[3];
//     int startRow = input[1] - '0';
//     int endRow = input[4] - '0';

//     int colDistance = abs(endCol - startCol);
//     int rowDistance = abs(endRow - startRow);

//     if ((colDistance == 1 && rowDistance == 2) || (colDistance == 2 && rowDistance == 1)) {
//         cout << "YES. Ot yurishi to'g'ri!" << endl;
//     } else {
//         cout << "NO.  Ot yurishi noto'g'ri!" << endl;
//     }

//     return main();
// }

// Integral
// #include <iostream>
// #include <cmath>
// #include <functional>

// using namespace std;

// double f(double x)
// {
//     return pow(3, x) - cos(x + pow(2, x));
// }

// double trapezoidIntegral(double a, double b, int n, function<double(double)> func)
// {
//     double h = (b - a) / n;
//     double integral = (func(a) + func(b)) / 2.0;

//     for (int i = 1; i < n; i++)
//     {
//         double x = a + i * h;
//         integral += func(x);
//     }

//     integral *= h;

//     return integral;
// }

// int main()
// {
//     double a = 0.0;
//     double b = 3.0;
//     int n = 1000;

//     double result = trapezoidIntegral(a, b, n, f);

//     cout << "Natija = " << result << endl;

//     return 0;
// }

// Quyidagi masala yechimini virtual metodlari tadbiq qilgan holda hal eting: Jo'mrakdan 1 s da 1 millilitr suv tomsa, x yilda necha litr suv tomishini aniqlovchi metod yarating. Natijani litr va kubometriarda chop eting.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x;
//     cout << "Yillar sonini kiriting: ";
//     cin >> x;

//     double suvSaniyada = 1.0;

//     double suvKun = suvSaniyada * 60 * 60 * 24;

//     double suvYillik = suvKun * 365 * x / 1000;

//     double suvYillikKubometr = suvYillik / 1000;

//     cout << "Yillik suv miqdori litrda: " << suvYillik << " litr" << endl;
//     cout << "Yillik suv miqdori kubometrlarda: " << suvYillikKubometr << " kubometr" << endl;

//     return 0;
// }

// Uchburchakning tomonlari a,b,c bo’lib, butun musbat sonlardan iborat bo’lsa, shu uchburchakning tomonlari bo’yicha turini aniqlang

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;

//     cout << "Uchburchakning tomonlarini kiriting:\n";
//     cout << " Birinchi tomon: ";
//     cin >> a;
//     cout << " Ikkinchi tomon: ";
//     cin >> b;
//     cout << " Uchinchi tomon: ";
//     cin >> c;

//     if (a > 0 && b > 0 && c > 0)
//     {
//         if (a == b && b == c)
//         {
//             cout << "Uchburchak teng tomonli uchburchak.\n";
//         }
//         else if (a == b || b == c || a == c)
//         {
//             cout << "Uchburchak teng yonli uchburchak.\n";
//         }
//         else
//         {
//             cout << "Oddiy uchburchak.\n";
//         }
//     }
//     else
//     {
//         cout << "Tomonlar musbat butun sonlar emas.\n";
//     }

//     return main();
// }

// Butun sonlardan iborat NxN o’lchamli kvadrat matritsa berilgan. Bu matritsani asosiy dioganali asosida transponerlangan holatda chiqaring

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;
//     cout << "Matritsa o'lchamini kiriting: ";
//     cin >> N;

//     int matritsa[N][N];

//     cout << "Matritsaning elementlarini kiriting:" << endl;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> matritsa[i][j];
//         }
//     }

//     cout << "Transpon matritsa:" << endl;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << matritsa[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Butun sonlardan iborat NxM o’lchamli matritsa berilgan. Matritsani ustun
//  elеmеntlari yigindisidan vеktоr  хоsil qilinsin. Matritsaning eng katta va eng
// kichik elеmеnti aniqlansin.
// 4 7
// -84 38 30 78 59 49 -58
// 64 -76 65 -17 24 -89 59
// -36 55 33 61 74 87 -93
// 72 -51 28 -73 93 -8 41	16 -34 156 49 250 39 -51
// 93 -93

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m;
//     cout << "N = ";
//     cin >> n;
//     cout << "M = ";
//     cin >> m;

//     cout << "Matritsa elementlarini kiriting: \n";

//     vector<vector<int>> matrix(n, vector<int>(m));
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     vector<int> column_sums(m, 0);
//     int max_element = matrix[0][0];
//     int min_element = matrix[0][0];

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < m; ++j)
//         {
//             column_sums[j] += matrix[i][j];
//             if (matrix[i][j] > max_element)
//             {
//                 max_element = matrix[i][j];
//             }
//             if (matrix[i][j] < min_element)
//             {
//                 min_element = matrix[i][j];
//             }
//         }
//     }
//     cout << endl;
//     cout << "Natija:  \n";
//     for (int i = 0; i < m; ++i)
//     {
//         cout << column_sums[i] << " ";
//     }
//     cout << endl;
//     cout << max_element << " " << min_element << endl;

//     return 0;
// }

// Quyidagi funksiyani to’rtburchaklar, Trapetsiya va Simpson formulalari yordamida taqribiy hisoblash dasturini tuzing.

// #include <bits\stdc++.h>
// using namespace std;

// double f(double x)
// {
//     return sin(x) / (1 + pow(x, 3));
// }

// double rectangleIntegral(double a, double b, int n)
// {
//     double h = (b - a) / n;
//     double integral = 0.0;
//     for (int i = 0; i < n; i++)
//     {
//         double x = a + i * h;
//         integral += f(x);
//     }
//     return integral * h;
// }

// double trapezoidalIntegral(double a, double b, int n)
// {
//     double h = (b - a) / n;
//     double integral = (f(a) + f(b)) / 2.0;
//     for (int i = 1; i < n; i++)
//     {
//         double x = a + i * h;
//         integral += f(x);
//     }
//     return integral * h;
// }

// double simpsonsIntegral(double a, double b, int n)
// {
//     double h = (b - a) / n;
//     double integral = f(a) + f(b);
//     for (int i = 1; i < n; i++)
//     {
//         double x = a + i * h;
//         integral += 2 * (i % 2 == 0 ? 2 : 4) * f(x);
//     }
//     return integral * h / 3.0;
// }

// int main()
// {
//     double a = 0.0;
//     double b = 1.0;
//     int n = 1000;

//     double rectangleResult = rectangleIntegral(a, b, n);
//     double trapezoidalResult = trapezoidalIntegral(a, b, n);
//     double simpsonsResult = simpsonsIntegral(a, b, n);

//     cout << "Rectangle (To'rtburchaklar) formulasi natijasi: " << rectangleResult << endl;
//     cout << "Trapezoidal (Trapeziya) formulasi natijasi: " << trapezoidalResult << endl;
//     cout << "Simpson's formulasi natijasi: " << simpsonsResult << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x = 1.6, y = -6.2;
//     float A, B;

//     A = (2 * cos(x - M_PI / 6)) / (sin(2 * x) + pow(sin(x - y), 2));

//     B = pow(cos(atan(1 / A)), 2) + pow(exp(x + y), 1 / 3);

//     cout << "Natija: A=" << A << " B=" << B << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float d, n, m, y;

//     cout << "d=";
//     cin >> d;
//     cout << "n=";
//     cin >> n;
//     cout << "m=";
//     cin >> m;

//     if (d > 1)
//     {
//         y = pow((n * pow(m, 2) + d), 2);
//     }
//     else if (d < 1)
//     {
//         y = d / (pow(n, 2) + pow(m, 2));
//     }

//     cout << "Natija: " << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float z, x, a, c, b, y;

//     cout << "z=";
//     cin >> z;
//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;

//     if (z < -1)
//     {
//         x = -z / 3;
//     }
//     else
//     {
//         x = abs(z);
//     }

//     y = a * c * x - log(x + 2.5) + b * (exp(x) - exp(-x));

//     cout << "Natija: " << y << endl;
// }

// B massivning elementlarini Pufaksimon saralash algoritmidan foydalanib saralang va massivning eng kichik elementini ekranga chiqarish dasturini tuzing.
// #include <bits/stdc++.h>
// using namespace std;

// void pufaksimonSort(int B[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (B[j] < B[minIndex])
//             {
//                 minIndex = j;
//             }
//         }

//         int temp = B[i];
//         B[i] = B[minIndex];
//         B[minIndex] = temp;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> n;

//     int B[n];
//     cout << "Massiv elementlarini kiriting:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> B[i];
//     }

//     pufaksimonSort(B, n);

//     cout << "Saralangan massiv: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << B[i] << " ";
//     }

//     cout << "\nEng kichik element: " << B[0] << endl;

//     return 0;
// }

// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//     float x = 3.6, y = 5.5, A, B;

//     A = log(abs((y - pow(x, 1 / 2)) * (x + (exp(y) / (pow(cos(x), 2) + pow(y, 2) / 4)))));

//     B = (x + tan(2 * M_PI / A)) * (5 * pow(10, -6) + pow(A * y, 1 / 4));

//     cout << "Natija: \n"
//          << "A=" << A << "\nB=" << B << endl;
// }

// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//     float x, a, b, c, d;

//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;

//     a = (b * b - c * c) / d;

//     if (a < 0)
//     {
//         x = pow(a, 3) / (3 + a);
//     }
//     else
//     {
//         x = pow(((a * a + 2) / (1 + a)), 1 / 2);
//     }

//     cout << "Natija: \n"
//          << "x=" << x << endl;
// }

// #include <bits\stdc++.h>
// using namespace std;
// int main()
// {
//     float x, y, z, c, d;

//     cout << "z=";
//     cin >> z;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;

//     if (z < 0)
//     {
//         x = pow(z, 2) - z;
//     }
//     else
//     {
//         x = pow(z, 3);
//     }

//     y = pow((sin(c * x + d * d + x * x)), 3);

//     cout << "Natija: \n"
//          << "y=" << y << endl;
// }

// #include <bits\stdc++.h>
// #include <cmath>
// using namespace std;
// int main()
// {
//     float A, B, Y;

//     cout << "A=";
//     cin >> A;
//     cout << "B=";
//     cin >> B;

//     Y = acos((A / B) - B) - (B / 2) * log(A * A + B * B);

//     cout << "Natija: Y = " << Y << endl;
// }

// chizma
//  #include <bits\stdc++.h>
//  using namespace std;
//  int main()
//  {
//      float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     if (x - 1 >= y || x + 1 <= y || -x + 1 <= y || -x - 1 >= y && x >= -1 && x <= 1 && y <= 1 && y >= -1)

//     {
//         cout << "Kiritilgan nuqta bo'yalgan soha ichida yotadi" << endl;
//     }
//     else
//     {
//         cout << "Kiritilgan nuqta bo'yalgan soxada emas" << endl;
//     }
// }

// Berilgan massivda key kalitli elementni ketma-ket va binar qidiruv usullari yordamida izlang va qaysi usul ushbu qidiruv holatida samara berganligini aniqlash dasturini keltiring.

// #include <bits\stdc++.h>
// using namespace std;

// int binarySearch(const int arr[], int size, int key)
// {
//     int left = 0;
//     int right = size - 1;

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (arr[mid] < key)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }

//     return -1;
// }

// int sequentialSearch(const int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int key = 13; // Izlashni talab qilayotgan element

//     int index = binarySearch(arr, size, key);
//     int index1 = sequentialSearch(arr, size, key);

//     if (index != -1 && index1 != -1)
//     {
//         cout << "Element topildi indeksi: " << index << endl;
//         cout << "Samara berilgan, usuli: Binarni qidiruv" << endl;
//     }
//     else if (index != -1)
//     {
//         cout << "Element topildi indeksi: " << index << endl;
//         cout << "Samara berilgan, usuli: Binarni qidiruv" << endl;
//     }
//     else if (index1 != -1)
//     {
//         cout << "Element topildi indeksi: " << index1 << endl;
//         cout << "Samara berilgan, usuli: Ketma-ket qidiruv" << endl;
//     }
//     else
//     {
//         cout << "Element topilmadi" << endl;
//     }

//     return 0;
// }

// Berilgan uch xonali son raqamlari orasida bir xillari bor yoki yo‘qligi aniqlansin?
// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout << "Uch xonali sonni kiriting: ";
//     cin >> number;

//     int birlik = number % 10;
//     int onlik = (number / 10) % 10;
//     int yuzlik = number / 100;

//     if (birlik == onlik || birlik == yuzlik || onlik == yuzlik)
//     {
//         cout << "Uchta bir xil raqam bor." << endl;
//     }
//     else
//     {
//         cout << "Uchta bir xil raqam yo'q." << endl;
//     }

//     return 0;
// }

// (k,l) maydonidagi ruh bir yurishda (m,n) maydoniga o‘tishi mumkinmi? Agar
// mumkin bo‘lmasa, ikkita yurishda o‘tish yo‘llari ko‘rsatilsin

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k, l, m, n;

//     cout << "Birinchi maydon (k, l): ";
//     cin >> k >> l;

//     cout << "Ikkinchi maydon (m, n): ";
//     cin >> m >> n;

//     if ((k >= 1 && k <= 8) && (l >= 1 && l <= 8) && (m >= 1 && m <= 8) && (n >= 1 && n <= 8))
//     {
//         int x1 = abs(k - m);
//         int x2 = abs(l - n);

//         if ((x1 == 1 && x2 == 0) || (x1 == 0 && x2 == 1))
//         {
//             cout << "(k, l) maydonidagi ruh (m, n) maydoniga bir yurishda o'ta oladi." << endl;
//         }
//         else
//         {
//             cout << "(k, l) maydonidagi ruh (m, n) maydoniga bir yurishda o'tish mumkin emas." << endl;
//             cout << "Yurish yo'llari: ";
//             if (x1 % 2 == 0 && x2 % 2 == 0)
//             {
//                 cout << "Uch joydan boshqa o'ta olmaydi." << endl;
//             }
//             else
//             {
//                 cout << "Ikki yurishda o'ta oladi." << endl;
//             }
//         }
//     }
//     else
//     {
//         cout << "Maydonlar shaxmat taxtasi oraliqidan tashqari." << endl;
//     }

//     return 0;
// }

// (k,l) maydonidagi farzin bir yurishda (m,n) maydoniga o‘tishi mumkinmi? Agar
// mumkin bo‘lmasa, ikkita yurishda o‘tish yo‘llari ko‘rsatilsin.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k, l, m, n;

//     cout << "Birinchi maydon (k, l): ";
//     cin >> k >> l;

//     cout << "Ikkinchi maydon (m, n): ";
//     cin >> m >> n;

//     if ((k >= 1 && k <= 8) && (l >= 1 && l <= 8) && (m >= 1 && m <= 8) && (n >= 1 && n <= 8))
//     {
//         int x1 = abs(k - m);
//         int x2 = abs(l - n);

//         if ((x1 == 2 && x2 == 1) || (x1 == 1 && x2 == 2))
//         {
//             cout << "(k, l) maydonidagi ruh (m, n) maydoniga bir yurishda o'ta oladi." << endl;
//         }
//         else
//         {
//             cout << "(k, l) maydonidagi ruh (m, n) maydoniga bir yurishda o'tish mumkin emas." << endl;
//             cout << "Yurish yo'llari: ";
//             if (x1 == 0 || x2 == 0)
//             {
//                 cout << "Bir joydan boshqa o'ta olmaydi." << endl;
//             }
//             else if (x1 % 2 == 0 && x2 % 2 == 0)
//             {
//                 cout << "Uch joydan boshqa o'ta olmaydi." << endl;
//             }
//             else
//             {
//                 cout << "Ikki yurishda o'ta oladi." << endl;
//             }
//         }
//     }
//     else
//     {
//         cout << "Maydonlar shaxmat taxtasi oraliqidan tashqari." << endl;
//     }

//     return 0;
// }

// Natural n(n≤ 9999) soni berilgan. Sonni to‘rt xonali deb hisobga olgan holda ushbu sonning palindrom ekanligi aniqlansin (chapdan va o‘ngdan bir xil o‘qiladigan sonlar, masalan, 1221, 5555, 440 sonlari palindrom sonlar hisoblanadi).

// #include <bits/stdc++.h>
// using namespace std;
// bool isPalindrom(int num)
// {
//     int originalNum = num;
//     int reversedNum = 0;

//     while (num > 0)
//     {
//         int digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num /= 10;
//     }

//     return originalNum == reversedNum;
// }

// int main()
// {
//     int number;
//     cout << "Istalgan to'rt xonali sonni kiriting: ";
//     cin >> number;

//     if (isPalindrom(number))
//     {
//         cout << "Bu son palindrom son." << endl;
//     }
//     else
//     {
//         cout << "Bu son palindrom emas." << endl;
//     }

//     return 0;
// }

//  O'lchamlari axbxc bo'lgan to'griburchakli qutiga pxrxq o'lchamdagi to 'griburchakli taxta bo 'lagini joylashtirish mumkinmi?

// #include <iostream>
// using namespace std;
// int main()
// {
//     int A, B, C, P, Q, R;

//     cout << "Quti o'lchamlari (A B C): ";
//     cin >> A >> B >> C;

//     cout << "Taxta o'lchamlari (P Q R): ";
//     cin >> P >> Q >> R;

//     if (A >= P && B >= Q && C >= R)
//     {
//         cout << "Taxta quti ichiga joylashtirish mumkin." << endl;
//     }
//     else
//     {
//         cout << "Taxta quti ichiga joylashtirish mumkin emas." << endl;
//     }

//     return 0;
// }

// Radiusi r bo'lgan doira ko'rinishidagi alyumin plastinkadan o'lchamlari axb va pxq bo'lgan ikkita to'g'ri to'ritburchak
// shaklidagi plastinkalarni qirqib olish mumkin yoki yo'qligi aniqlansin.

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     double r, a, b, p, q;

//     cout << "Alyumin plastinka radiusini kiriting (r): ";
//     cin >> r;

//     cout << "Birinchi to'rtburchak o'lchamlari (a b): ";
//     cin >> a >> b;

//     cout << "Ikkinchi to'rtburchak o'lchamlari (p q): ";
//     cin >> p >> q;

//     double diagonal1 = sqrt(a * a + b * b);

//     double diagonal2 = sqrt(p * p + q * q);

//     if (diagonal1 <= 2 * r)
//     {
//         cout << "Birinchi to'rtburchak o'lchami alyumin plastinka bilan qirqib olingan bo'lishi mumkin." << endl;
//     }
//     else
//     {
//         cout << "Birinchi to'rtburchak o'lchami alyumin plastinka bilan qirqib olinmaydi." << endl;
//     }

//     if (diagonal2 <= 2 * r)
//     {
//         cout << "Ikkinchi to'rtburchak o'lchami alyumin plastinka bilan qirqib olingan bo'lishi mumkin." << endl;
//     }
//     else
//     {
//         cout << "Ikkinchi to'rtburchak o'lchami alyumin plastinka bilan qirqib olinmaydi." << endl;
//     }

//     return 0;
// }

// 2022 yil uchun 210 – kunni topish dasturini tuzish.

// #include <iostream>
// #include <ctime>
// using namespace std;
// int main()
// {
//     int yil = 2022;
//     int kun_soni = 209;

//     tm vaqt = {};
//     vaqt.tm_year = yil - 1900;
//     vaqt.tm_mday = kun_soni + 1;

//     time_t vaqti = mktime(&vaqt);

//     vaqt = *localtime(&vaqti);
//     int kun = vaqt.tm_mday;
//     int oy = vaqt.tm_mon + 1;
//     int yil_natija = vaqt.tm_year + 1900;

//     cout << "Kiritilgan yilning kuni: " << kun_soni + 1 << endl;
//     cout << "Yil: " << yil_natija << endl;
//     cout << "Oy: " << oy << endl;
//     cout << "Kun: " << kun << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;

//     cout << "n=";
//     cin >> n;

//     switch (n)
//     {
//     case 1:
//         cout << "1-oyda 31 kun bor.";
//         break;
//     case 2:
//         cout << "2-oyda 28 kun bor.";
//         break;
//     case 3:
//         cout << "3-oyda 31 kun bor.";
//         break;
//     case 4:
//         cout << "4-oyda 30 kun bor.";
//         break;
//     case 5:
//         cout << "5-oyda 31 kun bor.";
//         break;
//     case 6:
//         cout << "6-oyda 30 kun bor.";
//         break;
//     case 7:
//         cout << "7-oyda 31 kun bor.";
//         break;
//     case 8:
//         cout << "8-oyda 31 kun bor.";
//         break;
//     case 9:
//         cout << "9-oyda 30 kun bor.";
//         break;
//     case 10:
//         cout << "10-oyda 31 kun bor.";
//         break;
//     case 11:
//         cout << "11-oyda 30 kun bor.";
//         break;
//     case 12:
//         cout << "12-oyda 31 kun bor.";
//         break;
//     default:
//         break;
//     }
// }

// Soat milining sutka boshidagi holati bilan h soat, m minut va s sekunddagi holatlari orasidagi f burchak (graduslarda) aniqlansin 0≤h≤11,0≤m,s≤59.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int h, m, s;
//     double hour_angle, minute_angle, second_angle;

//     cout << "Soatni kiriting (0-11): ";
//     cin >> h;
//     cout << "Minutni kiriting (0-59): ";
//     cin >> m;
//     cout << "Sekundni kiriting (0-59): ";
//     cin >> s;

//     hour_angle = (h % 12) * 30 + m * 0.5 + s * (0.5 / 60);
//     minute_angle = m * 6 + s * 0.1;
//     second_angle = s * 6;

//     cout << "Soat burchagi: " << hour_angle << " gradus" << endl;
//     cout << "Minut burchagi: " << minute_angle << " gradus" << endl;
//     cout << "Sekund burchagi: " << second_angle << " gradus" << endl;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;

//     if (x > 0)
//     {
//         y = pow(sin(2 * x), 2) - pow(cos(x), 2);
//     }
//     else if (x <= 0.3)
//     {
//         y = 1 / (pow(x, 2) - pow(x, 1 / 2));
//     }

//     cout << "Natija Y=" << y << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x, y, z;
//     float a, b;

//     cout << "z=";
//     cin >> z;
//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;

//     x = (z < 1) ? z : pow(z, 1 / 3);
//     y = -M_PI * x + a * pow(cos(x * x * x), 2) + b * pow(sin(x * x), 3);
//     cout << "y=" << y;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int a;
//     float b, m, n, x, y;

//     cout << "son kiriting (1-3) = ";
//     cin >> a;
//     cout << "x = ";
//     cin >> x;
//     switch (a)
//     {
//     case 1:
//         b = -1.6;
//         m = 0.9;
//         n = -1.4;
//         break;
//     case 2:
//         b = 4.5;
//         m = -2;
//         n = 2.2;
//         break;
//     case 3:
//         b = -4.5;
//         m = 0.5;
//         n = -1.5;
//         break;

//     default:
//         break;
//     }

//     if (abs(b * m) > pow(x, 2))
//     {
//         y = sin(b * m + cos(n * x));
//     }
//     else if (abs(b * m) < pow(x, 2))
//     {
//         y = cos(b * m - sin(x));
//     }
//     else
//     {
//         y = pow((exp(abs(cos(x))) + pow(abs(b * m * x), 1 / 2)), 1 / 2);
//     }

//     cout << "y=" << y;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     float y, x;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;

//     x = (pow(a, 2) - pow(b, 2)) / (pow(c, 2) - b);

//     if (x >= 0)
//     {
//         y = ((pow(a, 2) + pow(b, 2)) / c) + pow((a * a + x), 1 / 2);
//     }
//     else
//     {
//         y = (sin(x) + b) / (a - b);
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;
// }

// Oy raqamini berilgan. Kiritilgan oy qaysi faslga tegishli ekanligini chiqaruvchi dastur tuzilsin. (Masalan, 2 chi oy “qish” va hk)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int oy;

//     cout << "Oy=";
//     cin >> oy;

//     if (oy <= 12)
//     {
//         switch (oy)

//         {
//         case 1:

//         {
//             cout << "1-oy Qish fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 2:

//         {
//             cout << "2-oy Qish fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 3:

//         {
//             cout << "3-oy Bahor fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 4:

//         {
//             cout << "4-oy Bahor fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 5:

//         {
//             cout << "5-oy Bahor fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 6:

//         {
//             cout << "6-oy Yoz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 7:

//         {
//             cout << "7-oy Yoz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 8:

//         {
//             cout << "8-oy Yoz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 9:

//         {
//             cout << "9-oy Kuz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 10:

//         {
//             cout << "10-oy Kuz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 11:

//         {
//             cout << "11-oy Kuz fasliga to'g'ri keladi" << endl;
//             break;
//         }

//         case 12:

//         {
//             cout << "12-oy Qish fasliga to'g'ri keladi" << endl;
//             break;
//         }
//         }
//     }
// }

// Berilgan 5 ta haqiqiy sonlarning eng kattasini topadigan dastur
// tuzilsin.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d, e;
//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;
//     cout << "d=";
//     cin >> d;
//     cout << "e=";
//     cin >> e;
//     if (a > b && a > c && a > d && a > e)
//     {
//         cout << "Eng kattasi " << a << endl;
//     }
//     if (b > a && b > c && b > d && b > e)
//     {
//         cout << "Eng kattasi " << b << endl;
//     }
//     if (c > a && c > b && c > d && c > e)
//     {
//         cout << "Eng kattasi " << c << endl;
//     }
//     if (d > a && d > b && d > c && d > e)
//     {
//         cout << "Eng kattasi " << d << endl;
//     }
//     if (e > a && e > b && e > c && e > d)
//     {
//         cout << "Eng kattasi " << e << endl;
//     }

//     return 0;
// }

// Noldan farqli berilgan R1, R2, R3 elektr qarshiliklari uchun R0 hisoblansin.

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float R0, R1, R2, R3;

//     cout << "R1=";
//     cin >> R1;
//     cout << "R2=";
//     cin >> R2;
//     cout << "R3=";
//     cin >> R3;

//     R0 = (R2 * R3 + R1 * R3 + R1 * R2) / (R1 * R2 * R3);

//     cout << "Natija : " << R0 << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x;
//     float y;

//     cout << "x=";
//     cin >> x;

//     y = (x <= -1) ? (-1 / pow(x, 2)) : ((x > -1 && x <= 2) ? pow(x, 2) : 4);

//     cout << "Natija : Y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float x;
//     float y;

//     cout << "x=";
//     cin >> x;

//     y = (x <= -1) ? (atan(x) * sqrt(fabs(x - 2))) : ((x > -1 && x <= 2) ? (2.71 * pow(cos(M_PI * x), 2)) : (log(x - 1) * sin(M_PI * x / 2)));

//     cout << "Natija : Y=" << y << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a, b, t, y, s;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "t=";
//     cin >> t;

//     y = exp(-b * t) * sin(a * t + b) - pow(abs(b * t + a), 1 / 2);

//     s = b * sin(a * t * t * cos(2 * t) - 1);

//     cout << "Natija: y=" << y << " s=" << s << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     float y, x;

//     cout << "a=";
//     cin >> a;
//     cout << "b=";
//     cin >> b;
//     cout << "c=";
//     cin >> c;

//     x = (pow(a, 2) - pow(b, 2)) / (pow(c, 2) - b);

//     if (x >= 0)
//     {
//         y = ((pow(a, 2) + pow(b, 2)) / c) + pow((a * a + x), 1 / 2);
//     }
//     else
//     {
//         y = (sin(x) + b) / (a - b);
//     }

//     cout << "Natija Y=" << fixed << setprecision(3) << y << endl;
// }

// Haqiqiy x,y va z sonlar berilgan bo‘lsa, quyidagilar aniqlansin:
// a) max(x,y,z);                 b) max(x,y)+min(y,z);
// d) max(x+y+z,x*y*z);    e) min((x+y+z)/2,x*z+1).

// #include <bits/stdc++.h>
// using namespace std;

// int max(int a, int b)
// {
//     return a > b ? a : b;
// }

// int min(int a, int b)
// {
//     return a < b ? a : b;
// }

// int main()
// {
//     int x, y, z;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;
//     cout << "z=";
//     cin >> z;

//     int max_xyz = max(max(x, y), z);
//     cout << "a) max(x, y, z) = " << max_xyz << endl;

//     int max_xy = max(x, y);
//     int min_yz = min(y, z);
//     int b_result = max_xy + min_yz;
//     cout << "b) max(x, y) + min(y, z) = " << b_result << endl;

//     int sum_xyz = x + y + z;
//     int product_xyz = x * y * z;
//     int d_result = max(sum_xyz, product_xyz);
//     cout << "d) max(x + y + z, x * y * z) = " << d_result << endl;

//     int average_xyz = (x + y + z) / 2;
//     int ez_result = min(average_xyz, x * z + 1);
//     cout << "e) min((x + y + z) / 2, x * z + 1) = " << ez_result << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     float x, y;

//     cout << "x=";
//     cin >> x;
//     cout << "y=";
//     cin >> y;

//     if ((x + 1 <= y && y <= x + 2) || (-x + 1 <= y && y <= -x + 2) && y >= 0)
//     {
//         cout << "Kiritilgan nuqta (x, y) yechimda joylashgan soha ichida yotadi" << endl;
//     }
//     else
//     {
//         cout << "Kiritilgan nuqta (x, y) yechimda joylashgan soha ichida yo'q" << endl;
//     }

//     return main();
// }

// Uch xonali butun son (k) raqamlari yig’indisini (s) butun o’zgaruvchiga o’zlashtirilsin.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int k;
//     cout << "Butun sonni kiriting: ";
//     cin >> k;

//     int s = 0;
//     int original_k = k;

//     while (k != 0)
//     {
//         int raqam = k % 10;
//         s += raqam;
//         k /= 10;
//     }

//     cout << "Raqamlar yig'indisi: " << s << endl;

//     int uzgaruvchi = s;

//     cout << "Asl k butun soni: " << original_k << endl;
//     cout << "O'zgaruvchi s: " << uzgaruvchi << endl;

//     return 0;
// }

// n ta elementdan tashkil topgan massiv berilgan. Bu massivning juft elementlaridan yangi massiv hosil qilinsin. (Ko'rsatkichlardan foydalanib hisoblansin).
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cout << "Massiv uzunligini kiriting: ";
//     cin >> n;

//     int massiv[n];

//     cout << "Massiv elementlarini kiriting:\n";
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> massiv[i];
//     }

//     int yangiMassiv[100];
//     int *pYangiMassiv = yangiMassiv;

//     for (int i = 0; i < n; i += 2)
//     {
//         if (massiv[i] % 2 == 0)
//         {
//             *pYangiMassiv = massiv[i];
//             ++pYangiMassiv;
//         }
//     }

//     cout << "Yangi massiv: ";
//     for (int i = 0; i < n / 2; ++i)
//     {
//         cout << yangiMassiv[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {
//     int n;
//     int m = 0;

//     cout << "n = ";
//     cin >> n;

//     int *a = new int[n];
//     int *b = new int[m];

//     cout << "Massiv elementlarini kiriting : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> *(a + i);
//         if (*(a + i) % 2 == 0)
//         {
//             *(b + m) = *(a + i);
//             m++;
//         }
//     }

//     cout << "a[] = ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(a + i) << " ";
//     }
//     cout << endl;

//     cout << "b[] = ";
//     for (int i = 0; i < m; i++)
//     {
//         cout << *(b + i) << " ";
//     }

//     delete[] a;
//     delete[] b;

//     return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = 14.26;
//     float y = -1.22;
//     float z = 0.035;
//     float t;

//     t = ((2 * cos(x - (M_PI / 6))) / (0.5 + pow(sin(y), 2))) * (1 + (pow(z, 2)) / (3 - (pow(z, 2)) / 5));

//     cout << "Natija t=" << t << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = -15.246;
//     float y = 0.04642;
//     float z = 2000.1;
//     float a;

//     a = log(pow(y, -sqrt(abs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2);

//     cout << "Natija a=" << a << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = 0.1722;
//     float y = 6.33;
//     float z = 0.000325;
//     float j;

//     j = 5 * atan(x) - 0.25 * acos(x) * ((x + 3 * abs(x - y) + pow(x, 2.0)) / (abs(x - y) * z + pow(x, 2.0)));

//     cout << "Natija j=" << j << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = 182.5;
//     float y = 18.225;
//     float z = -0.03298;
//     float w;

//     w = abs(pow(x, (y / x)) - pow((y / x), 0.33)) + (y - x) * ((cos(y) - (z / (y - x))) / (1 + pow((y - x), 2)));

//     cout << "Natija w=" << w << endl;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     float x = 17.421;
//     float y = 0.010365;
//     float z = 82800;
//     float f;

//     f = (pow((y + pow((x - 1), 0.33)), 0.25)) / (abs(x - y) * (pow(sin(z), 2.0) + tan(z)));

//     cout << "Natija f=" << f << endl;
// }