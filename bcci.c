#include<stdio.h>
#include<stdlib.h>
float PersonalIncomeTax(float as);
float SSSContri(float ms);
float PagIbig(float ms);
float PhilHealth(float ms);

int main()
{
    int ms,as;
    float sss,ph,tax,pi;
    char name[30], nameCompany[30],choose;
do 
{
    printf("NAME OF EMPLOYEE: ");
    scanf("%s", name);
    fgets(name,30,stdin);
    printf("NAME OF COMPANY: ");
    fgets(nameCompany,30,stdin);
    printf("MONTHLY SALARY: ");
    scanf("%d", &ms);
    
    as=ms*12;
    tax=PersonalIncomeTax(as);
    sss=SSSContri(ms);
    pi=PagIbig(ms);
    ph=PhilHealth(ms);
    
    printf("\n\tINCOME TAX: %.2f", tax);
    printf("\n\tSSS CONTRIBUTION: %.2f", sss);
    printf("\n\tPAG-IBIG: %.2f", pi);
    printf("\n\tPHILHEALTH: %.2f", ph);
    
    printf("\n\nANOTHER INQUIRY[Y/N]? ");
    scanf("%s", &choose);
    system("clear");
    
}while(choose=='Y'|| choose=='y');
system("clear");
printf("THANK YOU FOR USING THE BCCI SYSTEM BY JUGO");
printf("\n\n\tCOME AGAIN!! ");
}

float PersonalIncomeTax(float as)
{
    float tax;
    if(as<250000) 
    {
    tax=0.00;
    return tax;
    } else if (as>250000&&as<=400000) {
    tax=(.20*(as-250000))/12;
    return tax;
    } else if (as>400000&&as<=800000) {
    tax=(30000+.25*(as-400000))/12;
    return tax;
    } else if (as>800000&&as<=2000000) {
    tax=(130000+.30*(as-800000))/12;
    return tax;
    } else if (as>2000000&&as<=8000000) {
    tax=(490000+.32*(as-2000000))/12;
    return tax;
    } else {
    tax=(2410000+.35*(as-8000000))/12;
    return tax;
    }
    }
float SSSContri(float ms)
{
    float sss;
    if (ms<2250) {
    sss=80.00;
    return sss;
    } else if (ms>2250&&ms<=2749) {
    sss=100.00;
    return sss;
    } else if (ms>2750&&ms<=3249) {
    sss=120.00;
    return sss;
    } else if (ms>3250&&ms<=3749) {
    sss=140.00;
    return sss;
    } else if (ms>3750&&ms<=4249) {
    sss=160.00;
    return sss;
    } else if (ms>4250&&ms<=4749) {
    sss=180.00;
    return sss;
    } else if (ms>4750&&ms<=5249) {
    sss=200.00;
    return sss;
    } else if (ms>5250&&ms<=5749) {
    sss=220.00;
    return sss;
    } else if (ms>5750&&ms<=6249) {
    sss=240.00;
    return sss;
    } else if (ms>6250&&ms<=6749) {
    sss=260.00;
    return sss;
    } else if (ms>6750&&ms<=7249) {
    sss=280.00;
    return sss;
    } else if (ms>7250&&ms<=7749) {
    sss=300.00;
    return sss;
    } else if (ms>7750&&ms<=8249) {
    sss=320.00;
    return sss;
    } else if (ms>8250&&ms<=8749) {
    sss=340.00;
    return sss;
    } else if (ms>8750&&ms<=9249) {
    sss=360.00;
    return sss;
    } else if (ms>9250&&ms<=9749) {
    sss=380.00;
    return sss;
    } else if (ms>9750&&ms<=10249) {
    sss=400.00;
    return sss;
    } else if (ms>10250&&ms<=10749) { 
    sss=420.00;
    return sss;
    } else if (ms>10750&&ms<=11249) {
    sss=440.00;
    return sss;
    } else if (ms>11250&&ms<=11749) {
    sss=460.00;
    return sss;
    } else if (ms>11750&&ms<=12249) {
    sss=460.00;
    return sss;
    } else if (ms>12250&&ms<=12749) {
    sss=480.00;
    return sss;
    } else if (ms>12750&&ms<=13249) {
    sss=500.00;
    return sss;
    } else if (ms>13250&&ms<=13749) {
    sss=520.00;
    return sss;
    } else if (ms>13750&&ms<=14249) {
    sss=540.00;
    return sss;
    } else if (ms>14250&&ms<=14749) {
    sss=560.00;
    return sss;
    } else if (ms>14750&&ms<=15249) {
    sss=580.00;
    return sss;
    } else if (ms>15250&&ms<=15749) {
    sss=600.00;
    return sss;
    } else if (ms>15750&&ms<=16249) {
    sss=620.00;
    return sss;
    } else if (ms>16250&&ms<=16749) {
    sss=640.00;
    return sss;
    } else if (ms>16750&&ms<=17249) {
    sss=680.00;
    return sss;
    } else if (ms>17250&&ms<=17749) {
    sss=700.00;
    return sss;
    } else if (ms>17750&&ms<=18249) {
    sss=720.00;
    return sss;
    } else if (ms>18250&&ms<=18749) {
    sss=740.00;
    return sss;
    } else if (ms>18750&&ms<=19249) {
    sss=760.00;
    return sss;
    } else if (ms>19250&&ms<=19749) {
    sss=780.00;
    return sss;
    } else {
    sss=800.00;
    return sss;
    }
}
float PagIbig(float ms)
{
    float pi;
    if(ms<=1500) {
    pi=.01*ms;
    return pi;
    } else {
    pi=.02*ms;
    return pi;
    }
    }
