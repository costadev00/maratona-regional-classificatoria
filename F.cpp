#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[200];
    int rodaR = 0, rodaL = 0;
    int contL = 0, contR = 0;
    int flag = 1;
    scanf("%s", &str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'R')
        {
            if (rodaL < 2 && rodaR < 2)
            {
                if (flag == 1)
                {
                    contR++;
                    flag = 2;
                }
                else
                {
                    contL++;
                    flag = 1;
                }
                if (contR >= 5 && contR - contL >= 2)
                {

                    rodaR++;
                    contL = 0;
                    contR = 0;
                }
                else if (contL >= 5 && contL - contR >= 2)
                {

                    rodaL++;
                    contL = 0;
                    contR = 0;
                }
                if (contR == 10)
                {
                    rodaR++;
                    contL = 0;
                    contR = 0;
                }
                else if (contL == 10)
                {
                    rodaL++;
                    contL = 0;
                    contR = 0;
                }
            }
        }
        else if (str[i] == 'S')
        {
            if (rodaL < 2 && rodaR < 2)
            {
                if (flag == 1)
                {
                    contL++;
                    flag = 1;
                }
                else
                {
                    contR++;
                    flag = 2;
                }

                if (contR >= 5 && contR - contL >= 2)
                {

                    rodaR++;
                    contL = 0;
                    contR = 0;
                }
                else if (contL >= 5 && contL - contR >= 2)
                {

                    rodaL++;
                    contL = 0;
                    contR = 0;
                }
                if (contR == 10)
                {
                    rodaR++;
                    contL = 0;
                    contR = 0;
                }
                else if (contL == 10)
                {
                    rodaL++;
                    contL = 0;
                    contR = 0;
                }
            }
        }
        else
        {

            if (rodaR == 2)
            {
            winR:
                printf("%d - %d (winner)\n", rodaL, rodaR);
                return 0;
            }
            else if (rodaL == 2)
            {
            winL:
                printf("%d (winner) - %d\n", rodaL, rodaR);
                return 0;
            }
            else if (flag == 1)
            {

                printf("%d (%d*) - %d (%d)\n", rodaL, contL, rodaR, contR);
            }
            else
            {

                printf("%d (%d) - %d (%d*)\n", rodaL, contL, rodaR, contR);
            }
        }
    }

    return 0;
}