Action()
{
	lr_start_transaction("UC4_ReservDelete");

	
	

	startWebTours();

	lr_think_time(5);
	
		
	
	
	logIn();

	lr_think_time(5);
	
	
	
	
	allViewTicket();
				
	lr_think_time(5);
	
	
	
	

	lr_start_transaction("DeleteTicket");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_save_int(atoi(lr_eval_string("{Flight_count}")),"countFlight");

	if(atoi(lr_eval_string("{countFlight}"))>0&&atoi(lr_eval_string("{countFlight}"))<=3)
	{

		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t5.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);
	}
	else if(atoi(lr_eval_string("{countFlight}"))<=5)
	{
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_2}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t6.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);
	}
	else if(atoi(lr_eval_string("{countFlight}"))>=6)
	{
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_1}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_2}\"","fail=found",LAST);
		web_reg_find("Text=name=\"flightID\" value=\"{Flight_3}\"","fail=found",LAST);
		
		web_submit_form("itinerary.pl",
		"Snapshot=t7.inf",
		ITEMDATA,
		"Name=1", "Value=on", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=3", "Value=on", ENDITEM,
		"Name=removeFlights.x", "Value=60", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,
		LAST);		
	}
		
	lr_end_transaction("DeleteTicket",LR_AUTO);

	lr_think_time(5);

	
	
		
	logOut();

	
	
	
	lr_end_transaction("UC4_ReservDelete",LR_AUTO);

	return 0;
}
