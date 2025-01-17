#pragma once
#include <vector>
#include "Passport.h"
#include "Visa.h"

class ForeignPassport : public Passport {
private:
    vector<Visa> visas;

public:
    ForeignPassport();
    ForeignPassport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration, const vector<Visa>& visas);

    void addVisa(const Visa& visa);
    void printInfo() const;
};
