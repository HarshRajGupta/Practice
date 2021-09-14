//Area of figures

#include <stdio.h>
#include <process.h>
#include <math.h>
int main()
{	int a;
	printf("Welcome\n");
	float d,r,z;
	d=r=z=1;
	while (a!=7)
	//Programme will not end till user don't press exit
	{
		printf("\n1. Area of Circle\n2. Area of Square\n3. Area of Rectangle\n4. Area of Triangle\n5. Area of Pralleogram\n6. Area of Ellipse\n7. Exit\n");

	    scanf("%d",&a);

	    switch (a)
	    {
		    case 1: printf("\nRadius of Circle : ");
		            scanf("%f",&r);
		            d=6.284*r;
		            printf("\n========================================\n");
		            printf("Area of Circle = %.3f",d);
		            printf("\n========================================\n");
		            break;//if break not used then switch will continue
		                   //All the below options will be executed

		    case 2: printf("\nSide of Square : ");
		            scanf("%f",&r);
		            d=r*r;
		            printf("\n========================================\n");
		            printf("Area of Square = %.2f",d);
		            printf("\n========================================\n");
		            break;

		    case 3: printf("\nLength & breadth of Rectangle : ");
		            scanf("%f%f",&r,&z);
		            d=r*z;
		            printf("\n========================================\n");
		            printf("Area of Rectangle = %0.2f",d);
		            printf("\n========================================\n");
		            break;

		    case 4: printf("\nHeight & Base of Triangle : ");
		            scanf("%f%f",&r,&z);
		            d=r*z/2;
		            printf("\n========================================\n");
		            printf("Area of Triangle = %0.2f",d);
		            printf("\n========================================\n");
		            break;

		    case 5: printf("\nHeight & Base of Pralleogram : ");
		            scanf("%f%f",&r,&z);
		            d=r*z;
		            printf("\n========================================\n");
		            printf("Area of Pralleogram : %.2f",d);
		            printf("\n========================================\n");
		            break;         

		    case 6: printf("\nSemi Major & Minor Axis : ");
		            scanf("%f%f",&r,&z);
		            d=3.142*r*z;
		            printf("\n========================================\n");
		            printf("Area of Ellipse = %0.3f",d);
		            printf("\n========================================\n");
		            break;

		    case 7: printf("\nThank You\n");
		            break;

		    default:printf("\nWrong Option Selected\nChoose from the below Options");
	    }
    }
    return 0;
}