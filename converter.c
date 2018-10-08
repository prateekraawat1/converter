/* Author Prateek Rawat
			LNCT, BHOPAL (M.P.)
	Email: prateekraawat@gmail.com*/
#include <stdio.h>

//MACROS 

#define DOLLAR 0.014
#define EURO 0.012
#define HKDOLLAR 0.11
#define YUAN 0.094
#define BITCOIN 0.0000020
#define MILES 0.62
#define METER 0.01
#define INCHES 39.370
#define FEET 3.2808
#define POUNDS 2.2046
#define OUNCES 0.035274
#define POUNCES 16.000
#define MHECTARE 0.0001
#define CHECTARE 0.00000001
#define KHECTARE 100
#define FOOT 0.0000229
#define YARDS 0.0002067
#define GALLONS 0.264172
#define LITRES 1000
#define BAR 100000
#define ATM 101325
#define HP 0.7457
#define KW 1000

int system(const char *command);  //We will be using system command to clear the screen that's why this is needed.

//function handling currency conversion
void currency()
{
	system("cls");
	int choice, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Currency Converter***********\n1. INR to US Dollar\n2. INR to Euro\n3. INR to Hong Kong Dollar\
			\n4. INR to Chinese Yuan\n5. INR to BITCOIN\n0. Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter value of Rupees: ?\b");
				scanf("%f", &value);
				converted = (value*DOLLAR);
				printf("\n%.2f RS in Dollars is %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter value of Rupees: ?\b");
				scanf("%f", &value);
				converted = (value*EURO);
				printf("\n%.2f RS in Euro is %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter value of Rupees: ?\b");
				scanf("%f", &value);
				converted = (value*HKDOLLAR);
				printf("\n%.2f RS in Hong Kong Dollars is %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter value of Rupees: ?\b");
				scanf("%f", &value);
				converted = (value*YUAN);
				printf("\n%.2f RS in Chinese Yuan is %.2f\n", value, converted);
				break;
			case 5:
				printf("\nEnter value of Rupees: ?\b");
				scanf("%f", &value);
				converted = (value*BITCOIN);
				printf("\n%.2f RS in Bitcoin is %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);
}

//function to handle metric and length conversion 
void metrics()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Metric Converter***********\n1. KM to Miles\n2. Centimeters to Meters\n3. Centimeters to Kilometers\
			\n4. Meters to Inches\n5. Inches to Meters\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter KMs: ?\b");
				scanf("%f", &value);
				converted = (value*MILES);
				printf("\n%.2f KMs in Miles are %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Centimeters: ?\b");
				scanf("%f", &value);
				converted = (value*METER);
				printf("\n%.2f Centimeters in Meters are %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Centimeters: ?\b");
				scanf("%f", &value);
				converted = (value*(METER/1000));
				printf("\n%.2f Centimeters in Kilometers are %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Meters: ?\b");
				scanf("%f", &value);
				converted = (value*INCHES);
				printf("\n%.2f Meters in Inches are %.2f\n", value, converted);
				break;
			case 5:
				printf("\nEnter INCHES: ?\b");
				scanf("%f", &value);
				converted = (value/INCHES);
				printf("\n%.2f Inches in Meters are %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);

}

//function to handle weight conversions
void weight()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Weight Converter***********\n1. Kilograms to Pounds\n2. Grams to Ounces\n3. Pounds to Ounces\
			\n4. Grams to Ounces\n5. Pounds to Kilograms\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Kilograms: ?\b");
				scanf("%f", &value);
				converted = (value*POUNDS);
				printf("\n%.2f Kilograms in Pounds is %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Grams: ?\b");
				scanf("%f", &value);
				converted = (value*OUNCES);
				printf("\n%.2f Grams in Ounces is %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Pounds: ?\b");
				scanf("%f", &value);
				converted = (value*POUNCES);
				printf("\n%.2f Pounds in Ounces is %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Ounces: ?\b");
				scanf("%f", &value);
				converted = (value/OUNCES);
				printf("\n%.2f Ounces in Grams is %.2f\n", value, converted);
				break;
			case 5:
				printf("\nEnter Pounds: ?\b");
				scanf("%f", &value);
				converted = (value/POUNDS);
				printf("\n%.2f Pounds in Kilograms is %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);
}

//function to handle area conversion
void area()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Area Converter***********\n1. Meters to Hectares\n2. Centimeters to Hectares\n3. Kilometers to Hectares\
			\n4. Acres to Foot/Feets\n5. Acres to Yards\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Meters: ?\b");
				scanf("%f", &value);
				converted = (value*MHECTARE);
				printf("\n%.2f Meters(sq) in Hectares are %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Centimeters: ?\b");
				scanf("%f", &value);
				converted = (value*CHECTARE);
				printf("\n%.2f Centimeters(sq) in Hectares are %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Kilometers: ?\b");
				scanf("%f", &value);
				converted = (value*KHECTARE);
				printf("\n%.2f Kilometers(sq) in Hectares are %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Acres: ?\b");
				scanf("%f", &value);
				converted = (value/FOOT);
				printf("\n%.2f Acres in Foot/Feet(sq) are %.2f\n", value, converted);
				break;
			case 5:
				printf("\nEnter Acres: ?\b");
				scanf("%f", &value);
				converted = (value/YARDS);
				printf("\n%.2f Acres in Yards(sq) are %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);

}

//function to handle fuel conversion
void fuel()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Fuel Converter***********\n1. Litres to Gallons\n2. Gallons to Litres\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Litres: ?\b");
				scanf("%f", &value);
				converted = (value*GALLONS);
				printf("\n%.2f Litres in Gallons are %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Gallons: ?\b");
				scanf("%f", &value);
				converted = (value/GALLONS);
				printf("\n%.2f Gallons in Litres are %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);
}

//function to convert time from one timezone to other (24 hours format)
void times()
{
	system("cls");
	int ch, flag = 0;
	char A[2];
	int value;
	do
	{
		printf("\n\t\t***********Time Converter***********\n1. 12 Hours to 24 Hours\n2. 24 Hours to 12 Hours\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Time: ?\b");
				scanf("%d", &value);
				printf("\nIs it in PM or AM: ?\b");
				scanf("%s", &A);
				if(A[0] == 'A' || A[0] == 'a')
				{
					printf("\nTime in 24 hours format: %d:00", value);
				}
				else
				{
					printf("\nTime in 24 hours format: %d:00", value+12);
				}
				break;
			case 2:
				printf("\nEnter Time: ?\b");
				scanf("%d", &value);
				if (value < 12)
				{
					printf("\nTime in 12 hours format: %d AM", value);
				}
				else
				{
					printf("\nTime in 12 hours format: %d PM", value-12);
				}
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);	
}

//function to handle volume conversions
void volume()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Volume Converter***********\n1. Mililitre to Litre\n2. Meter(cubic) to Litres\n3. Litres to Mililitre\
			\n4. Litres to Meter(cubic)\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Mililitres: ?\b");
				scanf("%f", &value);
				converted = (value/LITRES);
				printf("\n%.2f Mililitre in Litres are %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Meters(cube): ?\b");
				scanf("%f", &value);
				converted = (value*LITRES);
				printf("\n%.2f Meters(cubic) in Litres are %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Litres: ?\b");
				scanf("%f", &value);
				converted = (value*LITRES);
				printf("\n%.2f Litres in Mililitres are %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Litres: ?\b");
				scanf("%f", &value);
				converted = (value/LITRES);
				printf("\n%.2f Litres in Meters(cubic) are %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);
}

//function to handle temperature conversion
void temperature()
{
		system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Temperature Converter***********\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Kelvin to Celsius\
			\n4. Celsius to Kelvin\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Celsius: ?\b");
				scanf("%f", &value);
				converted = ((value * 1.8) + 32);
				printf("\n%.2f Celsius in Fahrenheit is %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Fahrenheit: ?\b");
				scanf("%f", &value);
				converted = ((value - 32) * 0.555);
				printf("\n%.2f Fahrenheit in Celsius is %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Kelvin: ?\b");
				scanf("%f", &value);
				converted = (value - 273.15);
				printf("\n%.2f Kelvin in Celsius is %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Celsius: ?\b");
				scanf("%f", &value);
				converted = (value + 273.15);
				printf("\n%.2f Celsius in Kelvin is %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);	
}

//function to handle pressure conversion
void pressure()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Pressure Converter***********\n1. Bar to Pascal\n2. ATM to Pascal\n3. Pascal to Bar\
			\n4. Pascal to ATM\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Bar: ?\b");
				scanf("%f", &value);
				converted = (value * BAR);
				printf("\n%.2f Bar in Pascal is %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter ATM: ?\b");
				scanf("%f", &value);
				converted = (value * ATM);
				printf("\n%.2f ATM in Pascal is %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Pascal: ?\b");
				scanf("%f", &value);
				converted = (value / BAR);
				printf("\n%.2f Pascal in Bar is %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Pascal: ?\b");
				scanf("%f", &value);
				converted = (value / ATM);
				printf("\n%.2f Pascal in ATM is %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);	
}

//function to handle power conversions
void power()
{
	system("cls");
	int ch, flag = 0;
	float value, converted;
	do
	{
		printf("\t\t***********Power Converter***********\n1. Horsepower to Kilowatts\n2. Kilowatts to Horsepower\n3. Kilowatts to Megawatts\
			\n4. Megawatts to Kilowatts\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter Horsepower: ?\b");
				scanf("%f", &value);
				converted = (value * HP);
				printf("\n%.2f Horsepower in Kilowatts is %.2f\n", value, converted);
				break;
			case 2:
				printf("\nEnter Kilowatts: ?\b");
				scanf("%f", &value);
				converted = (value / HP);
				printf("\n%.2f Kilowatts in Horsepower is %.2f\n", value, converted);
				break;
			case 3:
				printf("\nEnter Kilowatts: ?\b");
				scanf("%f", &value);
				converted = (value / KW);
				printf("\n%.2f Kilowatts in Megawatts is %.2f\n", value, converted);
				break;
			case 4:
				printf("\nEnter Megawatts: ?\b");
				scanf("%f", &value);
				converted = (value * KW);
				printf("\n%.2f Megawatts in Kilowatts is %.2f\n", value, converted);
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while(flag != 1);	
}
//function to handle the menu display
void display()
{
	int ch, flag = 0;
	do
	{
		system("cls");
		printf("\n\t\t******Unit and Currency Converter!*******\n1. Currency Converter\n2. Metric Converter\n3. Weight Converter\
			\n4. Area Converter \n5. Fuel Converter\n6. Time Converter\n7. Volume Converter\n8. Temperature Converter\
			\n9. Pressure Converter \n10. Power Converter\n0. Exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				currency();
				break;
			case 2:
				metrics();
				break;
			case 3:
				weight();
				break;
			case 4:
				area();
				break;
			case 5:
				fuel();
				break;
			case 6:
				times();
				break;
			case 7:
				volume();
				break;
			case 8:
				temperature();
				break;
			case 9:
				pressure();
				break;
			case 10:
				power();
				break;
			case 0:
				flag = 1;
				break;
			default:
				printf("\nInvalid Input!\n");
				break;
		}
	}while (flag != 1);
}
int main()
{
	display();
}