#include <iostream>
#include "Email.h"
#include "MailBox.h"

void show(const std::vector<Email> &inkorg){
    for(auto e: inkorg){
        std::cout <<e;
    }
}

int main() {
    MailBox inbox;
    Email nummer1("Franco", "2022-01-02", "Labb1");
    Email nummer2("Silvia", "2018-03-25", "Labb2");
    Email nummer3("Andreas", "2021-06-11", "Tenta");
    Email nummer4("William", "2023-11-21", "Mat");
    inbox.push(nummer1);
    inbox.push(nummer2);
    inbox.push(nummer3);
    inbox.push(nummer4);

    std::cout << "sort by subject \n";
    inbox.SortSubject();
    show(inbox.Mailbox());

    std::cout << "sort by date \n";
    inbox.SortDate();
    show(inbox.Mailbox());

    std::cout << "sort by Name \n";
    inbox.SortWho();
    show(inbox.Mailbox());



    return 0;
}
