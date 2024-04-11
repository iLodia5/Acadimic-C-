#include <Windows.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

void typeAndEnter(const std::string& text) {
    // Simulate typing
    for (char c : text) {
        INPUT input;
        input.type = INPUT_KEYBOARD;
        input.ki.wVk = 0; // Virtual key code, 0 for a unicode character
        input.ki.wScan = c; // Unicode character
        input.ki.dwFlags = KEYEVENTF_UNICODE;
        input.ki.time = 0;
        input.ki.dwExtraInfo = 0;

        SendInput(1, &input, sizeof(INPUT));

        // Simulate key release
        input.ki.dwFlags = KEYEVENTF_UNICODE | KEYEVENTF_KEYUP;
        SendInput(1, &input, sizeof(INPUT));
    }

    // Press Enter
    INPUT enterInput;
    enterInput.type = INPUT_KEYBOARD;
    enterInput.ki.wVk = VK_RETURN;
    enterInput.ki.wScan = 0;
    enterInput.ki.dwFlags = 0;
    enterInput.ki.time = 0;
    enterInput.ki.dwExtraInfo = 0;

    SendInput(1, &enterInput, sizeof(INPUT));

    // Release Enter key
    enterInput.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &enterInput, sizeof(INPUT));
    Sleep(1000);
}

int main() {
    // Wait for some time to give you a chance to position the cursor
    std::string userInputString;
    int message_count;
    std::cout << "Enter a message to automate" << std::endl;
    getline(std::cin,userInputString);
    std::cout << "Enter how many message you want to send" << std::endl;
    std::cin>>message_count;
    Sleep(10000);

    // Type the sentence and press Enter
    for(int i = 0 ; i < message_count ; i++){
        typeAndEnter(userInputString);
        Sleep(250);
    }
    return 0;
}