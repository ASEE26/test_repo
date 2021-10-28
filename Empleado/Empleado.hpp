class Empleado
{

public:
    Empleado(const char *const, const char *const, const char *const);

    const char *getPrimerNombre() const;
    const char *getPrimerApellido() const;
    const char *getIdentidad() const;
    static const int getNumEmpleados();
    void contar();

private:
    char *primerNombre;
    char *primerApellido;
    char *iD;
    static int numEmpleados;
};
