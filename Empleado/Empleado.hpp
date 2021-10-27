class Empleado
{

public:
    Empleado(const char *const,const char *const );

    const char *getPrimerNombre() const;
    const char *getPrimerApellido() const;

    const int getNumEmpleados() const;
    void contar();

private:
    char *primerNombre;
    char *primerApellido;
    int numEmpleados = 0;
};