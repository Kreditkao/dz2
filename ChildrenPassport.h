#pragma once
#include <vector>
#include "ForeignPassport.h"

class ChildrenPassport : public ForeignPassport {
private:
    string guardianName;  // Ім'я опікуна
    string schoolName;    // Назва школи

public:
    ChildrenPassport();
    ChildrenPassport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration, const vector<Visa>& visas, const string& guardianName, const string& schoolName);

    string getGuardianName() const;
    string getSchoolName() const;

    void setGuardianName(const string& guardianName);
    void setSchoolName(const string& schoolName);

    void printInfo() const;
};
