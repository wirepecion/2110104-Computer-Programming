#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int y){
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}


int dcal(int y, int m, int d) { /* Rata Die day one is 0001-01-01 */
    if (m < 3)
        y--, m += 12;
    return 365*y + y/4 - y/100 + y/400 + (153*m - 457)/5 + d - 306;
}

int main(){

    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

    y1 -= 543;
    y2 -= 543;

    int days = dcal(y2, m2, d2) - dcal(y1, m1, d1);
    cout<< days <<" "<<round(sin(2*M_PI*days/23) * 100.0)/ 100.0 << " " << round(sin(2*M_PI*days/28) * 100.0)/ 100.0 << " " << round(sin(2*M_PI*days/33) * 100.0)/ 100.0;

    return 0;
}