#include <iostream>
using namespace std;
 
int main() {
    int x;
    bool y= false;
     


        cout << "Ingrese un numero: " << endl;
        cin >> x;
     
        if (x < 1 || x > 999) {
            cout << "INGRESA UN NUMERO DEL 1 AL 999" << endl;
                } else {
                if (x >= 900) {
                    cout << "NOVECIENTOS ";
                    x = x - 900;
                } else if (x >= 800) {
                    cout << "OCHOCIENTOS ";
                    x = x - 800;
                } else if (x >= 700) {
                    cout << "SETECIENTOS ";
                    x = x - 700;
                } else if (x >= 600) {
                    cout << "SEISCIENTOS ";
                    x = x - 600;
                } else if (x >= 500) {
                    cout << "QUINIENTOS ";
                    x = x - 500;
                } else if (x >= 400) {
                    cout << "CUATROCIENTOS ";
                    x = x - 400;
                } else if (x >= 300) {
                    cout << "TRESCIENTOS ";
                    x = x - 300;
                } else if (x >= 200) {
                    cout << "DOSCIENTOS ";
                    x = x - 200;
                } else if (x > 100) {
                    cout << "CIENTO ";
                    x = x - 100;
                } else if (x == 100) {
                    cout << "CIEN";
                    x = x - 100;
                }
        
                if (x > 90) {
                    cout << "NOVENTA Y ";
                    x = x - 90;
                } else if (x == 90) {
                    cout << "NOVENTA";
                    x = x - 90;
                }else

                if (x > 80) {
                    cout << "OCHENTA Y ";
                    x = x - 80;
                } else if (x == 80) {
                    cout << "OCHENTA";
                    x = x - 80;
                }else

                if (x > 70) {
                    cout << "SETENTA Y ";
                    x = x - 70;
                } else if (x == 70) {
                    cout << "SETENTA";
                    x = x - 70;
                }else

                if (x > 60) {
                    cout << "SESENTA Y ";
                    x = x - 60;
                } else if (x == 60) {
                    cout << "SESENTA";
                    x = x - 60;
                }else

                if (x > 50) {
                    cout << "CINCUENTA Y ";
                    x = x - 50;
                } else if (x == 50) {
                    cout << "CINCUENTA";
                    x = x - 50;
                }else

                if (x > 40) {
                    cout << "CUARENTA Y ";
                    x = x - 40;
                } else if (x == 40) {
                    cout << "CUARENTA";
                    x = x - 40;
                }else

                if (x > 30) {
                    cout << "TREINTA Y ";
                    x = x - 30;
                } else if (x == 30) {
                    cout << "TREINTA";
                    x = x - 30;
                }else

                if (x > 20) {
                    cout << "VEINTI";
                    x = x - 20;
                } else if (x == 20) {
                    cout << "VEINTE";
                    x = x - 20;
                } else

                if (x == 10) {
                    cout << "DIEZ";
                    x = x - 10;
                } else

                if (x == 19) {
                    cout << "DIECINUEVE";
                    x = x - 19;
                } else

                if (x == 18) {
                    cout << "DIECIOCHO";
                    x = x - 18;
                } else

                if (x == 17) {
                    cout << "DIECISIETE";
                    x = x - 17;
                } else

                if (x == 16) {
                    cout << "DIECISEIS";
                    x = x - 16;
                }else

                if (x == 15) {
                    cout << "QUINCE";
                    x = x - 15;
                }else

                if (x == 14) {
                    cout << "CATORCE";
                    x = x - 14;
                }else

                if (x == 13) {
                    cout << "TRECE";
                    x = x - 13;
                }else

                if (x == 12) {
                    cout << "DOCE";
                    x = x - 12;
                }else

                if (x == 11) {
                    cout << "ONCE";
                    x = x - 11;
                }else
                
                if (x == 1) {
                    cout << "UNO";
                    x = x - 1;
                }

                if (x == 2) {
                    cout << "DOS";
                    x = x - 2;
                }

                if (x == 3) {
                    cout << "TRES";
                    x = x - 3;
                }

                if (x == 4) {
                    cout << "CUATRO";
                    x = x - 4;
                }

                if (x == 5) {
                    cout << "CINCO";
                    x = x - 5;
                }

                if (x == 6) {
                    cout << "SEIS";
                    x = x - 6;
                }

                if (x == 7) {
                    cout << "SIETE";
                    x = x - 7;
                }
                
                if (x == 8) {
                    cout << "OCHO";
                    x = x - 8;
                }

                if (x == 9) {
                    cout << "NUEVE";
                    x = x - 9;
                }
        }

    

;
   

    cout << endl;
    cin.ignore();
    return 0;
}