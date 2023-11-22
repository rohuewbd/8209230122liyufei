#include<iostream> 
#include<string> 
using namespace std;
int main() {
    string input;
    cout << "请输入一行字符：";
    getline(cin, input);
    int letters = 0,space = 0,digit = 0,other = 0;
    for (char c : input)
    {
        if (isalpha(c))
        {
            letters++;
        }
        else if (isspace(c)) 
        {
            space++;
        }
        else if (isdigit(c))
        {
            digit++;

        }
        else 
        {
            other++;
        }
    }
    cout << "字母个数：" << letters << endl;
    cout << "空格个数：" << space << endl;
    cout << "数字个数" << digit << endl;
    cout << "其它字符个数：" << other << endl;
    return 0;
}