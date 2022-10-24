//
//  main.cpp
//  lab 4
//
//  Created by Дмитрий Вискунов on 20.10.2022.
//

#include <iostream>
#include <cmath>
using namespace::std;
int main() {
    int AA,BB;
    double xe1,ye1,xe2,ye2,x1,x2,x0okr,x0el,r,i,it,y1,y2,y0okr,y0el;
    AA = 21;    // коэффицент а эллипса
    BB = 35;    // коэффицент b эллипса
    r = 32;     // радиус круга
    x1 = -23;   // Пересечение круга с осью Х
    x2 = 35;    // Пересечение эллипса с осью X
    y2 = 35;    // Высота эллипса
    y1 = 29;    // Высота круга
    // вычисляем центр окружности
    y0okr = y1-r;
    x0okr = x1+r;
    // вычисляем центр элипса
    x0el = x2 - AA;
    y0el = y2 - BB;
    i = 0; // начало цикла
    it = 0.0001; // шаг цикла
    for(i,i<90;i+=it;){
        xe1 = x0el + AA * cos(i);
        ye1 = y0el + BB * sin(i);
        if (abs(sqrt(xe1 - x0okr) + sqrt(ye1 - y0okr) - sqrt(r)) < 0.001){
            cout <<"X1: "<< xe1 << " Y1: " << ye1 << endl;
            xe2 = xe1;
            ye2 = -ye1 + y0okr;
            cout << "X2: " << xe2 << " Y2: " << ye2 << endl;
            break;
        }
    }
}
