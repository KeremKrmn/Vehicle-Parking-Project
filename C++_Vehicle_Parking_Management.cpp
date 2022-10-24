#include <iostream>
#include <map>
#include <string>


using namespace std;


int totalMtrcycle = 0;
int totalCar = 0;
int totalBus = 0;
int totalTruck = 0;
int totalVehicle = 0;
int totalcapacity = 70;

int priceMtrcycle = 2;
int priceCar = 7;
int priceBus = 12;
int priceTruck = 15;
int sumofAllprices = 0;

int TotalpriceMtrcycle = 0;
int TotalpriceCar = 0;
int TotalpriceBus = 0;
int TotalpriceTruck = 0;

int NumbertoEnter;
int HowmanyHours;

string MtrcyclePlateNumber;
string CarPlateNumber;
string BusPlateNumber;
string TruckPlateNumber;

char YeyorNay;

map<string, int> CarPNumber;
map<string, int> MtrcyclePNumber;
map<string, int> TruckPNumber;
map<string, int> BusPNumber;


//With this function, we choose our vehicle.
void WhichVehicle()
{
	cout << "Press 1 to park Motorcycle\t\t" << "The hourly price of the Motorcycle is: " << "$" << priceMtrcycle << endl;
	cout << "Press 2 to park Car\t\t\t" << "The hourly price of the Car is: " << "$" << priceCar << endl;
	cout << "Press 3 to park Buss\t\t\t" << "The hourly price of the Buss is: " << "$" << priceBus << endl;
	cout << "Press 4 to park Truck\t\t\t" << "The hourly price of the Truck is: " << "$" << priceTruck << endl;
	cout << "Press 5 to look values" << endl;
	cout << "Press 6 to delete all values" << endl;
	cout << "Press 7 to QUIT" << endl;
	cout << "\n";

}

//We show you how many cars are parked and how much they cost in total.
void ShowAll()
{
	cout << "Total number of Motorcycles: " << totalMtrcycle << "\t" << "Total price is: " << "$" << TotalpriceMtrcycle << endl;
	cout << "Total number of Cars: " << totalCar << " \t" << "Total price is: " << "$" << TotalpriceCar << endl;
	cout << "Total number of Buses: " << totalBus << "\t" << "Total price is: " << "$" << TotalpriceBus << endl;
	cout << "Total number of Trucks: " << totalTruck << "\t" << "Total price is: " << "$" << TotalpriceTruck << endl;
	cout << "Total number of Vehicles: " << totalVehicle << "\t" << "Sum of all prices is: " << "$" << sumofAllprices << endl;
	cout << "************************************************************* \n" << endl;

}

//With this function we delete all values.
void DeleteAll()
{
	totalMtrcycle = 0;
	totalCar = 0;
	totalBus = 0;
	totalTruck = 0;
	totalVehicle = 0;

	TotalpriceMtrcycle = 0;
	TotalpriceCar = 0;
	TotalpriceBus = 0;
	TotalpriceTruck = 0;
	sumofAllprices = 0;

	cout << "All values are deleted. \n" << endl;

}



//With this function we will prevent the user from entering any string.
void HowManyHours()
{

	while (true)
	{
		cout << "How many hours do you want tou park?\nPlease enter: ";
		cin >> HowmanyHours;
		cout << "\n";

		if (!cin) //show this message when user enters string
		{
			cout << "Wrong Value!! Please enter a number.\n" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>().max(), '\n');
			continue;
		}

		else if (HowmanyHours <= 0)
		{
			cout << "!!!Please enter positive number!!!\n" << endl;
			continue;
		}

		else
		{
			break;
		}
	}
}

//This function is used to store motorcycle plate numbers.
void MotorcyclePlateNumbersToHMHours()
{
	cout << "Please enter your plate number: ";
	cin >> MtrcyclePlateNumber;

	for (int i = 0; i < MtrcyclePlateNumber.length(); i++)
	{
		MtrcyclePlateNumber[i] = toupper(MtrcyclePlateNumber[i]);
	}

	cout << endl;

	MtrcyclePNumber.insert({ MtrcyclePlateNumber, HowmanyHours });

	while (true)
	{
		cout << "Want to see all Car licence plate numbers ? (Y / N) : ";
		cin >> YeyorNay;
		cout << endl;

		if (YeyorNay == 'Y' || YeyorNay == 'y')
		{

			for (auto element : MtrcyclePNumber)
			{
				cout << "Motorcycle Plate Number is: " << element.first << " ---> " << element.second << "hours." << endl;
			}

			cout << endl;
			break;
		}
		else if (YeyorNay == 'N' || YeyorNay == 'n')
		{
			break;
		}
		else
		{
			cout << "!!Try again!!" << endl;
		}

	}
}

