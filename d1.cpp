#include <iostream>

using namespace std;

void t_na_g(double &rtx,double &rty,double &rtz,double &atrybut,double &rgx,double &rgy,double &rgz, int siem_om){
    cout << endl;
    cout << "Podaj Rx: ";
    cin >> rtx; 
    cout << "Podaj Ry: ";
    cin >> rty;
    cout << "Podaj Rz: ";
    cin >> rtz;
    cout << endl;

    if(siem_om==2){
        rtx=1/rtx;
        rty=1/rty;
        rtz=1/rtz;
    }

    cout << "WYNIK:\n";
    cout << "------------" << endl;
    cout << "Atrybut omowy: ";
    atrybut = (rtx*rty*rtz)/(rtx+rty+rtz);
    cout << atrybut << " om" << endl;

    cout << "Atrybut simensowy: ";
    cout << 1/atrybut << " simens" << endl;
    
    rgx = atrybut/rtx;
    rgy = atrybut/rty;
    rgz = atrybut/rtz;

    cout << endl;
    cout << "Zastepcza gwiazda:" << endl;
    cout << "Rx: " << rgx << " om" << endl;
    cout << "Ry: " << rgy << " om" << endl;
    cout << "Rz: " << rgz << " om" << endl;
    cout << endl;
    cout << "Gx: " << 1/rgx << " simens" << endl;
    cout << "Gy: " << 1/rgy << " simens" << endl;
    cout << "Gz: " << 1/rgz << " simens" << endl;
    cout << "------------" << endl << endl;

    
}

void g_na_t(double &rtx,double &rty,double &rtz,double &atrybut,double &rgx,double &rgy,double &rgz, int siem_om){
    cout << endl;
    cout << "Podaj Rx: ";
    cin >> rgx; 
    cout << "Podaj Ry: ";
    cin >> rgy;
    cout << "Podaj Rz: ";
    cin >> rgz;

    if(siem_om==2){
        rgx=1/rgx;
        rgy=1/rgy;
        rgz=1/rgz;
    }

    cout << "WYNIK:" << endl;
    cout << "------------" << endl;
    cout << endl; 
    cout << "Atrybut omowy: ";
    atrybut= rgy*rgz+rgz*rgx+rgx*rgy;
    cout << atrybut << endl;

    cout << "Atrybut simensowy: ";
    cout << 1/atrybut << " simens" << endl;

    rtx = atrybut/rgx;
    rty = atrybut/rgy;
    rtz = atrybut/rgz;

    cout << endl;
    cout << "Zastepczy trojkat:" << endl;
    cout << "Rx: " << rtx << endl;
    cout << "Ry: " << rty << endl;
    cout << "Rz: " << rtz << endl;
    cout << endl;
    cout << "Gx: " << 1/rtx << " simens" << endl;
    cout << "Gy: " << 1/rty << " simens" << endl;
    cout << "Gz: " << 1/rtz << " simens" << endl;
    cout << "------------" << endl << endl;
}

int main(){
    double rtx, rty, rtz, atrybut, rgx,rgy,rgz;
    int siem_om;

    cout << "\nWybierz tryb: " << endl;
    cout << "1: trojkat -> gwiazda" << endl;
    cout << "2: gwiazda -> trojkat" << endl;

    int wybor;
    cin >> wybor;

    cout << "\nPodajesz wielkosci w: " << endl;
    cout << "1 - om,  2 - siemens: ";  
    cin >> siem_om;

    switch (wybor)
    {
    case 1:
        t_na_g(rtx, rty, rtz, atrybut, rgx,rgy,rgz, siem_om);
        break;

    case 2:
        g_na_t(rtx, rty, rtz, atrybut, rgx,rgy,rgz, siem_om);
        break;    
    
    default:
        return 0;
    }
}