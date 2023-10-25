#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

const int ABCSize = 33;

const char low_ch[] = { 'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к',
 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я'};
const char high_ch[] = { 'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К',
 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я'};

string cipher(const string& input_s, const int shift)
{
    bool Ok;
    string output_s("");
    for (unsigned i = 0; i < input_s.length(); i++)
    {
        Ok = false;
        for (int j = 0; j < ABCSize; j++)
        {
            if (input_s[i] == low_ch[j])
            {
                j += shift;
                while (j >= ABCSize) j -= ABCSize;
                while (j < 0) j += ABCSize;
                output_s += low_ch[j];
                Ok = true;
                break;
            }
            else if (input_s[i] == high_ch[j])
            {
                j += shift;
                while (j >= ABCSize) j -= ABCSize;
                while (j < 0) j += ABCSize;
                output_s += high_ch[j];
                Ok = true;
                break;
            }
        }
        if (!Ok) output_s += input_s[i];
    }
    return output_s;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s[150];
    int k;
    cout <<"Введите строку: ";
    cin.getline(s, 150);
    cout << "Введите шаг: ";
    cin >> k;
    cout << "Зашифрованная строка: " << cipher(s, k) << ' ';
            
}
