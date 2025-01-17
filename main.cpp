#include <iostream>
#include "ChildrenPassport.h"
#include "ForeignPassport.h"
#include "Passport.h"
#include "Visa.h"

int main() {
    Passport passport("AB", "123456", "Ivanov", "Ivan", "Ivanovich", "01.01.1980", "Kyiv", "15.03.1995", "MVD Ukraine", "Kyiv, Street 1, House 2");
    passport.printInfo();
    cout << "----------------------\n";

    Visa visa1("USA", "01.01.2020", "31.12.2025");
    Visa visa2("Canada", "01.06.2021", "31.05.2026");

    vector<Visa> visas = { visa1, visa2 };
    ForeignPassport foreignPassport("CD", "654321", "Petrov", "Petr", "Petrovich", "10.10.1990", "Kharkiv", "20.05.2010", "MVD Ukraine", "Kharkiv, Street 2, House 3", visas);
    foreignPassport.addVisa(Visa("UK", "01.05.2022", "30.04.2027"));
    foreignPassport.printInfo();
    cout << "----------------------\n";

    ChildrenPassport childrenPassport("EF", "789101", "Sidorov", "Sidor", "Sidorovich", "15.07.2005", "Odesa", "10.10.2015", "MVD Ukraine", "Odesa, Street 3, House 4", visas, "Sidorov Sergey", "Odesa School #1");
    childrenPassport.addVisa(Visa("France", "01.08.2023", "31.07.2028"));
    childrenPassport.printInfo();

    return 0;
}
