#include <iostream>
using namespace std;

// Task 1

// int toMinutes(int h, int m) {
//     return h*60 + m;
// }
// int convertTime(int current, int correct) {
//         int a=correct-current;
//     int count =0;
//         while (a>=60) {
//             a-=60;
//             count++;
//         }
//     while (a>=15) {
//         a-=15;
//         count++;
//     }
//     while (a>=5) {
//         a-=5;
//         count++;
//     }
//     while (a>=1) {
//         a-=1;
//         count++;
//     }
//     return count;
// }
//
//
// int main() {
//     int h1, m1, h2, m2;
//     char colon;
//     cin >> h1 >> colon >>m1 >> h2 >> colon  >> m2;
//     int current=0; int correct=0;
//     current= toMinutes(h1, m1);
//     correct= toMinutes(h2, m2);
//     cout << convertTime(current,correct)<< endl;
// }


// Task 2

// bool hasAlternatingBits(int n) {
//     int a = n%2;
//     n/=2;
//     while (n>0) {
//         int b = n % 2;
//         n/=2;
//         if (a==b) {
//             return false;
//         }
//         a=b;
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     if (hasAlternatingBits(n)) {
//         cout<<"True"<<endl;
//     }
//     else {
//         cout<<"False"<<endl;
//     }
// }


// Task 3

// int tribonacci(int n) {
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     if (n==2) {
//         return 1;
//     }
//     int T0=0, T1=1, T2=1;
//     int Tn=0;
//     for (int i=1; i<=n-2; i++) {
//         Tn=T0+T1+T2;
//         T0=T1;
//         T1=T2;
//         T2=Tn;
//     }
//     return Tn;
//
// }
//  int main() {
//     int n;
//     cin >> n;
//     cout << tribonacci(n) << endl;
// }


// Task 4

// void printRepeat(char c, int times) {
//     for (int i = 0; i < times; i++) {
//         cout << c;
//     }
// }
//
// int main() {
//     int n, k;
//     cin >> n >> k;
//     int extra = k - n;
//     int z = extra / 25;
//     int r = extra % 25;
//     printRepeat('a', n - z - (r > 0 ? 1 : 0));
//     if (r > 0) {
//         cout << char('a' + r);
//     }
//     printRepeat('z', z);
//     cout << endl;
// }

// Task 5

// long long power(int base, int exp) {
//     long long result = 1;
//     for (int i = 0; i < exp; i++) {
//         result *= base;
//     }
//     return result;
// }
//
// int integerBreak(int n) {
//     if (n == 2) return 1;
//     if (n == 3) return 2;
//     int thr = n / 3;
//     int r = n % 3;
//     switch (r) {
//         case 0:
//             return power(3, thr);
//         case 1:
//             return power(3, thr - 1) * 4;
//         case 2:
//             return power(3, thr) * 2;
//     }
//     return 0;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << integerBreak(n) << endl;
// }


// Task 7

// int brokenCalc(int startValue, int target) {
//     int count = 0;
//     while (target > startValue) {
//         if (target % 2 == 0) {
//             target /= 2;
//         }
//         else {
//             target += 1;
//         }
//         count++;
//     }
//     return count + (startValue - target);
// }
// int main() {
//     int startValue;
//     cin >> startValue;
// }


