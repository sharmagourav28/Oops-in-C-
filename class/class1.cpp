#include <iostream>
using namespace std;

class Hero
{
private:
    // by default private mode is there
    int age;

public:
    // property
    int health;
    char level;
    void printlevel()
    {
        cout << "Level : " << level << endl;
    }
};

int main()
{
    // creation of object
    Hero h1;
    h1.health = 70;
    h1.level = 'B';
    cout << "Size of " << sizeof(h1) << endl;
    h1.printlevel();
    return 0;
}