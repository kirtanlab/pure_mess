#include <iostream>

#include <stdio.h>

using namespace std;



class stringg

{

public:

    void length()

    {

        char a[30];

        cout << "Enter a string:";

        gets(a);

        int i;

        for (i = 0; a[i]; i++)

            ;

        cout << " Length of the string is " << i << endl;

    }



    void copy()

    {

        char a[30], b[30];

        cout << "\nEnter a string:";

        gets(a);

        int i;

        for (i = 0; a[i]; i++)

            b[i] = a[i];

        b[i] = '\0';

        cout << " copied string is: " << b;

    }



    void concat()

    {

        char a[30], b[30], c[60];

        int i, k;

        cout << "\nEnter first string:";

        gets(a);

        cout << "Enter second string:";

        gets(b);

        for (i = 0; a[i]; i++)

            c[i] = a[i];



        for (k = 0; b[k]; k++)

        {

            c[i] = b[k];

            i++;

        }

        c[i] = '\0';

        cout << "Concatenation string is:" << c;

    }



    void compare()

    {

        char a[30], b[30];

        cout << "\n\nEnter first string:";

        gets(a);

        cout << "Enter seconf string:";

        gets(b);

        int i;

        for (i = 0; a[i]; i++)

        {

            if (a[i] != b[i])

            {

                cout << "Not equal!\n";

                break;

            }

        }

        if (a[i] == '\0')

            cout << "\nEqual string!!" << endl;

    }



    void substring()

    {

        char s[40], sub[10];

        cout << "\n\nEnter a string:";

        gets(s);

        cout << "Enter a substring:";

        gets(sub);

        int i, j, k, l;

        for (i = 0; sub[i]; i++)

            ;

        l = i;

        for (i = 0; s[i + l - 1]; i++)

        {

            k = i;

            for (j = 0; j < l; j++)

            {

                if (s[k] != sub[j])

                    break;

                k++;

            }

            if (j == l)

            {

                cout << "Sub string found at :" << i + 1 << endl;

                break;

            }

        }



        if (j != l)

        {

            cout << "Sub string not found" << endl;

        }

    }

};



int main()

{

    stringg s1;

    s1.length();

    s1.copy();

    s1.compare();

    s1.concat();

    s1.substring();

    return 0;

}
