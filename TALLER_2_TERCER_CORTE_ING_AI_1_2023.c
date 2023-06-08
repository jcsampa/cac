#include<stdio.h>
#include<math.h>




int main(){

float radio=14.5;
float altura=26.79;
void punto_1(float radio,float altura);
//punto_1(radio,altura);
int Fahrenheit;
void punto_2(int Fahrenheit);
//punto_2(Fahrenheit);
int segundos;
void punto_3(int segundos);
//punto_3(segundos);
float nota_1;
float taller_1;
float nota_2;
float actividad_1;
float nota_3;
float actividad_2;
void punto_4(float nota_1,float taller_1,float nota_2,float actividad_1,float nota_3,float actividad_2);
//punto_4(nota_1,taller_1,nota_2,actividad_1,nota_3,actividad_2);
int a;
int b;
int c;
int d;
int r;
void punto_5(int a,int b,int c,int d,int r);
//punto_5(a,b,c,d,r);
int x=12;
float sigma=2.1836;
int y=3;
float lambda=1.11695;
float alfa=328.67;
float f=(3*x*(x+(sigma*(x*y)))/(((x*x)*(y*y))))-(lambda*(x*(alfa-13.7)));
void punto_6(int x,float sigma,int y,float lambda,float alfa,float f);
//punto_6(x,sigma,y,lambda,alfa,f);
float sueldo_base;
float complemento_de_destino;
float complemento_de_cargo_academico;
int horas_extras_realizadas;
int hijos;
int mayores;
void punto_7(float sueldo_base,float complemento_de_destino,float complemento_de_cargo_academico,int horas_extras_realizadas,int hijos,int mayores);
//punto_7(sueldo_base,complemento_de_destino,complemento_de_cargo_academico,horas_extras_realizadas,hijos,mayores);
int u=1;
double z=1.0;
void punto_8(int u,double z);
//punto_8(u,z);
int lado1;
int lado2;
void punto_9(int lado1,int lado2);
//punto_9(lado1,lado2);
int capital_prestado;
int interes_anual;
int plazo;
void punto_10(int capital_prestado,int interes_anual,int plazo);
//punto_10(capital_prestado,interes_anual,plazo);
int num;
int start=1;
while(start){
printf("digite el punto del taller que desea revisar\n");
scanf("%d",&num);

if(num==1){
punto_1(radio,altura);
}else if(num==2){
punto_2(Fahrenheit);   
}else if(num==3){
punto_3(segundos);
}else if(num==4){
punto_4(nota_1,taller_1,nota_2,actividad_1,nota_3,actividad_2);
}else if(num==5){
punto_5(a,b,c,d,r);
}else if(num==6){
punto_6(x,sigma,y,lambda,alfa,f);
}else if(num==7){
punto_7(sueldo_base,complemento_de_destino,complemento_de_cargo_academico,horas_extras_realizadas,hijos,mayores);
}else if(num==8){
punto_8(u,z);
}else if(num==9){
punto_9(lado1,lado2);
}else if(num==10){
punto_10(capital_prestado,interes_anual,plazo);
}else{
printf("punto no valido");
}
start=1;
printf("\n");
}
return 0;










}
void punto_1(float radio,float altura){
float volumen = (3.141592*radio*radio*altura)/3;
printf("El volumen de un cono con base de radio %.2f y altura %.2f es: %.2f",radio,altura,volumen);
}
void punto_2(int Fahrenheit){
printf("\ndigite el valor en grados Fahrenheit que desea pasar a celcius: ");
scanf("%d",&Fahrenheit);
float celcius = (Fahrenheit-32)*0.55555555556;
printf("en celcius %d es %.2f",Fahrenheit,celcius);   
}
void punto_3(int segundos){
printf("\ndigite los segundos que desea tansformar a segundo, minutos y horas equivalentes: ");
scanf("%d",&segundos);
int minutos = segundos/60;
int horas = minutos/60;
int minutos_restantes = minutos%60;
int segundos_restantes = segundos%60;
printf("sus segundos,minutos y horas equivalentes son:\nsegundos:%d\nminutos:%d\nhoras:%d\n",segundos_restantes,minutos_restantes,horas);
}
void punto_4(float nota_1,float taller_1,float nota_2,float actividad_1,float nota_3,float actividad_2){
printf("digite sus notas en orden:\n");
scanf("%f",&nota_1);
scanf("%f",&nota_2);
scanf("%f",&nota_3);
printf("digite las actividades o talleres realizados en orden:\n");
scanf("%f",&taller_1);
scanf("%f",&actividad_1);
scanf("%f",&actividad_2);
float ponderado_nota_uno = (nota_1*0.75+taller_1*0.25)*0.35;
float ponderado_nota_dos = (nota_2*0.75+actividad_1*0.25)*0.35;
float ponderado_nota_tres = (nota_3*0.75+actividad_2*0.25)*0.30;
float nota_final = ponderado_nota_uno+ponderado_nota_dos+ponderado_nota_tres;
printf("su nota final es: %.2f",nota_final);
}
void punto_5(int a,int b,int c,int d,int r){
printf("\ndigite a:");
scanf("%d",&a);
printf("\ndigite b:");
scanf("%d",&b);
printf("\ndigite c:");
scanf("%d",&c);
printf("\ndigite d:");
scanf("%d",&d);
printf("\ndigite r:");
scanf("%d",&r);
float ecuacion = (4.0/(3.0*(r+34)))-(9*(a+(b*c)))+((3+(d*(2+a)))/(a+(b*d)));
printf("\nel resultado de la ecuacion de este punto es: %.2f",ecuacion);
}
void punto_6(int x,float sigma,int y,float lambda,float alfa,float f){
printf("\nla funcion f es: %.2f",f);
}
void punto_7(float sueldo_base,float complemento_de_destino,float complemento_de_cargo_academico,int horas_extras_realizadas,int hijos,int mayores){
    
    printf("\ndigite el sueldo base: ");
    scanf("%f",&sueldo_base);
    printf("digite el compplemento de destino: ");
    scanf("%f",&complemento_de_destino);
    printf("digite el complemento de cargo academico: ");
    scanf("%f",&complemento_de_cargo_academico);
    printf("digite las horas extras realizadas: ");
    scanf("%d",&horas_extras_realizadas);
    printf("digite los hijos integrantes del hogar: ");
    scanf("%d",&hijos);
    printf("digite las personas mayores del hogar: ");
    scanf("%d",&mayores);

   
   printf("calculo_de_nomina: ");
    float sueldo_bruto=sueldo_base+complemento_de_destino+complemento_de_cargo_academico+(horas_extras_realizadas*23);
    printf("\nsueldo bruto: %.2f",sueldo_bruto);
    float porcentaje_IRPF =24-(hijos*2)-(mayores*1);
    printf("\nporcentaje de IRPF: %.2f",porcentaje_IRPF);
    float retencion_por_IRPF= (porcentaje_IRPF*sueldo_bruto)/100;
    printf("\nretencion por IRPF: %.2f",retencion_por_IRPF);
    float sueldo_neto=sueldo_bruto-retencion_por_IRPF;
    printf("\nsueldo neto:%.2f",sueldo_neto);
}
void punto_8(int u,double z){
    u=((46%9)+(4*4))-2;
    printf("a = %d\n", u);
    u=45+((43%5)*((23*3)%2));
    printf("a=%d\n",u);
    u=45+((45 * 50)%(u--));
    printf("a=%d\n",u);
    z=(1.5*3)+(++z);
    printf("d=%.2f\n",z);
    z=(1.5*3)+(z++);
    printf("d=%.2f\n",z);
    u%=(3/u)+3;
    printf("a=%d\n",u);
}
void punto_9(int lado1,int lado2){
    printf("digite el lado A: ");
    scanf("%d",&lado1);
    printf("digite el lado B: ");
    scanf("%d",&lado2);
    float area=0.5*lado1*lado2*0.707106;
    printf("\nel area de un triangulo de lados %d y %d es: %.2f",lado1,lado2,area);
}
void punto_10(int capital_prestado,int interes_anual,int plazo){
    printf("\ncapital prestado:");
    scanf("%d",&capital_prestado);
    printf("interes anual:");
    scanf("%d",&interes_anual);
    printf("plazo en meses:");
    scanf("%d",&plazo);
    int ratio=interes_anual/12;
    float cuota=(capital_prestado*ratio)/(100*(1-(1+(((ratio/100)-plazo)))));
    printf("\ncuota: %.2f",cuota);
    int amortizacion=capital_prestado;
    printf("\namortizacion: %d",amortizacion);
    int intereses=cuota*plazo;
    printf("\ntotal pagado por intereses: %d",intereses);
}








 