//This function is used to store car plate numbers.
void CarPlateNumbersToHMHours()
{
	cout << "Please enter your plate number: ";
	cin >> CarPlateNumber;

	for (int i = 0; i < CarPlateNumber.length(); i++)
	{
		CarPlateNumber[i] = toupper(CarPlateNumber[i]);
	}

	cout << endl;

	CarPNumber.insert({ CarPlateNumber, HowmanyHours });

	while (true)
	{
		cout << "Want to see all Car licence plate numbers ? (Y / N) : ";
		cin >> YeyorNay;
		cout << endl;

		if (YeyorNay == 'Y' || YeyorNay == 'y')
		{

			for (auto element : CarPNumber)
			{
				cout << "Car Plate Number is: " << element.first << " ---> " << element.second << " hours." << endl;
			}
			cout << endl;
			break;
		}
		else if (YeyorNay == 'N' || YeyorNay == 'n')
		{
			break;
		}
		else
		{
			cout << "!!Try again!!" << endl;
		}

	}
}

//This function is used to store bus plate numbers.
void BusPlateNumbersToHMHours()
{
	cout << "Please enter your plate number: ";
	cin >> BusPlateNumber;

	for (int i = 0; i < BusPlateNumber.length(); i++)
	{
		BusPlateNumber[i] = toupper(BusPlateNumber[i]);
	}

	cout << endl;

	BusPNumber.insert({ BusPlateNumber, HowmanyHours });


	while (true)
	{
		cout << "Want to see all Car licence plate numbers ? (Y / N) : ";
		cin >> YeyorNay;
		cout << endl;

		if (YeyorNay == 'Y' || YeyorNay == 'y')
		{

			for (auto element : BusPNumber)
			{
				cout << "Bus Plate Number is: " << element.first << " ---> " << element.second << " hours." << endl;
			}
			cout << endl;
			break;
		}
		else if (YeyorNay == 'N' || YeyorNay == 'n')
		{
			break;
		}
		else
		{
			cout << "!!Try again!!" << endl;
		}

	}

}

//This function is used to store truck plate numbers.
void TruckPlateNumbersToHMHours()
{
	cout << "Please enter your plate number: ";
	cin >> TruckPlateNumber;

	for (int i = 0; i < TruckPlateNumber.length(); i++)
	{
		TruckPlateNumber[i] = toupper(TruckPlateNumber[i]);
	}

	cout << endl;

	TruckPNumber.insert({ TruckPlateNumber, HowmanyHours });

	while (true)
	{

		cout << "Want to see all Car licence plate numbers ? (Y / N) : ";
		cin >> YeyorNay;
		cout << endl;

		if (YeyorNay == 'Y' || YeyorNay == 'y')
		{

			for (auto element : TruckPNumber)
			{
				cout << "Truck Plate Number is: " << element.first << " ---> " << element.second << " hours." << endl;
			}
			cout << endl;
			break;
		}
		else if (YeyorNay == 'N' || YeyorNay == 'n')
		{
			break;
		}
		else
		{
			cout << "!!Try again!!" << endl;
		}

	}

}

int main()
{

	cout << "\t\t\t Total capacity is " << totalcapacity << " vehicles.\n";

	while (totalVehicle < totalcapacity)
	{
		cout << endl;
		WhichVehicle();

		//show this message when user enters string 
		while (true)
		{
			cin >> NumbertoEnter;
			cout << "\n";

			if (!cin)
			{
				cout << "Wrong Value!! Please enter a number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>().max(), '\n');
				continue;
			}
			else
			{
				break;
			}
		}

		switch (NumbertoEnter)
		{
		case 1:

			HowManyHours();
			MotorcyclePlateNumbersToHMHours();


			cout << "\nMotorcycle parked.\n" << endl;
			totalMtrcycle++;

			TotalpriceMtrcycle += priceMtrcycle * HowmanyHours;
			break;

		case 2:

			HowManyHours();
			CarPlateNumbersToHMHours();

			cout << "Car parked.\n" << endl;
			totalCar++;

			TotalpriceCar += priceCar * HowmanyHours;
			break;

		case 3:

			HowManyHours();
			BusPlateNumbersToHMHours();

			cout << "Bus parked.\n" << endl;
			totalBus++;


			TotalpriceBus += priceBus * HowmanyHours;
			break;

		case 4:

			HowManyHours();
			TruckPlateNumbersToHMHours();

			cout << "Truck parked.\n" << endl;
			totalTruck++;


			TotalpriceTruck += priceTruck * HowmanyHours;
			break;

		case 5:
			ShowAll();
			break;

		case 6:
			DeleteAll();
			break;
		case 7:
			return 0;
			break;

		default:
			cout << "!!!PLEASE ENTER BETWEEN 1-4!!! \n" << endl;
			break;
		}


		totalVehicle = totalMtrcycle + totalCar + totalBus + totalTruck;
		sumofAllprices = TotalpriceMtrcycle + TotalpriceCar + TotalpriceBus + TotalpriceTruck;

	}

	cout << "\t\t\t!!THERE IS NO ROOM FOR ANOTHER VEHICLE!!\n" << endl;
	ShowAll();

	return 0;
}