#include "Passport.h"

Passport::Passport()
{
}

Passport::Passport(const string& series, const string& number, const string& surname, const string& name, const string& middleName, const string& birthDate, const string& birthPlace, const string& issueDate, const string& issuedBy, const string& registration)
    : series(series), number(number), surname(surname), name(name), middleName(middleName), birthDate(birthDate), birthPlace(birthPlace), issueDate(issueDate), issuedBy(issuedBy), registration(registration) {}

string Passport::getSeries() const
{
    return series;
}

string Passport::getNumber() const
{
    return number;
}

string Passport::getSurname() const
{
    return surname;
}

string Passport::getName() const
{
    return name;
}

string Passport::getMiddleName() const
{
    return middleName;
}

string Passport::getBirthDate() const
{
    return birthDate;
}

string Passport::getBirthPlace() const
{
    return birthPlace;
}

string Passport::getIssueDate() const
{
    return issueDate;
}

string Passport::getIssuedBy() const
{
    return issuedBy;
}

string Passport::getRegistration() const
{
    return registration;
}

void Passport::setSeries(const string& series)
{
    this->series = series;
}

void Passport::setNumber(const string& number)
{
    this->number = number;
}

void Passport::setSurname(const string& surname)
{
    this->surname = surname;
}

void Passport::setName(const string& name)
{
    this->name = name;
}

void Passport::setMiddleName(const string& middleName)
{
    this->middleName = middleName;
}

void Passport::setBirthDate(const string& birthDate)
{
    this->birthDate = birthDate;
}

void Passport::setBirthPlace(const string& birthPlace)
{
    this->birthPlace = birthPlace;
}

void Passport::setIssueDate(const string& issueDate)
{
    this->issueDate = issueDate;
}

void Passport::setIssuedBy(const string& issuedBy)
{
    this->issuedBy = issuedBy;
}

void Passport::setRegistration(const string& registration)
{
    this->registration = registration;
}

void Passport::printInfo() const
{
    cout << "Passport Info:\n"
        << "Series: " << series << "\n" 
        << "Number: " << number << "\n" 
        << "Surname: " << surname << "\n"
        << "Name: " << name << "\n" 
        << "Middle Name: " << middleName << "\n" 
        << "Birth Date: " << birthDate << "\n" 
        << "Birth Place: " << birthPlace << "\n" 
        << "Issue Date: " << issueDate << "\n" 
        << "Issued By: " << issuedBy << "\n" 
        << "Registration: " << registration << "\n";
}
