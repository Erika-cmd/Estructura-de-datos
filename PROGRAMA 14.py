class NodoCurso:
    def __init__(self, nombre, requisito=None):  # <- corregido
        self.nombre = nombre
        self.requisito = requisito
        self.siguiente = None

class ListaCursos:
    def __init__(self):  # <- corregido
        self.inicio = None

    def agregar_curso(self, nombre, requisito_nombre=None):
        nuevo = NodoCurso(nombre)
        actual = self.inicio

        # Buscar el requisito en la lista (si se especifica)
        while actual:
            if actual.nombre == requisito_nombre:
                nuevo.requisito = actual
                break
            actual = actual.siguiente

        # Agregar el curso al final de la lista
        if self.inicio is None:
            self.inicio = nuevo
        else:
            actual = self.inicio
            while actual.siguiente:
                actual = actual.siguiente
            actual.siguiente = nuevo

    def mostrar_cursos(self):
        actual = self.inicio
        while actual:
            if actual.requisito:
                print(f"{actual.nombre} requiere {actual.requisito.nombre}")
            else:
                print(f"{actual.nombre} no tiene requisitos")
            actual = actual.siguiente

# Crear lista de cursos y agregarlos
lista = ListaCursos()
lista.agregar_curso("Matemática Básica")
lista.agregar_curso("Álgebra", "Matemática Básica")
lista.agregar_curso("Cálculo I", "Álgebra")
lista.agregar_curso("Cálculo II", "Cálculo I")

# Mostrar cursos
lista.mostrar_cursos()
