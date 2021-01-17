#include <iostream>
#include <vector>
using namespace std;

struct Asignatura {
    int id;
    double creditos;
    double nota;
};

struct Alumno {
    int dni;
    vector <Asignatura> asigs;
};

typedef vector <Alumno> Alumnos;

// Pre: --
// Post: retorna el número d'alumnes a alus que superen el factor alfa
int supera_alfa(const Alumnos& alus) {
    int count = 0;
    int alus_size = alus.size();
    for (int i = 0; i < alus_size; ++i) {
        int asigs_size = alus[i].asigs.size();
        double mitjana = 0, tcredits = 0;
        for (int j = 0; j < asigs_size; ++j) {
            mitjana += alus[i].asigs[j].creditos*alus[i].asigs[j].nota;
            tcredits += alus[i].asigs[j].creditos;
        }
        mitjana /= tcredits;
        if (mitjana >= 5) ++count;
    }
    return count;
}

// Pre: a l'entrada hi ha informació de m assignatures
// Post: retorna un vector de Asignatura amb la informació de l'entrada,
//       mantenint l'ordre d'aparició
vector <Asignatura> lee_asignaturas(int m) {
   vector<Asignatura> v(m);
   for (int i = 0; i < m; ++i) {
       cin >> v[i].id >> v[i].creditos >> v[i].nota;
   }
   return v;
}

int main() {
    int n;
    cin >> n;
    Alumnos a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].dni;
        int m;
        cin >> m;
        a[i].asigs = lee_asignaturas(m);
    }
    cout << supera_alfa(a) << endl;
}
