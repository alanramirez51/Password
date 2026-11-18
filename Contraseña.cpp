#include<stdio.h>
#include<string.h>

int main()
{
	char Usuarioreg[] = "alanseb";
	char Contrasenareg[] = "password123";
	char Contrasenaint[100];
	char Usuarioint[100];

	int intentos;
	int acceso;

	printf("Bienvenido\n");

	intentos = 1;
	acceso = 0;

	while (intentos < 5 && acceso == 0)
	{
		printf("Favor de ingresar su nombre de usuario\n");
		gets_s(Usuarioint, 100);

		printf("Favor de ingresar su contraseña\n");
		gets_s(Contrasenaint, 100);
		if (strcmp(Contrasenareg, Contrasenaint) == 0 && strcmp(Usuarioreg, Usuarioint) == 0)
		{
			printf("Acceso correcto");
			acceso = 1;
		}
		else
		{
			printf("Acceso dengado");
			intentos = intentos + 1;
		}

	}


}