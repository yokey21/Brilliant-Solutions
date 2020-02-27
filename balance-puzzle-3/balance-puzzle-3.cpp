#include <iostream>

using namespace std;

int main()
{
    int green, blue, red;

    for(green = 0 ; green < 10 ; green++)
    {
        for(blue = 0 ; blue < 10 ; blue++)
        {
            for(red = 0 ; red < 10 ; red++)
            {
                if((4+blue) == (2*green))
                {
                    if((green +blue) == (red))
                    {
                        if((red + 2*blue) == (3*green))
                        {
                            cout << "Green Triangle = " << green << endl;
                            cout << "Blue Square = " << blue << endl;
                            cout << "Red Circle = " << red << endl;
                        }
                    }
                }
            }
        }
    }
}
