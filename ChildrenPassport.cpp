#include "ChildrenPassport.h"

ChildrenPassport::ChildrenPassport() : ForeignPassport() {}

ChildrenPassport::ChildrenPassport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration, const vector<Visa>& visas, const string& guardianName, const string& schoolName)
    : ForeignPassport(series, number, surname, name, middleName, birthDate, birthPlace, issueDate, issuedBy, registration, visas), guardianName(guardianName), schoolName(schoolName) {}

string ChildrenPassport::getGuardianName() const 
{
    return guardianName; 
}
string ChildrenPassport::getSchoolName() const 
{ 
    return schoolName;
}

void ChildrenPassport::setGuardianName(const string& guardianName) 
{ 
    this->guardianName = guardianName; 
}
void ChildrenPassport::setSchoolName(const string& schoolName) 
{ 
    this->schoolName = schoolName; 
}

void ChildrenPassport::printInfo() const 
{
    ForeignPassport::printInfo();
    cout << "Guardian Name: " << guardianName << "\n"
        << "School Name: " << schoolName << "\n";
}
