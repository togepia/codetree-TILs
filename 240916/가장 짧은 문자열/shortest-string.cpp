#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2, str3;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    if(str1.length()>=str2.length() && str2.length()>=str3.length()){
        cout << str1.length() - str3.length();
    }
    else if(str1.length()>=str3.length() && str3.length()>=str2.length()){
        cout << str1.length() - str2.length();
    }
    else if(str2.length()>=str1.length() && str1.length()>=str3.length()){
        cout << str2.length() - str3.length();
    }
    else if(str2.length()>=str3.length() && str3.length()>=str1.length()){
        cout << str2.length() - str1.length();
    }
    else if(str3.length()>=str2.length() && str2.length()>=str1.length()){
        cout << str3.length() - str1.length();
    }
    else if(str3.length()>=str1.length() && str1.length()>=str2.length()){
        cout << str3.length() - str2.length();
    }
    return 0;
}