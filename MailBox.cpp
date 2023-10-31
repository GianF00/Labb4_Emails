//
// Created by Gian Franco on 2022-12-11.
//
#include "MailBox.h"
#include <vector>
#include "Email.h"
#include <algorithm>


void MailBox::push(const Email &mail) {
    mailbox.push_back(mail);
}

size_t MailBox::size() {
    return mailbox.size();
}

std::vector<Email> MailBox::Mailbox() {
    return mailbox; //returnera pvt medlem
}

auto MailBox::end() {
    return mailbox.end();
}

auto MailBox::begin() {
    return mailbox.begin();
}

void MailBox::SortWho() {

    std::sort(mailbox.begin(), mailbox.end(), CompWhoDateSubject());
}

void MailBox::SortDate() {
    std::sort(mailbox.begin(), mailbox.end(), CompDateWhoSubject());
}

void MailBox::SortSubject() {
    std::sort(mailbox.begin(), mailbox.end(), CompSubjectWheDate());
}