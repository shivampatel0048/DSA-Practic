#include <iostream>
#include <string>
using namespace std;

// 1st Approach: Using while loop
void approach1(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Approach 1 result: " << sum << endl;
}

// 2nd Approach: Using do-while loop
void approach2(int n) {
    int sum = 0;
    do {
        sum += n % 10;
        n /= 10;
    } while (n > 0);
    cout << "Approach 2 result: " << sum << endl;
}

// 3rd Approach: Using recursion
int approach3(int n) {
    if (n == 0) return 0;
    return (n % 10) + approach3(n / 10);
}

// 4th Approach: Using string conversion
void approach4(int n) {
    string num = to_string(n);
    int sum = 0;
    for(char digit : num) {
        sum += (digit - '0');
    }
    cout << "Approach 4 result: " << sum << endl;
}

// 5th Approach: Using for loop with log10
void approach5(int n) {
    int sum = 0;
    for(int i = n; i > 0; i /= 10) {
        sum += i % 10;
    }
    cout << "Approach 5 result: " << sum << endl;
}

// 6th Approach: Using while loop with temporary variable
void approach6(int n) {
    int sum = 0;
    int temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "Approach 6 result: " << sum << endl;
}

int main() {
    int number = 145;
    cout << "Number: " << number << endl;
    
    approach1(number);
    approach2(number);
    cout << "Approach 3 result: " << approach3(number) << endl;
    approach4(number);
    approach5(number);
    approach6(number);

    return 0;
}