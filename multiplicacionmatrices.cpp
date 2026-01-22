#include<iostream>
using namespace std;
int main()
{
		
	//sumar dos matrices 3x3
	
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int multiplicacion[3][3]={0};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				multiplicacion[i][j]+=matriz1[i][k]*matriz2[k][j];
			}
		}
		cout<<endl;
	}
	// mostrar resultado
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << multiplicacion[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}