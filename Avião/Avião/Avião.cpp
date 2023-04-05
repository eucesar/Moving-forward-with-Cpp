#include <iostream>

using namespace std;

class Aviao
{
	public:
		int vel = 0;
		int velMax;
		string tipo;
		void ini(int tp);

	private:

};

//função de agrupar vazia
void Aviao::ini(int tp) 
{
	if (tp == 1) {
		this->velMax = 800; //this pq esta alterando oq esta dentro do Aviao - nesse
		this->tipo = "Jato";
	}
	else if (tp == 2) {
		this->velMax = 350;
		this->tipo = "Monomotor";
	}
	else if (tp == 3) {
		this->velMax = 180;
		this->tipo = "Planador";
	}
}

//executar
int main()
{
	//pegar da public - obj
	Aviao* av1 = new Aviao();
	av1->ini(1);

	cout << av1->velMax << endl;
	cout <<	av1->tipo;

}
