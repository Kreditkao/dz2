#include "ForeignPassport.h"

ForeignPassport::ForeignPassport() : Passport() {}

ForeignPassport::ForeignPassport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration, const vector<Visa>& visas)
    : Passport(series, number, surname, name, middleName, birthDate, birthPlace, issueDate, issuedBy, registration), visas(visas) {}

void ForeignPassport::addVisa(const Visa& visa) 
{
    visas.push_back(visa);
}

void ForeignPassport::printInfo() const 
{
    Passport::printInfo();
    cout << "Visas:\n";
    for (const auto& visa : visas) {
        visa.printInfo();
        cout << "----------------------\n";
    }
}
