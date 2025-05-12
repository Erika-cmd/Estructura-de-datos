#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string carrera[3] = {"Ing. Minas", "Derecho", "Ing. Estadística e Informática"};
    string codigo[3] = {"145976", "365874", "235847"};
    string nombre[3] = {"Erika", "Yuri", "Yeri"};
};

struct ServidorWeb {
    string sistema[3] = {"Linux", "Windows", "Unix"};
    string ram[3] = {"8GB", "16GB", "32GB"};
    string ubicacion[3] = {"EE.UU", "Alemania", "Japón"};
};

struct Lapicero {
    string tipo[3] = {"Tinta", "Gel", "Pluma"};
    string color[3] = {"Azul", "Negro", "Rojo"};
    string material[3] = {"Plástico", "Metal", "Madera"};
};

struct Mochila {
    string tamano[3] = {"Pequeña", "Mediana", "Grande"};
    string uso[3] = {"Escolar", "Viaje", "Oficina"};
    string color[3] = {"Rojo", "Azul", "Negro"};
};

struct MonitorExterno {
    string resolucion[3] = {"1080p", "1440p", "4K"};
    string panel[3] = {"IPS", "VA", "TN"};
    string tamano[3] = {"21\"", "24\"", "27\""};
};

struct DiscoDuro {
    string tipo[3] = {"HDD", "SSD", "NVMe"};
    string capacidad[3] = {"500GB", "1TB", "2TB"};
    string velocidad[3] = {"5400 rpm", "7200 rpm", "Alta"};
};

struct CPU {
    string nucleos[3] = {"2", "4", "8"};
    string arquitectura[3] = {"x86", "x64", "ARM"};
    string frecuencia[3] = {"2.0 GHz", "3.2 GHz", "4.0 GHz"};
};

struct Tamano {
    string unidad[3] = {"cm", "in", "m"};
    string tipo[3] = {"Alto", "Ancho", "Profundo"};
    string valor[3] = {"30", "50", "70"};
};

void imprimirResumen(string nombreEstructura, string prop1[], string prop2[], string prop3[],
                     string nomProp1, string nomProp2, string nomProp3) {
    cout << "ESTRUCTURA: " << nombreEstructura << endl;
    cout << "PROPIEDADES: " << nomProp1 << ", " << nomProp2 << ", " << nomProp3 << endl;

    cout << nomProp1 << ": ";
    for (int i = 0; i < 3; i++) {
        cout << prop1[i];
        if (i < 2) cout << ", ";
    }
    cout << endl;

    cout << nomProp2 << ": ";
    for (int i = 0; i < 3; i++) {
        cout << prop2[i];
        if (i < 2) cout << ", ";
    }
    cout << endl;

    cout << nomProp3 << ": ";
    for (int i = 0; i < 3; i++) {
        cout << prop3[i];
        if (i < 2) cout << ", ";
    }
    cout << endl;

    cout << "--------------------------------------------------" << endl;
}

int main() {
    Estudiante est;
    ServidorWeb srv;
    Lapicero lap;
    Mochila moch;
    MonitorExterno mon;
    DiscoDuro disc;
    CPU cpu;
    Tamano tam;

    imprimirResumen("Estudiante", est.carrera, est.codigo, est.nombre, "Carrera", "Código", "Nombre");
    imprimirResumen("Servidor Web", srv.sistema, srv.ram, srv.ubicacion, "Sistema", "RAM", "Ubicación");
    imprimirResumen("Lapicero", lap.tipo, lap.color, lap.material, "Tipo", "Color", "Material");
    imprimirResumen("Mochila", moch.tamano, moch.uso, moch.color, "Tamaño", "Uso", "Color");
    imprimirResumen("Monitor Externo", mon.resolucion, mon.panel, mon.tamano, "Resolución", "Panel", "Tamaño");
    imprimirResumen("Disco Duro", disc.tipo, disc.capacidad, disc.velocidad, "Tipo", "Capacidad", "Velocidad");
    imprimirResumen("CPU", cpu.nucleos, cpu.arquitectura, cpu.frecuencia, "Núcleos", "Arquitectura", "Frecuencia");
    imprimirResumen("Tamaño", tam.unidad, tam.tipo, tam.valor, "Unidad", "Tipo", "Valor");

    return 0;
}
