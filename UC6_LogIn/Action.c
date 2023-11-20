Action()
{
	lr_start_transaction("UC6_LogIn");

	
	
	
	startWebTours();
		
	lr_think_time(5);
	
	
	
	
	logIn();
	
	lr_think_time(5);

	
	
	
	toFlightsPage();

	lr_think_time(5);
	
	

		
	logOut();

	
	
	
	lr_end_transaction("UC6_LogIn", LR_AUTO);
	
	return 0;
}
