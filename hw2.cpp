// Programmer: Dennis Baleta
// File: hw2.cpp
// Desc: Generate a 4-letter password where each letter is
//       calculated based on user's input of brain weight,
//       age, and whether s/he regularly eats glue.

#include <iostream>
using namespace std;

int main()
{
  const short HOMER_IQ = 26;                // Homer's IQ
  const short HOMER_DONUT_CONSUMPTION = 65; // Homer's daily donut consumption
  const short AVG_GLUE_EATER_IQ = 32;       // Avg IQ of people who regularly eat glue
  const short K_FACTOR_INCREMENT = 100;     // Amount to increment kFactor for each letter of password
  
	short age,                                // user inputs
        brainWeight,
        regularlyEatsGlue;
  bool isGlueEater;                         // true if regularlyEatsGlue is 1; otherwise, 0
  int kFactor;                              // product of password const's, incremented for each letter in password
  short asciiValue;                         // ascii value of a char
  char letter;                              // single char of password

  // Greeting //
  cout << "\nWelcome to the PASSWORD GENERATOR!\n";

  // Get user inputs //
	cout << "Please enter the following information:\n ";
  cout << "\tEnter your age: ";
  cin >> age;

  cout << "\tEnter the weight of your brain (lbs): ";
  cin >> brainWeight;

  cout << "\tDo you eat glue regularly? (1 = yes, 0 = no) ";
  cin >> regularlyEatsGlue;
	
  isGlueEater = regularlyEatsGlue == 1;

  // Calculate and output each of the 4 letters of user's password //
  cout << "\nYour password is ";
	
  kFactor = HOMER_IQ * HOMER_DONUT_CONSUMPTION * AVG_GLUE_EATER_IQ;
  asciiValue = (static_cast<int>
                 (static_cast<float>(brainWeight) / age * kFactor) %  HOMER_IQ) +
                 HOMER_DONUT_CONSUMPTION + (isGlueEater * AVG_GLUE_EATER_IQ);
  letter = static_cast<char>(asciiValue);
  cout << letter;

  kFactor += K_FACTOR_INCREMENT;
  asciiValue = (static_cast<int>
               (static_cast<float>(brainWeight) / age * kFactor) %  HOMER_IQ) +
               HOMER_DONUT_CONSUMPTION + (isGlueEater * AVG_GLUE_EATER_IQ);
  letter = static_cast<char>(asciiValue);
  cout << letter;

  kFactor += K_FACTOR_INCREMENT;
  asciiValue = (static_cast<int>
               (static_cast<float>(brainWeight) / age * kFactor) %  HOMER_IQ) +
               HOMER_DONUT_CONSUMPTION + (isGlueEater * AVG_GLUE_EATER_IQ);
  letter = static_cast<char>(asciiValue);
  cout << letter;

  kFactor += K_FACTOR_INCREMENT;
  asciiValue = (static_cast<int>
               (static_cast<float>(brainWeight) / age * kFactor) %  HOMER_IQ) +
               HOMER_DONUT_CONSUMPTION + (isGlueEater * AVG_GLUE_EATER_IQ);
  letter = static_cast<char>(asciiValue);
  cout << letter;

  // Sign-off //
  cout << "\nThank you for using my Password Generator"
			 << "\n\nHave a nice day! \n";

  return 0;
}