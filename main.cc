#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the best monkey survey online. Complete these four questions to figure out if you are a TRUE monkey lover!\n";
    std::string monkeyType;
    std::string favFood;
    std::string monkeysJumping;
    std::string ownedMonkey;
    std::cout << "Enter the type of Monkey you worship: ";
    std::getline(std::cin, monkeyType);
    if (monkeyType == "chimpanzee") {
    std::cout << "You have chosen correctly. Chimp supremacy!\n";
    } else  if (monkeyType == "chimp") {
    std::cout << "You have chosen correctly. Chimp supremacy!\n";
    } else if (monkeyType != "chimpanzee" || monkeyType != "chimp") {
        std::cout << "A " << monkeyType << " is not the superior monkey! Therefore, your opinion is invalid and you should probably kick rocks!\n";
        return 1;
    }
    std::cout << "What is a chimpanzees favorite food type?: ";
    std::getline(std::cin, favFood);  
    if (favFood == "fruits" || favFood == "fried bananas") {
        std::cout << "Correct again! Two more questions to test your loyalty.\n";
    } else if (favFood != "fruits" || favFood != "fried bananas") {
        std::cout << "You almost had me fooled. Get lost!\n";
        return 1;
    }
    std::cout << "How many monkey's were jumping on the bed?: ";
    std::getline(std::cin, monkeysJumping);
    if (monkeysJumping == "five" || monkeysJumping == "5") {
        std::cout << "I can tell you were raised by wonderful parents.\n";
    } else if (monkeysJumping != "five" || monkeysJumping != "5") {
        std::cout << "So close. You are a disgrace to all chimpanzee/monkey enthusiasts everywhere!\n";
        return 1;
    }
    std::cout << "Final survey question. Do you own any type of monkey currently?: ";
    std::getline(std::cin, ownedMonkey);
    if (ownedMonkey == "yes") {
        std::cout << "Congrats on answering all questions correctly. You receive nothing other than a loss of about 2 minutes.\n";
    } else if (ownedMonkey != "yes") {
        std::cout << "How dare you? I commend you for at least getting the previous questions correct.\n";
    }

    return 0;
}
