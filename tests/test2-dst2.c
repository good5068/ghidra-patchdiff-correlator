
void a(){}
void b(){}
void c(){}
void d(){}

int main(int argc, char **argv)
{
	if( argc == 1 )
	{
		a();
	}
	else if ( argc == 2 )
	{
		b();
	}
	else
	{
		c();
	}
	if( argc == 3 )
	{
		d();
	}
	return 0;
}

