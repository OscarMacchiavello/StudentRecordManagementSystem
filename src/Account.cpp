#include <Account.hpp>

void Account::createAccount() {
    std::cout << "\nEnter a username: ";
    std::getline(std::cin, m_userName, '\n');

    std::cout << "\nEnter a password: ";
    std::getline(std::cin, m_password, '\n');
}

void Account::modifyAccountCredentials() {
    std::cout << "\nEnter a new username: ";
    std::getline(std::cin, m_userName, '\n');

    std::cout << "\nEnter a new password: ";
    std::getline(std::cin, m_password, '\n');
}

void Account::SignInAccount() {

}

void Account::credentialStorage() {
    std::string outputFile = m_userName + ".txt";

    m_loginCredentialsStorage.open(outputFile.c_str());

    m_loginCredentialsStorage << m_userName << "\n";
    m_loginCredentialsStorage << m_password << "\n";

    m_loginCredentialsStorage.close();
}
