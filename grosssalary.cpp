#include<stdio.h>
int main(){
	float basesalary,hrap,dap,tap;
	float grosssalary,hra, da, ta;
	
	printf("Enter the Base salary : ");
	scanf("%f",&basesalary);
	
	printf("Enter the hra : ");
	scanf("%f",&hrap);
	
	printf("Enter the da : ");
	scanf("%f",&dap);
	
	printf("Enter the ta : ");
	scanf("%f",&tap);
	
	hra = (hrap / 100) * basesalary;
    da = (dap / 100) * basesalary;
    ta = (tap / 100) * basesalary;
    
    grosssalary = basesalary + hra + da + ta;

    printf("The gross salary is: %f", grosssalary);

    return 0;
}
