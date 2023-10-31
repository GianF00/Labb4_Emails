//
// Created by Gian Franco on 2022-12-10.
//
#include <iostream>
#include "Email.h"

Email::Email(std::string Who, std::string Date, std::string Subject) : who(Who), date(Date), subject(Subject){

}

std::ostream &operator<<(std::ostream &os, Email &e) {
    os << "Name: " << e.who << " date: " << e.date << " subject: " << e.subject << "\n";
    return os;
}

