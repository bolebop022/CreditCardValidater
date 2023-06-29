#include <iostream>

using namespace std;
int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main()
{
    string creditCardNumber;
    int result = 0;
    cout << "Enter your credit card number: ";
    cin >> creditCardNumber;
    result = sumEvenDigits(creditCardNumber) + sumOddDigits(creditCardNumber);

    if (result % 10)
    {
        cout <<creditCardNumber<< " is a valid credit card number.";
    }
    else
    {
         cout <<creditCardNumber<< " is not a valid credit card number.";
    }
    return 0;
}

int getDigit(const int number)
{
    // Split the number if the number has 2 digits
    return number % 10 + (number / 10) % 10;

}

int sumOddDigits(const string cardNumber)
{
    // Add all odd numbered digits from right to left.
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0  ; i-=2 )
    {
        sum =+ (cardNumber[i] - '0');
    }
    return sum;
}

int sumEvenDigits(const string cardNumber)
{
    //Double every second digit from right to left if doubled number is 2 digits split them
    //Add all single digits from
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0  ; i-=2 )
    {
        sum =+ (getDigit(cardNumber[i] - '0') * 2);
    }
    return sum;
}
