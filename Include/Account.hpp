#pragma once

#include <string>
#include <vector>
#include <fstream>

#include <Student.hpp>

class Account
{
    private:
        Student m_account;
        std::string m_userName;
        std::string m_password;
        std::ofstream m_loginCredentialsStorage;

    public:
        void createAccount();
        void modifyAccountCredentials();
        void SignInAccount();
        void credentialStorage();

};