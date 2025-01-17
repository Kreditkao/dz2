#pragma once
#include <iostream>
#include <string>
using namespace std;


class Visa {
private:
    string country;
    string issueDate;
    string expiryDate;

public:
    Visa();
    Visa(const string& country, const string& issueDate, const string& expiryDate);

    string getCountry() const;
    string getIssueDate() const;
    string getExpiryDate() const;

    void setCountry(const string& country);
    void setIssueDate(const string& issueDate);
    void setExpiryDate(const string& expiryDate);

    void printInfo() const;
};

