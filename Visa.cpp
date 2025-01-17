#include "Visa.h"

Visa::Visa() {}

Visa::Visa(const string& country, const string& issueDate, const string& expiryDate)
    : country(country), issueDate(issueDate), expiryDate(expiryDate) {}

string Visa::getCountry() const 
{
    return country; 
}
string Visa::getIssueDate() const 
{ 
    return issueDate; 
}
string Visa::getExpiryDate() const 
{ 
    return expiryDate; 
}

void Visa::setCountry(const string& country) 
{ 
    this->country = country;
}
void Visa::setIssueDate(const string& issueDate) 
{ 
    this->issueDate = issueDate; 
}
void Visa::setExpiryDate(const string& expiryDate) 
{ 
    this->expiryDate = expiryDate; 
}

void Visa::printInfo() const 
{
    cout << "Visa Info:\n"
        << "Country: " << country << "\n"
        << "Issue Date: " << issueDate << "\n"
        << "Expiry Date: " << expiryDate << "\n";
}
