Action()
{
	int randNumber;
	lr_start_transaction("UC3_ReservNotPay");



	
	startWebTours();
	
	lr_think_time(5);
	
	
	
	
	logIn();
	
	lr_think_time(5);
	
	
	
		
	toFlightsPage();

	lr_think_time(5);
	
	
	
	
	randNumber = rand() % 4 + 1;
	enterFlightData(randNumber);
	
	lr_think_time(5);

	
	
	
	selectFlight();
	
	lr_think_time(5);
		



	logOut();


	
	
	lr_end_transaction("UC3_ReservNotPay", LR_AUTO);

	return 0;
}
