#include "pch.h"
#include "BankAccount.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h" 
using namespace System;

BankAccount::BankAccount(String^ holder)
    :accountHolder(holder), balance(0.0)
{

}

void BankAccount::Credit(double amount)
{
    balance += amount;
}

bool BankAccount::Debit(double amount)
{
    if (CanDebit(amount))
    {
        balance -= amount;
            return true;
    }
    else
    {
        return false;
    }
}

double BankAccount::getBalance()
{
    return balance;
}

String^ BankAccount::ToString()
{
    String^ result = gcnew String("Account holder: ");
    result = String::Concat(result, accountHolder);
    result = String::Concat(result, ", Balance: ");
    result = String::Concat(result, balance.ToString());
    return result;
}

String^ BankAccount::RoutingInstructions(double amount)
{
    return "Some string...";
}

int main(array<System::String^>^ args)
{

    Console::WriteLine("Testing the CurrentAccount");
    CurrentAccount current("Jane", 100);
    current.Credit(500);

    if (current.Debit(550) == true)
    {
        Console::WriteLine("Debit(550) OK");
    }
    else
    {
        Console::WriteLine("Debit(550) failed");
    }

    if (current.Debit(100) == true)
    {
        Console::WriteLine("Debit(100) OK");
    }
    else
    {
        Console::WriteLine("Debit(100) failed");
    }

    Console::WriteLine(current.ToString());

    Console::WriteLine("\nTesting the SavingsAccount");
    SavingsAccount savings("Fred");
    savings.Credit(500);

    if (savings.Debit(50) == true)
    {
        Console::WriteLine("Debit(50) OK");
    }
    else
    {
        Console::WriteLine("Debit(50) failed");
    }

    if (savings.Debit(49) == true)
    {
        Console::WriteLine("Debit(49) OK");
    }
    else
    {
        Console::WriteLine("Debit(49) failed");
    }

    Console::WriteLine(savings.ToString());
    return 0;
}
