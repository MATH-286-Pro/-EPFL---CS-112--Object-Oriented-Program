#include <iostream>
using namespace std;

/*****************************************************
 * Complete the code from here
 *****************************************************/
class Patient
{
  private:
    double poids;
    double taille;
    double imc;

  public: // 如果不声明 public，所有东西会默认为 private
    void init(double input1, double input2)
    {
      poids  = input1;
      taille = input2;
    }

    double afficher() const     // +const = 不会修改 实例的值
    {
      return poids*taille;
    }
};

/*******************************************
 * Do not modify anything after this line.
 *******************************************/


int main()
{
  Patient quidam;
  double poids, taille;
  do {
    cout << "Entrez un poids (kg) et une taille (m) : ";
    cin >> poids >> taille;
    quidam.init(poids, taille);
    quidam.afficher();
    cout << "IMC : " << quidam.imc() << endl;
  } while (poids * taille != 0.0);
  return 0;
}
