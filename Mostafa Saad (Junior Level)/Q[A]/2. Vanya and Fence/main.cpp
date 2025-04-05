#include<iostream>
using namespace std;

int main() {
    int n, h, min_width = 0;
    cin >> n >> h;

    int heights[n]; // مصفوفة لتخزين القيم

    for(int i = 0; i < n; i++)
        cin >> heights[i]; // قراءة جميع القيم دفعة واحدة

    for(int i = 0; i < n; i++) {
        if (heights[i] <= h)
            min_width += 1;
        else
            min_width += 2;
    }

    cout << min_width << endl;
    return 0;
}
