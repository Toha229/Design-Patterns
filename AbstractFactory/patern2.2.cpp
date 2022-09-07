#include "Factory.h"

int main()
{
    IOperatingSystem* os = nullptr;
    IButton* btt = nullptr;
    ICheckBox* cb = nullptr;
    int value;
    while (true) {

        cout << "1 - win, 2 - mac\n";
        cin >> value;
        if (value == 1 || value == 2) {
            if (value == 1) {
                if (os != nullptr)
                    delete os;
                os = new Windows();
            }
            else {
                if (os != nullptr)
                    delete os;
                os = new Macintosh();
            }
            cout << "1 - checkbox, 2 - button\n";
            cin >> value;
            if (value == 1 || value == 2) {
                if (value == 1) {
                    if (cb != nullptr)
                        delete cb;
                    cb = os->createCheckBox();
                    cb->print();
                    cout << "\n\n\n\n";
                }
                else {
                    if (btt != nullptr)
                        delete btt;
                    btt = os->createButton();
                    btt->print();
                    cout << "\n\n\n\n";
                }
            }
            else cout << "Error\n";
        }
        else cout << "Error\n";
    }
}