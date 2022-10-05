/************************lastnameFirstnameA1.c**************
 Student Name: Shubhreet Singh Dang Email Id: shubhree@uoguelph.ca
Due Date: ………… Course Name: CIS 1300
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic
integrity;
2) I have completed the Computing with Integrity Tutorial on Moodle; and
3) I have achieved at least 80% in the Computing with Integrity Self
Test.
I assert that this work is my own. I have appropriately acknowledged any
and all material that I have used, whether directly quoted or
paraphrased. Furthermore, I certify that this assignment was prepared by
me specifically for this course.
********************************************************/

/*********************************************************
Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall
compiling:
gcc lastnameFirstnameA2.c -std=c99 -Wall 
OR
gcc lastnameFirstnameA1.c -std=c99 -Wall -o assn1
Running the Program
Running: ./a.out
 OR
 Running: ./assn2
*********************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int format;
	int timeHour, timeMin, totalTime,costFlight;
	char flightAP;
	int hotelReq,hotelName,montrealDays,hotelRide;
	int totalCost,costafterDiscount1;
	float hotelBill;
	int sumBirthday,birthDay,n1,n2;
	float hotelCost,hotelRideCost;
	float discount1,discount2,totalCostDisc,tax,totalCostTax;
	float numCost0,numCost1,numCost2;

	int multiple=11; // using for loop for the additional functionability
	int j;
	for(j=0;j<=2;j=j+1)
	{
	
	printf("Would you like to enter the time in 12-hour format (enter 1) or 24-hour format (enter 2)? "); 
	scanf("%d",&format);
	switch (format) 
	{
	
		case 1 : 
		
		printf("\nEnter time in 12-hour format\n");
		
		printf("\nEnter the value between 0 and 12 for hours : ");
		scanf("%d",&timeHour);
		
		printf("Enter the value between 0 and 60 for minutes : ");
		scanf("%d",&timeMin);
		
		printf("Enter a for am and p for pm : ");
		
    	getchar();
		scanf(" %c",&flightAP);
		printf("---------------------------\n");
		
		if (flightAP == 'a')
		{
      		totalTime=(timeHour*60)+timeMin; // Converting the time into total minutes
      		
			printf("You entered %.2d:%.2d am\n", timeHour, timeMin);
			printf("In 24-hour format - you entered %.2d:%.2d\n", timeHour, timeMin);
			printf("---------------------------\n");
			
			if (totalTime<465)
			{
				printf("Closest departure time is 7:15a.m., arriving at 8:25a.m.\n");
				costFlight=231;
		    }
		    else if (totalTime>=465 && totalTime<525)
		    {
		    	printf("Closest departure time is 8:15a.m., arriving at 9:25a.m.\n");
		    	costFlight=226;
			}

		    else if (totalTime>=525 && totalTime<585)
		    {
		    	printf("Closest departure time is 9:15a.m., arriving at 10:25a.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=585 && totalTime<645)
		    {
		    	printf("Closest departure time is 10:15a.m., arriving at 11:25a.m.\n");
		    	costFlight=283;
			}
		    else if (totalTime>=645 && totalTime<795)
		    {
		    	printf("Closest departure time is 11:15a.m., arriving at 12:25p.m.\n");
		    	costFlight=283;
			}
		  																		
		}
		else 
		{
    
			printf("You entered %.2d:%.2d pm\n", timeHour, timeMin);
			timeHour=timeHour+12;
      		totalTime=(timeHour*60)+timeMin; // Converting the time into total minutes
			printf("In 24-hour format - you entered %.2d:%.2d\n",timeHour,timeMin);
			printf("---------------------------\n");
			
	
		    if (totalTime>=645 && totalTime<795)
		    {
		    	printf("Closest departure time is 11:15a.m., arriving at 12:25p.m.\n");
		    	costFlight=283;
			} 
		    if (totalTime>=795 && totalTime<945)
		    {
		    	printf("Closest departure time is 3:15p.m., arriving at 4:25p.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=945 && totalTime<1005)
		    {
		    	printf("Closest departure time is 4:15p.m., arriving at 5:25p.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=1005)
		    {
		    	printf("Closest departure time is 5:15p.m., arriving at 6:25p.m.\n");
		    	costFlight=401;
			}			
		}
		break;
		
		case 2 : 
		printf("\nEnter time in 24-hour format\n");
		
		printf("\nEnter the value between 0 and 24 for hours : ");
		scanf("%d",&timeHour);
		
		printf("Enter the value between 0 and 60 for minutes : ");
		scanf("%d",&timeMin);
		printf("---------------------------\n");
			
		printf("You entered %.2d:%.2d\n",timeHour,timeMin);
		
		
		if (timeHour>12)
		{
			timeHour=timeHour-12;
			printf("In 12-hour format - you entered %.2d:%.2d pm",timeHour,timeMin);
		}
		else
		{
			printf("In 12-hour format - you entered %.2d:%.2d am",timeHour,timeMin);
		}
		printf("\n---------------------------\n");
		
		timeHour=timeHour+12;
		totalTime=(timeHour*60)+timeMin;
			if (totalTime<465)
			{
				printf("Closest departure time is 7:15a.m., arriving at 8:25a.m.\n");
				costFlight=231;
		    }
		    else if (totalTime>=465 && totalTime<525)
		    {
		    	printf("Closest departure time is 8:15a.m., arriving at 9:25a.m.\n");
		    	costFlight=226;
			}

		    else if (totalTime>=525 && totalTime<585)
		    {
		    	printf("Closest departure time is 9:15a.m., arriving at 10:25a.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=585 && totalTime<645)
		    {
		    	printf("Closest departure time is 10:15a.m., arriving at 11:25a.m.\n");
		    	costFlight=283;
			}
		    else if (totalTime>=645 && totalTime<795)
		    {
		    	printf("Closest departure time is 11:15a.m., arriving at 12:25p.m.\n");
		    	costFlight=283;
			}
		    else if (totalTime>=795 && totalTime<945)
		    {
		    	printf("Closest departure time is 3:15p.m., arriving at 4:25p.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=945 && totalTime<1005)
		    {
		    	printf("Closest departure time is 4:15p.m., arriving at 5:25p.m.\n");
		    	costFlight=226;
			}
		    else if (totalTime>=1005)
		    {
		    	printf("Closest departure time is 5:15p.m., arriving at 6:25p.m.\n");
		    	costFlight=401;
			}		
		
		break;	// finished task 1 and 2
	
	} // end of the switch case
	
	printf("\nWould you like a hotel in Montreal - Enter 0 for no; 1 for yes? : "); // beginning task 3
	scanf("%d",&hotelReq);
	switch (hotelReq)
	{
		case 0:
		hotelCost=0;
		hotelRideCost=0;
		break;
		
		case 1:
		printf("\nThere are 3 hotels :\n1. Marriott = $248 per night\n2. Sheraton b=$90 per night\n3. Double Tree c=$128 per night\n");
		printf("\nYour choice? :");
		scanf("%d",&hotelName);	
		if (hotelName == 1)
		{
			hotelCost=248;
		}
		else if (hotelName == 2)
		{
			hotelCost=90;
		}
		else if (hotelName == 3)
		{
			hotelCost=128;
		}
		printf("How many days in Montreal? ");
		scanf("%d",&montrealDays); // end of task 3
		
		printf("\nWould you like to have a ride to the hotel? - enter 0 for no; 1 for yes :"); // beginning of task 4
		scanf("%d",&hotelRide);
		
		if (hotelRide==0)
		{
			hotelRideCost=0;
		}
		else
		{
			if (hotelName==1)
			hotelRideCost=0;
			else if (hotelName==2)
			hotelRideCost=25;
			else 
			hotelRideCost=20;
		}
			
	} // end of switch case and end of task 4 
	
	
	printf("\nNow enter your day of birth to qualify for discount2 : "); 
	scanf("%d",&birthDay); 
		
	n1=birthDay%10;
	n2=birthDay/10;
	sumBirthday=n1+n2;
				
	hotelBill=hotelCost*montrealDays; // beginning of task 5
	printf("\nYour total cost comes to :\n\n");
	printf("Cost of closest departure flight :$%d\n",costFlight);
	printf("Cost of hotel for %d days : $%0.2f\n",montrealDays, hotelBill);
	printf("Cost of ride to the hotel : $%0.2f\n",hotelRideCost);
	
	totalCost=costFlight+(hotelCost*montrealDays)+hotelRideCost;
	printf("\nTotal cost before tax : $%d\n\n",totalCost); // end of task 5
	
	if(totalCost%multiple==0) // beginning of task 6 (the discounts)
	{
		discount1=0.05*totalCost;
		printf("You get a discount of 5 percent as the total cost was a multiple of 11\n");
	}
	else
	{
		discount1=0;
		printf("Sorry you missed out on discount of 5 percent because the total cost was not a multiple of 11\n");
	}
	costafterDiscount1=totalCost-discount1;
	
	if(costafterDiscount1%sumBirthday==0)
	{
		discount2=0.05*costafterDiscount1;
		printf("You get an additonal discount of 5 percent as the total cost after discount1 was a multiple of sum of digits in your day of birth\n ");
	}
	else
	{
		discount2=0;
		printf("Sorry you missed out on additional discount of 5 percent as the total cost after discount was not a multiple of sum of digits in your day of birth\n");
	}

	totalCostDisc=totalCost-discount1-discount2;
	printf("\nTotal cost after discounts 1 and 2 : $%0.2f\n",totalCostDisc); // end of task 6
	
	tax=13*totalCostDisc/100;

	totalCostTax=totalCostDisc+tax;
	printf("\nFinally, your total cost after taxes : $%0.2f\n\n",totalCostTax); // end of task 7
	
	if (j==0) //Additional Functionality by using for loop
	{
		numCost0=totalCostTax;
	}
	else if  (j==1)
	{
		numCost1=totalCostTax;
	}
	else if (j==2)
	{
		numCost2=totalCostTax;
	}
	
	}
	if (numCost0<numCost1)
	{
	
		if (numCost0<numCost2)
		{
		printf(" Option number 1 is the best option for you with a minimum cost $%0.2f",numCost0);
		}
		else 
		{
			printf("Option number 3 is the best option for you with a minimum cost $%0.2f",numCost2);
		}
	}
	else if (numCost2<numCost1)
	{
	printf("Option number 3 is the best option for you with a minimum cost $%0.2f",numCost2);
	}
	else
	printf("Option number 2 is the best option for you with a minimum cost $%0.2f",numCost1); // displaying the least costs
	
	return 0;
}// end of the main function
