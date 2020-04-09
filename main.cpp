#include <iostream>
#include <cmath>

using namespace std;

void daj_punkty(double x0, double y0, double promien, double teta){

    double x1,y1,x2,y2,x3,y3,x4,y4,rp2,kat;
    kat=teta * M_PI / 180.0; // kat obrotu jest w lewo, przeciwnie do ruchu wskazowek zegara
    rp2=promien*sqrt(2)/2; // promien^(1/2) / 2
    coss= cos(kat);
    sinn=sin(kat);

    x1=  rp2 * coss - rp2 * sinn + x0; // prawy gorny
    x2=  rp2 * coss + rp2 * sinn + x0; // prawy dolny
    x3=  -rp2 * coss - rp2 * sinn + x0; // lewy gorny
    x4=  -rp2 * coss + rp2 * sinn + x0; // lewy dolny
    xx= -x0 * coss - (promien-y0) * sinn + x0; // punkt

    y1=  rp2 * sinn + rp2 * coss + y0; // prawy gorny
    y2=  rp2 * sinn - rp2 * coss + y0; // prawy dolny
    y3=  -rp2 * sinn + rp2 * coss + y0; // lewy gorny
    y4=  -rp2 * sinn - rp2 * coss + y0; // lewy dolny
    yy= -x0 * sinn + (promien-y0) * coss + y0; // punkt


    cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4;
    cout<<endl<<y1<<" "<<y2<<" "<<y3<<" "<<y4;
    cout<<endl<<xx<<" "<<yy;
}


int main() {

    daj_punkty(0,-4,10,0);

    return 0;
}
