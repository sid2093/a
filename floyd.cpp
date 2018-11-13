    #include <iostream>

    #include <conio.h>

    using namespace std;

    void floyds(int b[][7])

    {

        int i, j, k;

        for (k = 0; k < 7; k++)

        {

            for (i = 0; i < 7; i++)

            {

                for (j = 0; j < 7; j++)

                {

                    if ((b[i][k] * b[k][j] != 0) && (i != j))

                    {

                        if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))

                        {

                            b[i][j] = b[i][k] + b[k][j];

                        }

                    }

                }

            }

        }

        for (i = 0; i < 7; i++)

        {

            cout<<"\nMinimum Cost With Respect to Node:"<<i<<endl;

            for (j = 0; j < 7; j++)

            {

                cout<<b[i][j]<<"\t";

            }

     

        }

    }

    int main()

    {

        int b[7][7];

        cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";

        for (int i = 0; i < 7; i++)

        {

            cout<<"enter values for "<<(i+1)<<" row"<<endl;

            for (int j = 0; j < 7; j++)

            {

                cin>>b[i][j];

            }

        }

        floyds(b);

        getch();

    }

Output
ENTER VALUES OF ADJACENCY MATRIX

enter values for 1 row
0
3
6
0
0
0
0
enter values for 2 row
3
0
2
4
0
0
0
enter values for 3 row
6
2
0
1
4
2
0
enter values for 4 row
0
4
1
0
2
0
4
enter values for 5 row
0
0
4
2
0
2
1
enter values for 6 row
0
0
2
0
2
0
1
enter values for 7 row
0
0
0
4
1
1
0

Minimum Cost With Respect to Node:0
0       3       5       6       8       7       8
Minimum Cost With Respect to Node:1
3       0       2       3       5       4       5
Minimum Cost With Respect to Node:2
5       2       0       1       3       2       3
Minimum Cost With Respect to Node:3
6       3       1       0       2       3       3
Minimum Cost With Respect to Node:4
8       5       3       2       0       2       1
Minimum Cost With Respect to Node:5
7       4       2       3       2       0       1
Minimum Cost With Respect to Node:6
8       5       3       3       1       1       0

