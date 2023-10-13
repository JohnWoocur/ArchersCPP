
#include <vector>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(const std::string& accNum, const std::string& accName, double initialBalance) :
        accountNumber(accNum), accountHolderName(accName), balance(initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully.\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Account Holder: " << accountHolderName << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
};

class ArcherBank {
private:
    std::vector<BankAccount> accounts;

public:
    void createAccount(const std::string& accNum, const std::string& accName, double initialBalance) {
        BankAccount newAccount(accNum, accName, initialBalance);
       accounts.push_back(newAccount);
        std::cout << "Account created successfully.\n";
    }

    BankAccount* findAccount(const std::string& accNum) {
        for (auto& account : accounts)
        {
            //if (accountNumber == accNum)
                {
               return &account;
            }
        }
        return nullptr;
    }
};

void deposit() {
    ArcherBank bank;

    while (true) {
        std::cout << "1. Create Account\n2. Deposit\n3. Check Balance\n4. Exit\n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string accountNumber, accountHolderName;
            double initialBalance;

            std::cout << "Enter account number: ";
            std::cin >> accountNumber;
            std::cout << "Enter account holder name: ";
            std::cin >> accountHolderName;
            std::cout << "Enter initial balance: $";
            std::cin >> initialBalance;

            bank.createAccount(accountNumber, accountHolderName, initialBalance);
        } else if (choice == 2) {
            std::string accountNumber;
            double depositAmount;

            std::cout << "Enter account number: ";
            std::cin >> accountNumber;
            std::cout << "Enter deposit amount: $";
            std::cin >> depositAmount;

            BankAccount* account = bank.findAccount(accountNumber);
            if (account) {
                account->deposit(depositAmount);
            } else {
                std::cout << "Account not found.\n";
            }
        } else if (choice == 3) {
            std::string accountNumber;

            std::cout << "Enter account number: ";
            std::cin >> accountNumber;

            BankAccount* account = bank.findAccount(accountNumber);
            if (account) {
                account->displayBalance();
            } else {
                std::cout << "Account not found.\n";
            }
        } else if (choice == 4) {
            break;
        }
    }


}

