//
// Created by Gian Franco on 2022-12-10.
//

#ifndef LABB4_EMAILS_EMAIL_H
#define LABB4_EMAILS_EMAIL_H
#include <string>

class Email{
private:
    std::string who;
    std::string date;
    std::string subject;
public:
    Email(std::string Who, std::string Date, std::string Subject);
    friend std::ostream& operator<<(std::ostream& os, Email& e);
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWheDate;

};


struct CompWhoDateSubject{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.who != rhs.who) {
            return lhs.who < rhs.who;
        }
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        }
        return lhs.subject < rhs.subject;
    }

};

struct CompDateWhoSubject{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.date != rhs.date) {
            return lhs.date < rhs.date;
        }
        if (lhs.who != rhs.who) {
            return lhs.who < lhs.who;
        }
        return lhs.subject < rhs.subject;
    }
};

struct CompSubjectWheDate{
    bool operator()(const Email& lhs, const Email& rhs) {
        if (lhs.subject != rhs.subject) {
            return lhs.subject < rhs.subject;
        }
        if (lhs.who != rhs.who) {
            return lhs.who < lhs.who;
        }
        return lhs.date < rhs.date;
    }
};
#endif //LABB4_EMAILS_EMAIL_H
