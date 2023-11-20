Action()
{
	int randNumber;
	
	lr_start_transaction("UC1_ReservAdd");

	
	

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

	
	
	
	lr_start_transaction("PayTicket");

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin",
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User",
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests",
		"1");

	//получаем формулировку данных о рейсе
	web_reg_save_param("fligting",
		"LB={departDate} : ",
		"RB=\.",
		LAST);

	//проверка открытия нужной страницы
	web_reg_find("Text=<B>Thank you for booking through Web Tours.</B>", LAST);
	//проверка корректного использования карты клиента
	web_reg_find("Text=Total Charged to Credit Card # {creditCard}", LAST);
	//проверка верно указанных городов
	web_reg_find("Text=leaves {depart_City}  for {arrive_City}", LAST);

	if (randNumber == 1)
	{
		//web_reg_find("Text=A {seat_Type} Class ticket\nfrom {depart_City} to {arrive_City}.",LAST);
		web_submit_data("reservations.pl_3",
			"Action=http://localhost:1080/cgi-bin/reservations.pl",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://localhost:1080/cgi-bin/reservations.pl",
			"Snapshot=t7.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=firstName", "Value={firstName}", ENDITEM,
			"Name=lastName", "Value={lastName}", ENDITEM,
			"Name=address1", "Value={streetUser}", ENDITEM,
			"Name=address2", "Value={cityUser}", ENDITEM,
			"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
			"Name=creditCard", "Value={creditCard}", ENDITEM,
			"Name=expDate", "Value={expCreditCard}", ENDITEM,
			"Name=oldCCOption", "Value=", ENDITEM,
			"Name=numPassengers", "Value={numPassengerRand}", ENDITEM,
			"Name=seatType", "Value={seat_Type}", ENDITEM,
			"Name=seatPref", "Value={seat_Pref}", ENDITEM,
			"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
			"Name=advanceDiscount", "Value=0", ENDITEM,
			"Name=returnFlight", "Value=", ENDITEM,
			"Name=JSFormSubmit", "Value=off", ENDITEM,
			"Name=buyFlights.x", "Value=64", ENDITEM,
			"Name=buyFlights.y", "Value=9", ENDITEM,
			"Name=.cgifields", "Value=saveCC", ENDITEM,
			LAST);
	}
	else if (randNumber == 2)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>", LAST);
		web_submit_data("reservations.pl_4",
			"Action=http://localhost:1080/cgi-bin/reservations.pl",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://localhost:1080/cgi-bin/reservations.pl",
			"Snapshot=t8.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=firstName", "Value={firstName}", ENDITEM,
			"Name=lastName", "Value={lastName}", ENDITEM,
			"Name=address1", "Value={streetUser}", ENDITEM,
			"Name=address2", "Value={cityUser}", ENDITEM,
			"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
			"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=creditCard", "Value={creditCard}", ENDITEM,
			"Name=expDate", "Value={expCreditCard}", ENDITEM,
			"Name=oldCCOption", "Value=", ENDITEM,
			"Name=numPassengers", "Value={numPassengerRand}", ENDITEM,
			"Name=seatType", "Value={seat_Type}", ENDITEM,
			"Name=seatPref", "Value={seat_Pref}", ENDITEM,
			"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
			"Name=advanceDiscount", "Value=0", ENDITEM,
			"Name=returnFlight", "Value=", ENDITEM,
			"Name=JSFormSubmit", "Value=off", ENDITEM,
			"Name=buyFlights.x", "Value=64", ENDITEM,
			"Name=buyFlights.y", "Value=9", ENDITEM,
			"Name=.cgifields", "Value=saveCC", ENDITEM,
			LAST);
	}
	else if (randNumber == 3)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>", LAST);
		web_submit_data("reservations.pl_5",
			"Action=http://localhost:1080/cgi-bin/reservations.pl",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://localhost:1080/cgi-bin/reservations.pl",
			"Snapshot=t9.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=firstName", "Value={firstName}", ENDITEM,
			"Name=lastName", "Value={lastName}", ENDITEM,
			"Name=address1", "Value={streetUser}", ENDITEM,
			"Name=address2", "Value={cityUser}", ENDITEM,
			"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
			"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=pass3", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=creditCard", "Value={creditCard}", ENDITEM,
			"Name=expDate", "Value={expCreditCard}", ENDITEM,
			"Name=oldCCOption", "Value=", ENDITEM,
			"Name=numPassengers", "Value={numPassengerRand}", ENDITEM,
			"Name=seatType", "Value={seat_Type}", ENDITEM,
			"Name=seatPref", "Value={seat_Pref}", ENDITEM,
			"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
			"Name=advanceDiscount", "Value=0", ENDITEM,
			"Name=returnFlight", "Value=", ENDITEM,
			"Name=JSFormSubmit", "Value=off", ENDITEM,
			"Name=buyFlights.x", "Value=64", ENDITEM,
			"Name=buyFlights.y", "Value=9", ENDITEM,
			"Name=.cgifields", "Value=saveCC", ENDITEM,
			LAST);
	}
	else if (randNumber == 4)
	{
		web_reg_find("Text=<b><u>{numPassengerRand} {seat_Type} Class tickets from {depart_City} to {arrive_City}.</u></b>", LAST);
		web_submit_data("reservations.pl_5",
			"Action=http://localhost:1080/cgi-bin/reservations.pl",
			"Method=POST",
			"TargetFrame=",
			"RecContentType=text/html",
			"Referer=http://localhost:1080/cgi-bin/reservations.pl",
			"Snapshot=t10.inf",
			"Mode=HTML",
			ITEMDATA,
			"Name=firstName", "Value={firstName}", ENDITEM,
			"Name=lastName", "Value={lastName}", ENDITEM,
			"Name=address1", "Value={streetUser}", ENDITEM,
			"Name=address2", "Value={cityUser}", ENDITEM,
			"Name=pass1", "Value={firstName} {lastName}", ENDITEM,
			"Name=pass2", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=pass3", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=pass4", "Value={randFirstName} {randLastName}", ENDITEM,
			"Name=creditCard", "Value={creditCard}", ENDITEM,
			"Name=expDate", "Value={expCreditCard}", ENDITEM,
			"Name=oldCCOption", "Value=", ENDITEM,
			"Name=numPassengers", "Value={numPassengerRand}", ENDITEM,
			"Name=seatType", "Value={seat_Type}", ENDITEM,
			"Name=seatPref", "Value={seat_Pref}", ENDITEM,
			"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
			"Name=advanceDiscount", "Value=0", ENDITEM,
			"Name=returnFlight", "Value=", ENDITEM,
			"Name=JSFormSubmit", "Value=off", ENDITEM,
			"Name=buyFlights.x", "Value=64", ENDITEM,
			"Name=buyFlights.y", "Value=9", ENDITEM,
			"Name=.cgifields", "Value=saveCC", ENDITEM,
			LAST);
	}

	lr_end_transaction("PayTicket", LR_AUTO);

	lr_think_time(5);
	
	
	
		
	allViewTicket();

	
	lr_end_transaction("UC1_ReservAdd", LR_AUTO);

	return 0;
}