#include <Windows.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>

std::string exe_path;
std::string dll_path;
using namespace std;
//Login Details
string niger;

//Login Correct
string cringeC = "free";

int ch001cee;
bool m3nuu = true;

// part of the dll injection
void injectDLL()
{
    std::cout << "Path to exe = ";
    cin >> exe_path;
    std::cout << "";
    cin >> dll_path;
}
// inject
void injection()
{
    std::cout << "L0ad1ngg...\n";
    injectDLL();
    system("pause");
}











int main()

{
    // Generate a random file name
    std::string randomString;
    std::srand(std::time(nullptr));
    for (int i = 0; i < 10; i++)
    {
        int randomChar = std::rand() % 36;
        if (randomChar < 10)
        {
            randomString += static_cast<char>('0' + randomChar);
        }
        else
        {
            randomString += static_cast<char>('A' + randomChar - 10);
        }
    }

    // Get the current file name
    char oldName[MAX_PATH];
    GetModuleFileNameA(NULL, oldName, MAX_PATH);

    // Rename the file
    std::string newName = randomString + ".exe";
    if (MoveFileA(oldName, newName.c_str()))
    {
        std::cout << "File renamed to " << newName << std::endl;
    }
    else
    {
        std::cout << "Failed to rename file: " << GetLastError() << std::endl;
    }

    std::srand(std::time(nullptr));
    for (int i = 0; i < 10; i++)
    {
        int randomChar = std::rand() % 36;
        if (randomChar < 10)
        {
            randomString += static_cast<char>('0' + randomChar);
        }
        else
        {
            randomString += static_cast<char>('A' + randomChar - 10);
        }
    }

    // Set the console title to the random string
    SetConsoleTitleA(randomString.c_str());

    cout << "cs2-cheat\n";

    cout << "Key:";
    cin >> niger;

    cout << "";

    if (niger == cringeC)
    {
        cout << "";

        std::string window{ "" }; std::string module{ "" }; std::string dllname{ "" };

        system("CLS");

        while (m3nuu == true)
        {
            cout << "1 - St5rt Ch35t\n";
            cout << "2 - 3x1t \n";
            cout << "";

            cin >> ch001cee;

            switch (ch001cee)
            {
            case 1:
                //code
                injection();
            case 2:
                cout << "Ex10ttin6 appl1cat11on ... \n";
                m3nuu = false;
                break;
            default:
                cout << "Not a valid ch001cee, tr3 aga1n. \n";
                cin >> ch001cee;
                break;
            }
        }
    }
    else {
        cout << "msedge has been crashed!";
        return 0;
    }


    return 0;
}
