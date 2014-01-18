#include <stdio.h>
#include <string.h>
/*This is a basic project to have a functional calculator for basic physics problems.*/
/*I need to add in support for units*/

int main(){

	int selection;
	printf("Hello, and welcome to my basic physics calculator \n");
	printf("Please choose what type of operation you would want: \n");
	
	printf("1: Speed \n");
	printf("2: Velocity \n");
	printf("3: Acceleration \n");
	printf("As I am still learning more about Physics, please expect more possible calculations soon \n");
	
	scanf( "%d", &selection );
	
	/*This is the entire section for determining certain aspects of speed, via the method of one of 3 operations, listed below.
	S = D/T
	T = D/S
	D = S*T
	where S = Speed, D = Distance, and T = time*/
	
	if (selection == 1){
		double speed;
		double time;
		double distance;
		int selectionSpeed;
		printf("What are you trying to find? \n");
		printf("1: Speed \n");
		printf("2: Time \n");
		printf("3: Distance \n");
		
		scanf( "%d", &selectionSpeed);
		
		if (selectionSpeed == 1){
			printf("What is the Distance? \n");
			scanf("%lf", &distance);
			printf("What is the Time? \n");
			scanf("%lf", &time);
			speed = distance / time;
			printf("The speed is %lf \n", speed);
		}
		else if (selectionSpeed == 2){
			printf("What is the Distance? \n");
			scanf("%lf", &distance);
			printf("What is the Speed? \n");
			scanf("%lf", &speed);
			time = distance / speed;
			printf("The time is %lf \n", time);
		}
		else if (selectionSpeed == 3){
			printf("What is the speed? \n");
			scanf( "%lf", &speed);
			printf("What is the time? \n");
			scanf( "%lf", &time);
			distance = speed * time;
			printf("The distance is %lf \n", distance);
		}
		else {
			printf("I did not understand that. Please try telling me again? \n");	
		}
	}
	
	/*Velocity is almost the same thing as speed, except it contains a direction as well, this code will pretty much copied and pasted for time's sake*/
	else if (selection == 2){
		char direction[2048];
		double speed;
		double time;
		double distance;
		
		printf("What is the Distance? \n");
		scanf("%lf", &distance);
		printf("What is the Time? \n");
		scanf("%lf", &time);
		printf("What is the Direction? \n");
		scanf("%s", direction);
		speed = distance / time;
		printf("The velocity is %lf in direction %s \n", speed, direction);
	}
	
	/*Acceleration is a bit more difficult than the past 2. Acceleration is found with the formula:
	A=Vf-Vi/T
	where A=Acceleration, Vf is the final velocity, Vi is the initial velocity, and T is time*/
	
	else if (selection == 3){
		double acceleration;
		double VelFinal;
		double VelInitial;
		double time;
		
		printf("What is your Final Velocity? \n");
		scanf("%lf", &VelFinal);
		printf("What is your Initial Velocity? \n");
		scanf("%lf", &VelInitial);
		printf("What is the time? \n");
		scanf("%lf", &time);
		acceleration = (VelFinal - VelInitial)/time;
		printf("The acceleration is %lf \n", acceleration);
	}
	else {
		printf("I didn't understand that response. Please try another response \n");
	return 0;
}
}