float PhilHealth(float ms)
{
    float ph;
    if (ms<8999) {
    ph=100.00;
    return ph;
    } else if (ms>9000&&ms<=9999) {
    ph=112.50;
    return ph;
    } else if (ms>10000&&ms<=10999) {
    ph=125.00;
    return ph;
    } else if (ms>11000&&ms<=11999) {
    ph=137.50;
    return ph;
    } else if (ms>12000&&ms<=12999) {
    ph=150.00;
    return ph;
    } else if (ms>13000&&ms<=13999) {
    ph=162.50;
    return ph;
    } else if (ms>14000&&ms<=14999) {
    ph=175.00;
    return ph;
    } else if (ms>15000&&ms<=15999) {
    ph=187.50;
    return ph;
    } else if (ms>16000&&ms<=16999) {
    ph=200.00;
    return ph;
    } else if (ms>17000&&ms<=17999) {
    ph=212.50;
    return ph;
    } else if (ms>18000&&ms<=18999) {
    ph=225.00;
    return ph;
    } else if (ms>19000&&ms<=19999) {
    ph=237.50;
    return ph;
    } else if (ms>20000&&ms<=20999) {
    ph=250.00;
    return ph;
    } else if (ms>21000&&ms<=21999) {
    ph=262.50;
    return ph;
    } else if (ms>22000&&ms<=22999) {
    ph=275.00;
    return ph;
    } else if (ms>23000&&ms<=23999) {
    ph=287.50;
    return ph;
    } else if (ms>24000&&ms<=24999) {
    ph=300.00;
    return ph;
    } else if (ms>25000&&ms<=25999) {
    ph=312.50;
    return ph;
    } else if (ms>26000&&ms<=26999) {
    ph=325.00;
    return ph;
    } else if (ms>27000&&ms<=27999) {
    ph=337.50;
    return ph;
    } else if (ms>28000&&ms<=28999) {
    ph=350.00;
    return ph;
    } else if (ms>29000&&ms<=29999) {
    ph=362.50;
    return ph;
    } else if (ms>30000&&ms<=30999) {
    ph=375.00;
    return ph;
    } else if (ms>31000&&ms<=31999) {
    ph=387.50;
    return ph;
    } else if (ms>32000&&ms<=32999) {
    ph=400.00;
    return ph;
    } else if (ms>33000&&ms<=33999) {
    ph=412.50;
    return ph;
    } else if (ms>34000&&ms<=34999) {
    ph=425.00;
    return ph;
    } else {
    ph=437.50;
    return ph;
    }
    }

