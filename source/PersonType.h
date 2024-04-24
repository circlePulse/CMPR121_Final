//
// Created by Omar Hboubati on 4/24/24.
//

#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>


class PersonType {
public:
    PersonType();

    PersonType(const std::string &newfName, const std::string &newlName, int newSSN);

private:
    std::string fName;
    std::string lName;
    int SSN;
};


#endif //PERSONTYPE_H
