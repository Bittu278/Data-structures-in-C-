#include <iostream>
using namespace std;

int main()
{
    int arr1[3][3], arr2[3][3], res[3][3];
    int rows1, cols1, rows2, cols2, i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;

    cout << "Enter elements of first matrix: " << endl;
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if(cols1 != rows2)
    {
        cout << "Error! Number of columns of first matrix should be equal to number of rows of second matrix.";
        return 0;
    }

    cout << "Enter elements of second matrix: " << endl;
    for(i=0; i<rows2; i++)
    {
        for(j=0; j<cols2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // Multiplying two matrices
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols2; j++)
        {
            res[i][j] = 0;
            for(k=0; k<cols1; k++)
            {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Displaying the result
    cout << "Resultant matrix is: " << endl;
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}