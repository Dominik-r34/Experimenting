

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int day , month , year , y , c , D , m ,  n;
    cout << " Write the date in DD MM GG format : "<< endl;;
    cout << "Type day : ";
    cin >> day ;
    cout << "Type  month: ";
    cin >> month ;
    cout << "Type year: ";
    cin >> year ;

    c = year / 100;                      // first 2 digits of year
    y = year % 100;                      // last 2 digits of year
    n = (2.6 * month - 0.2);            
    m = n % 7 ;                         // code number for months
    cout << " M = " << n << endl;
    month >=3 ? year : year - 1;
    D = day + m + y + c ;
    cout << "D = "  << D << endl;



    cout << day << "." << month << "." << year << " falls on ";

    switch (D  % 7)
    {
        case 0:
    cout << " sunday " ;
    break ;
        case 1 :
    cout << " monday";
    break;
        case 2 :
    cout <<" tuesday";
    break;
        case 3 :
    cout << " wednesday";
    break;
        case 4:
    cout << " thursday";
    break;
            case 5 :
    cout << " friday";
    break;
        case 6 :
    cout << " saturday";
    break;
        default :
    cout << " nowhere :/";
    break;
    }


cout << " . " << endl;


// made by domindo haker logistika d.o.o.



    return 0;
}
