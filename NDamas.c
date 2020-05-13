#include <iostream>
#include <vector>

using namespace std;

// Cuenta el número de soluciones
int sol = 0;

// función de visualización del tablero
void mostrarTabuleiro(vector<vector<int> > & tab, int N)
{
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(tab[i][j] == 1)
				cout << "R\t";
			else
				cout << "0\t";
		}
		cout << "\n\n";
	}
	cout << "\n";
}

// comprueba si es seguro colocar a la reina en una determinada columna
bool seguro(vector<vector<int> > & tab, int N, int lin, int col)
{
	int i, j;

	// comprueba si hay un ataque en la línea
	for(i = 0; i < N; i++)
	{
		if(tab[lin][i] == 1)
			return false;
	}

	//comprueba si hay un ataque a la columna
	for(i = 0; i < N; i++)
	{
		if(tab[i][col] == 1)
			return false;
	}

	// comprueba si el ataque en la diagonal principal
	for(i = lin, j = col; i >= 0 && j >= 0; i--, j--)
	{
		if(tab[i][j] == 1)
			return false;
	}
	for(i = lin, j = col; i < N && j < N; i++, j++)
	{
		if(tab[i][j] == 1)
			return false;
	}

	// comprueba si se produce un ataque diagonal secundario
	for(i = lin, j = col; i >= 0 && j < N; i--, j++)
	{
		if(tab[i][j] == 1)
			return false;
	}
	for(i = lin, j = col; i < N && j >= 0; i++, j--)
	{
		if(tab[i][j] == 1)
			return false;
	}

	// si llegaste aquí, entonces estás a salvo (return true)
	return true;
}

/*
	función de resolución de problemas
	devuelve verdadero si fue capaz de resolver el problema
*/
void executar(vector<vector<int> > & tab, int N, int col)
{
	if(col == N)
	{
		cout << "Solucion: " << sol + 1 << ":\n\n";
		mostrarTabuleiro(tab, N);
		sol++;
		return;
	}

	for(int i = 0; i < N; i++)
	{
		// comprueba si es seguro poner a la reina en esa columna
		if(seguro(tab, N, i, col))
		{
			// inserta la reina (marca con 1)
			tab[i][col] = 1;

			// llamada recursiva
			executar(tab, N, col + 1);

			// (backtracking)
			tab[i][col] = 0;
		}
	}

}

int main(int argc, char *argv[])
{
	// número de reinas
	//int N = 8;
    int N;
    cout<<"Ingresa el numero Reinas: ";
    cin>>N;
	// tablero de ajedrez (matriz)
	vector<vector<int> > tab;

	// insertando todas las líneas
	for(int i = 0; i < N; i++)
	{
		vector<int> linha(N);
		tab.push_back(linha);
	}

	// imprime todas las soluciones
	executar(tab, N, 0);

	// imprime la cantidad de soluciones
	cout << "\nSoluciones encontradas: "<< sol <<" con: "<<N<<" Reinas \n";
	return 0;
}