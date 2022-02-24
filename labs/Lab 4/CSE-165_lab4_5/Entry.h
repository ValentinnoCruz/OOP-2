#ifndef ENTRY_H_
#define ENTRY_H_

#include<iostream>
#include<string>

struct Entry{
    // string variables
    std::string first_name;
    std::string last_name;
    std::string email_address;

    // getter function for first_name
    std::string get_first_name()
    {
        return this->first_name;
    }

    // getter function for last_name
    std::string get_last_name()
    {
        return this->last_name;
    }
    
    // getter function for email_address
    std::string get_email_address()
    {
        return this->email_address;
    }



    // setter function for first_name
    void set_first_name(std::string first_name)
    {
        this->first_name = first_name;
        return;
    }

    // setter function for last_name
    void set_last_name(std::string last_name)
    {
        this->last_name = last_name;
        return;
    }

    // setter function for email_address
    void set_email_address(std::string email_address)
    {
        this->email_address = email_address;
        return;
    }


    // prints the data
    void print()
    {
        std::cout << "First Name: " << (this->get_first_name()) << std::endl;
        std::cout << "Last Name: " << (this->get_last_name()) << std::endl;
        std::cout << "Email: " << (this->get_email_address()) << std::endl;
    }

};

#endif // ENTRY_H_INCLUDED