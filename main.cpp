#include <iostream>
#include <map>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    map <string, string> S;
    int n;
    cout << "Введите количество элементов:\n";
    cin >> n;
    cout << "\nВведите ваши элементы:\n";
    for (int i = 0; i < n; i++) {
        string t1, t2;
        cin >> t1 >> t2;
        S[t1] = t2;
        S[t2] = t1;
    }
    cout << "Введите искомое:\n";
    string t;
    cin >> t;
    cout << S.find(t)->second << endl;

}
