class Empleado
{

public:
    Empleado(const char *const, const char *const );

    const char *getPrimerNombre() const;
    const char *getPrimerApellido() const;

    static const int getNumEmpleados();
    void contar();

private:
    char *primerNombre;
    char *primerApellido;
    static int numEmpleados;
};
