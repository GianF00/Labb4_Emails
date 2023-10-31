//
// Created by gianf on 2022-12-10.
//

#ifndef LABB4_EMAILS_MAILBOX_H
#define LABB4_EMAILS_MAILBOX_H
#include <vector>
#include "Email.h"
class MailBox{
private:
    std::vector<Email>mailbox;
public:
    std::vector<Email>Mailbox();        //ctor for vector
    void push(const Email& mail);
    size_t size();
    auto begin();
    auto end();
    void SortWho();
    void SortDate();
    void SortSubject();


};
#endif //LABB4_EMAILS_MAILBOX_H
