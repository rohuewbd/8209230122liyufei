#include<iostream> 
#include<string> 
using namespace std;
int main() {
    string input;
    cout << "������һ���ַ���";
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
    cout << "��ĸ������" << letters << endl;
    cout << "�ո������" << space << endl;
    cout << "���ָ���" << digit << endl;
    cout << "�����ַ�������" << other << endl;
    return 0;
}