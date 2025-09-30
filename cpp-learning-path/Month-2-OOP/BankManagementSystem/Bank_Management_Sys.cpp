//This program is meant to simulate a banks managerial system.

#include <iostream>
#include <string>
#include <cstdlib> //for random number generation on account number
#include <limits> //for std::numeric_limits
 

int main()
{
    std::cout << "Welcome to the Bank of Raheem!\n";
    std::cout << "This is a simple bank system to manage your account. Think of it a bit like a Virtual ATM.\n";
    std::cout << "In this system, you can create an account, deposit money, withdraw money (Good luck with that!), check your balance, and view your account details.\n";
    std::cout << "Shall we begin? (Y/N):";
    std::string question;
    std::getline(std::cin, question);
    std::cin.get();
    if (question != "Y" && question != "y" && question != "N" && question != "n")
    {
        std::cout << "Invalid input provided. Please restart the program and provide a valid answer.\n";
        return 0;
    }
    else if (question == "N" && question == "n")
    {
        std::cout << "Thank you for your visit, have a great day!\n";
        return 0;
    }
    else (question == "Y" && question == "y");
    {
        std::cout << "Great! Let us begin.\n";
    }

    std::cout << "We see you do not have an active account with the Bank of Raheem\n";

    std::string address, phone, email;

    std::cout << "Let us begin creating your checking account.\n";
    std::cout << "Please provide the following details to create your account.\n";
    std::cout << "Please provide your full name:";
    std::string name;
    std::getline(std::cin, name); //Using getline to allow for spaces in the name.
        
    std::cout << "Please provide your age:";
    int age;
    std::cin >> age;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Clear buffer input
    if (age < 18){
        std::cout << "Unfornately, you must be at least 18 years of age to open an account with us.\n""So sorry for the inconvenience. Have a good day!\n";
        return 0;
    }
    else {
        std::cout << "Please provide your home address: ";
    }

    while (true) {
        std::cout << "Please provide your home address: ";
        std::getline(std::cin, address);
        if (address.empty()){
            std::cout << "Address cannot be empty. Please enter a valid address.\n";
        }
        else {
            break;
        }
    }

    while (true) {
        std::cout << "Please provide your phone number: ";
        std::getline(std::cin, phone);
        if (phone.length() < 10 || phone.length() > 15) {
            std::cout << "Invalid phone number. Please enter a valid phone number (10 - 15 digits): \n";
    
        }
        else {
            break;
        }
    }

    while (true) {
        std::cout << "Please provide a valid email address: ";
        std::getline(std::cin, email);
        if (email.find('@') == std::string::npos || email.find('.') == std::string::npos) {
            std::cout << "Invalid email address. Please provide a valid email address.\n";

        }
        else {
            break;
        }
    }
    std::cout << "\nThank you for providing your details. Here is a summary of your account information:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Address: " << address << "\n";
    std::cout << "Phone Number: " << phone << "\n";
    std::cout << "Email Address: " << email << "\n";
    std::cout << "Account Type: Checking Account\n";

    std::string accountNumber = std::to_string(1000000 + std::rand() % 900000); //Generate a random accound number
    std::cout << "Account Number: " << accountNumber << "\n"; //In a real system, this would be generated uniquely.Will use random number generator in future updates.
    
    std::cout << "Congratulations! Your Acccount has been created successfully.\n";
    
    std::cout << "You can now deposit money into your account.\n";
    double balance = 0.0;
    while (true) {
        std::cout << "Enter an amount you would like to deposit: $";
        double deposit;
        std::cin >> deposit;
        if (deposit <= 0) {
            std::cout << "You have nothing to deposit. Please keep it stepping.\n";
        }
        else {
            balance += deposit;
            std::cout << "You have successfully deposited $" << deposit << "into your account. \n";
            break;
        }

        return 0;
    }
    std::cout << "Your current balance is: $" << balance << "\n";

    std::cout << "You can now withdraw money from your account.\n";
    while (true){
        std::cout << "Please enter a pin code to proceed with the withdrawal:";
        std::string pin;
        std::cin >> pin;
        if (pin != "2025")
        {
            std::cout << "Incorrect pin code. Please try again.\n";
        }
        else {
            std::cout << "Correct! You may proceed.";
            break;
        }

    }

    while (true) {
        std::cout << "Please enter an amount you would like to withdraw: $";
        double withdraw;
        std::cin >> withdraw;
        if (withdraw >= balance) {
            std::cout << "Insufficient funds. You cannot withdraw more than your current balance of $" << balance << "\n";
        
        }
        else if (withdraw <= 0) {
            std::cout << "You have nothing to withdraw. Please keep moving.\n";
            std::cout << "Your current balance is $" << balance << "\n";
        }
        else {
            balance -= withdraw;
            std::cout << "You have successfully withdrawn $" << withdraw << "from your account.\n";
            std::cout << "Your current balance is $" << balance << "\n";
            break;
        }
    }
    std::cout << "Thank you for using the Bank of Raheem's V-ATM system. Have a great day!\n";
    return 0;

}