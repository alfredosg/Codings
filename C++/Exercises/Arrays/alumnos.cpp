

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define ALUMNOS 3

struct alumno
{
	string name;
	float nota;
	
}student[ALUMNOS];

/*void leer_notas ( float [ALUMNOS] );
float media ( float [ALUMNOS]);
void sup_inf_media ( float [ALUMNOS], float, int & , int & );
int main ( void );*/



/*****************************************************************/
/* Function: fill                                                */
/* Description: fills				                         */
/*****************************************************************/
void fill(alumno elev)
{
		getline(cin,elev.name);
		}
/*****************************************************************/
/* Function: show                                                */
/* Description: shows				                         */
/*****************************************************************/
void show(alumno elev)
{
		cout<<elev.name << endl;
}



int main()
{
	int i;
	for (i=0;i<ALUMNOS;i++)
	{
		fill(student[i]);
		show(student[i]);
	}
	
	
return 0;	
		
}







