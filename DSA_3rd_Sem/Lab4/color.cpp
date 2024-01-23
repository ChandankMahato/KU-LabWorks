#include <iostream>
#include <windows.h>

int main()
{
    const WORD colors[] =
    {
    0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
    0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
    };

    HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    WORD   index = 5;


        SetConsoleTextAttribute(hstdout, colors[index]);
        std::cout << "Hello world" << std::endl;
        std::cout << "chandan";
    FlushConsoleInputBuffer(hstdin);
    return 0;
}

//   system("Color DE");
// cout << "\033[1;31m;42mbold red text\033[0m\n";
// cout << "\033[1;30mbold red text\033[0m\n";
// cout << "\033[1;32mbold red text\033[0m\n";
// cout << "\033[1;33mbold red text\033[0m\n";
// cout << "\033[1;34mbold red text\033[0m\n";
// cout << "\033[1;35mbold red text\033[0m\n";
// cout << "\033[1;36mbold red text\033[0m\n";
// cout << "\033[1;37mbold red text\033[0m\n";

// color   fore back
// black   30    40
// red     31    41
// green   32    42
// yellow  33    43
// blue    34    44
// magenta 35    45
// cyan    36    46
// white   37    47