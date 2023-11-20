Action()
{
	lr_start_transaction("UC5_ReservView");

	
	
	
	startWebTours();
		
	lr_think_time(5);
	
	

	
	logIn();

	lr_think_time(5);
	
	
	
	
	allViewTicket();
				
	lr_think_time(5);

	
		

	logOut();

	

	
	lr_end_transaction("UC5_ReservView", LR_AUTO);

	return 0;
}
