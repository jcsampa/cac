#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int numero = 0;
    int start = 1;
    int numero1 = 0;
    int start1 = 1;
    char departamento[25];
    char correo[25];
    int numero2 = 0;
    int start2 = 1;
    int cerrarprograma = 0;
    int numero3 =0;
    int start3 = 1;


  printf("usuario sea usted bienvenido a nuestro programa.\n este esta diseñado con el proposito de dar a conocer la \n contaminacion atmosferica sus causas y problematicas asociadas por departamento a nivel nacional actualmente. \n");
 
   while(!cerrarprograma) {
   while(start) {
    printf("\n[1] departamento a consultar:\n");
    
    printf("[2] cerrar programa:\n");

    scanf("%d",&numero);
    start = 0;
   }
    if(numero == 1 ){
        int departamentoValido = 0;
    do{
    printf("\npor favor digite el departamento:\n");
    scanf("%s", departamento);
   
    if (strcmp(departamento, "amazonas") == 0) { 
            printf("Amazonas: Si bien el Amazonas colombiano es una región principalmente boscosa y menos urbanizada, las actividades de deforestación, la minería ilegal y la quema de biomasa pueden generar emisiones de gases y partículas que contribuyen a la contaminación del aire.\n");
            departamentoValido = 1;
        } else if (strcmp(departamento, "antioquia") == 0) {
            printf("Antioquia: Además de la contaminación generada por el transporte y las industrias en Medellín, algunas áreas del departamento de Antioquia pueden experimentar problemas de calidad del aire debido a la actividad minera y la quema de biomasa.\n");
             departamentoValido = 1;
             }else if (strcmp(departamento, "arauca") == 0) {
            printf("Arauca: La actividad petrolera en el departamento de Arauca puede generar emisiones de gases y partículas que contribuyen a la contaminación atmosférica en algunas áreas.\n");
             departamentoValido = 1;
             }else if (strcmp(departamento, "atlantico") == 0) {
            printf("Atlántico: Barranquilla, la capital del departamento del Atlántico, puede enfrentar problemas de contaminación atmosférica debido a las emisiones industriales y las actividades portuarias.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "bolivar") == 0) {
            printf("Bolívar: Cartagena, una ciudad importante en el departamento de Bolívar, puede experimentar contaminación atmosférica relacionada con el transporte, la actividad industrial y las emisiones portuarias.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "boyaca") == 0) {
            printf("Boyacá: En algunas áreas de Boyacá, la quema de biomasa para la producción de ladrillos y la actividad minera pueden contribuir a la contaminación atmosférica.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "caldas") == 0) {
            printf("Caldas: Manizales, la capital de Caldas, puede enfrentar problemas de contaminación atmosférica relacionados con el transporte y la quema de biomasa en áreas rurales cercanas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "caqueta") == 0) {
            printf("Caqueta: La deforestacion y la quema de biomasa asociadas con actividades agropecuarias y la expansion de la frontera agricola pueden generar emisiones de gases y particulas en el departamento. \n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "casanare") == 0) {
            printf("Casanare: La actividad petrolera en Casanare puede ser una fuente significativa de contaminación atmosférica en algunas áreas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "cauca") == 0) {
            printf("Cauca: Algunas áreas del departamento de Cauca pueden enfrentar problemas de contaminación atmosférica debido a la quema de biomasa y la actividad agrícola.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "cesar") == 0) {
            printf("Cesar: La minería y la actividad agrícola en el departamento de Cesar pueden contribuir a la contaminación atmosférica, especialmente en áreas cercanas a las minas de carbón.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "choco") == 0) {
            printf("Chocó: Aunque es un departamento principalmente cubierto por selva y menos urbanizado, algunas áreas de Chocó pueden enfrentar problemas de contaminación atmosférica debido a la actividad minera y la deforestación.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "cordoba") == 0) {
            printf("Córdoba: En algunas áreas de Córdoba, la actividad agroindustrial y la deforestación pueden contribuir a la contaminación atmosférica.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "cundinamarca") == 0) {
            printf("Cundinamarca: Además de la contaminación en Bogotá, el departamento de Cundinamarca puede experimentar problemas de calidad del aire relacionados con la actividad industrial y el transporte en ciudades como Soacha y Girardot.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "guainia") == 0) {
            printf("Guainía: Dado que es un departamento con una baja densidad de población y principalmente cubierto por selva, la contaminación atmosférica en Guainía puede ser limitada. Sin embargo, las actividades mineras y las emisiones de embarcaciones fluviales pueden tener algún impacto local.\n");
            departamentoValido = 1;
            }else if (strcmp(departamento, "guaviare") == 0) {
            printf("Guaviare: El departamento de Guaviare, al igual que otras áreas amazónicas, puede verse afectado por la deforestación, la quema de biomasa y la actividad minera, lo que puede contribuir a la contaminación atmosférica.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "huila") == 0) {
            printf("Huila: En algunas áreas de Huila, la actividad minera y la quema de biomasa pueden generar emisiones que afectan la calidad del aire.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "laguajira") == 0) {
            printf("La Guajira: La actividad minera, la quema de biomasa y las condiciones de sequía en La Guajira pueden contribuir a la contaminación atmosférica en algunas áreas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "magdalena") == 0) {
            printf("Magdalena: Santa Marta, la capital del departamento de Magdalena, puede enfrentar problemas de contaminación atmosférica debido al transporte, la actividad industrial y las emisiones portuarias.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "meta") == 0) {
            printf("Meta: La actividad petrolera en el departamento de Meta puede ser una fuente significativa de contaminación atmosférica en algunas áreas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "nariño") == 0) {
            printf("Nariño: Además de la contaminación en la ciudad de Pasto, en el departamento de Nariño, las actividades agrícolas, la quema de biomasa y las emisiones de fuentes industriales pueden contribuir a la contaminación atmosférica.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "nortedesantander") == 0) {
            printf("Norte de Santander: Cúcuta, la ciudad principal del departamento de Norte de Santander, puede enfrentar problemas de contaminación atmosférica relacionados con el transporte, la actividad industrial y las emisiones fronterizas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "putumayo") == 0) {
            printf("Putumayo: La actividad petrolera y la deforestación en el departamento de Putumayo pueden generar emisiones que afectan la calidad del aire.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "quindio") == 0) {
            printf("Quindío: Aunque el departamento de Quindío es pequeño y menos industrializado, la actividad agrícola y la quema de biomasa pueden contribuir a la contaminación atmosférica en algunas áreas.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "risaralda") == 0) {
            printf("Risaralda: Pereira, la capital de Risaralda, puede enfrentar problemas de contaminación atmosférica relacionados con el transporte y la actividad industrial.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "sanandres") == 0) {
            printf("San Andrés y Providencia: Dado que es un archipiélago, la contaminación atmosférica en San Andrés y Providencia puede ser limitada. Sin embargo, las emisiones de fuentes turísticas y las actividades portuarias pueden tener algún impacto local.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "santander") == 0) {
            printf("Santander: Bucaramanga, la ciudad más grande del departamento de Santander, puede enfrentar problemas de contaminación atmosférica debido al transporte, la actividad industrial y las emisiones de ladrilleras. \n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "sucre") == 0) {
            printf("Sucre: En algunas áreas de Sucre, la actividad agrícola y la quema de biomasa pueden contribuir a la contaminación atmosférica.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "tolima") == 0) {
            printf("Tolima: Ibagué, la capital del departamento de Tolima, puede experimentar problemas de contaminación atmosférica relacionados con el transporte y la actividad industrial.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "valle") == 0) {
            printf("Valle del Cauca: Además de Cali, el departamento del Valle del Cauca puede enfrentar problemas de calidad del aire en ciudades como Buenaventura debido al transporte, la actividad industrial y las emisiones portuarias.\n");
            departamentoValido = 1;
             }else if (strcmp(departamento, "vaupes") == 0) {
            printf("Vaupés: Dado que es un departamento con una baja densidad de población y principalmente cubierto por selva, la contaminación atmosférica en Vaupés puede ser limitada. Sin embargo, las actividades mineras y las emisiones de embarcaciones fluviales pueden tener algún impacto local.\n");
            departamentoValido = 1;
            }else if (strcmp(departamento, "vichada") == 0) {
            printf(" Vichada: Al ser un departamento con baja densidad de población y predominantemente cubierto por selva amazónica, la contaminación atmosférica en Vichada es generalmente baja. Sin embargo, la actividad minera, la deforestación y las emisiones de embarcaciones fluviales pueden tener algún impacto local en la calidad del aire.\n");
            departamentoValido = 1;
            }else{
                printf("departamento no valido");
            } 
        }    while(!departamentoValido);

               printf("desea enviar la informacion al correo electronico: ");
               while(start1) {
               printf("\n[1] si\n");
    
               printf("[2] no\n");

               scanf("%d",&numero1);
               start1 = 0;
               } 
               if(numero1 == 1 ){
                printf("digite su correo electronico:");
                scanf(" %s", correo);
                printf("se envio exitosamente");
                printf("\ndesea cerrar programa:");
                 while(start3) {
                printf("\n[1] si:\n");
                printf("[2] no:\n");
                scanf("%d",&numero3);
                start3 = 0;
                if(numero3 == 1 ){
                cerrarprograma  = 1;
                start3 = 0;
                system ("pause");
                return 0;
               }else{
                start = 1;
                start1 = 1;
                start2 = 1;
                start3 = 0;
               }
               }
               }else{
                 printf("desea cerrar el programa:");           
                 while(start2) {
                printf("\n[1] si:\n");
                printf("[2] no:\n");
                scanf("%d",&numero2);
                start2 = 0;
               } if(numero2 == 1 ){
                while(!cerrarprograma);
                system ("pause");
                return 0;
               }else{
                start = 1;
                start1 = 1;
                start2 = 1;
                
               }
              
               }
        }         
       else{ 
          system ("pause");
          return 0;
}
}
}
    
    //system ("pause");
    //return 0;




