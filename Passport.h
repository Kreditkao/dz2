#pragma once
#include <iostream>
#include <string>
using namespace std;

class Passport {
private:
    string series;
    string number;
    string surname;
    string name;
    string middleName; // По батькові
    string birthDate;
    string birthPlace;
    string issueDate;
    string issuedBy;
    string registration; // Прописка

public:
    Passport();
    Passport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration);

    string getSeries() const;
    string getNumber() const;
    string getSurname() const;
    string getName() const;
    string getMiddleName() const;
    string getBirthDate() const;
    string getBirthPlace() const;
    string getIssueDate() const;
    string getIssuedBy() const;
    string getRegistration() const;

    void setSeries(const string& series);
    void setNumber(const string& number);
    void setSurname(const string& surname);
    void setName(const string& name);
    void setMiddleName(const string& middleName);
    void setBirthDate(const string& birthDate);
    void setBirthPlace(const string& birthPlace);
    void setIssueDate(const string& issueDate);
    void setIssuedBy(const string& issuedBy);
    void setRegistration(const string& registration);

    void printInfo() const;
};
