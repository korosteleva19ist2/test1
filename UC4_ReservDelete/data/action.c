Action()
{

	lr_start_transaction("StartWebTours");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("ReservViewDelete");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,jflookgnkcckhobaglndicnbbgbonegd,ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,eeigpngbgcognadeebkilcpcaedhellh,khaoiebndkojlmppeemjhbpbandiljpe,hfnkpimlhhgieaddgfemjhofmfblmnib,llkgjffcdpffmhiakmfcdcblohccpfmo,laoigpblnllgcgjnjnllmfolckpjlhki,"
		"obedbbhbpmojnkanicioggnmelmoomoc,hnimpnehoodheedghdeeijklkeaacbdc,ehgidpndbllacpjalkiimkbadgjfnnmc,oimompecagnajdejgnnjijobebaeigek,efniojlnjndmcbiieegkicadnoecjjef,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-118.0.5993.120");

	lr_think_time(4);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:tx4rvvLaxLxZb7WsZBA5pTCxEXRXuOkLzGV3mxetCD8&cup2hreq=59b4e27552749f071d1ebd5e8994fbbbebf1cd0200fa905291f86627606a013b", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{f12e95c4-e4fe-46ef-8e3d-23ae10c44c81}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.3.36.141"
		"\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{103c25ff-10d5-4515-93fe-c387cd48889d}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.70038c5037d100135595e4ab2ff64caeb8844cdd03e6408289563fc67f952066\"}]},\"ping\":{\"ping_freshness\":\"{7075da3c-c0f8-4596-84c2-83dbcc12f90f}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"419\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto"
		"\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{3503528d-ddfa-4e4e-8946-eb4cf4e5adbb}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\""
		"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{886ead2b-f1ca-49bd-8e62-2c9b71c579c3}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{9c6d2984-0e0c-4894-a51f-4dab1d20b631}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.e02aeb7034fefaea35a0be29445a820068710a13880e66c1ba482cac43e8d16a\"}]},\"ping\":{\"ping_freshness\":\"{fc70c470-2068-4c7b-af09-89faf20d917e}\",\"rd\":6150},\"updatecheck\":{},\""
		"version\":\"3001\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:2133@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.b6be680b524ea584c927bafd387e50e0ccbfdcbbbda89fb1e2386f02b9e0d01e\"}]},\"ping\":{\"ping_freshness\":\"{eb5d168a-c57f-4333-9ae8-a6f8786d03ef}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.10.13.1141\"},{\"appid\":\""
		"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:209r@0.1\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a451a5689ab6b8e94d4392b9908239cafb9736f64539ed9d0574790665a4f2a3\"}]},\"ping\":{\"ping_freshness\":\"{c56a8820-4f13-482d-ab60-5f91cc950ae9}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"120.0.6046.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{d681280f-dbba-4fa4-95ca-107347487e49}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\""
		"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{b0e310f3-f34d-4fe0-9a82-eae249f35923}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.a2abb5cf57d3ad529ade67df01567446c6c6a5225b29715119e17c0e0aea6c03\"}]},\"ping\":{\"ping_freshness\":\"{8f200168-778f-4ae4-a351-ff9ec081b7ca}\",\"rd\":6150},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"62\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.0924394cfd2b5feb79a81f49972a0926fee66a20831401e0b7a4a84a80c799fd\"}]},\"ping"
		"\":{\"ping_freshness\":\"{e5260247-ca9e-4bc2-a272-d0db6190f3c7}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"8338\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\"{bd8f7e6e-8296-44d0-b9dc-8ea6fba83963}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\""
		"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{95ccf28a-0194-4f38-b29b-e9177eaebdbc}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"accept_locale\":\"RU500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\""
		"ru\",\"packages\":{\"package\":[{\"fp\":\"1.3a345dbd2774298fd2aecaacfa6d0e55f9bfe8cf378aad2f41a85a001592b789\"}]},\"ping\":{\"ping_freshness\":\"{c925b831-4054-4f49-aa16-935b76326922}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"20230916.566281051.14\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\""
		"ping_freshness\":\"{5c8e9f9e-8986-48db-892d-5eedd318bd5a}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{b00e6141-bc3d-47ca-a1fb-7674c0bb11ca}\",\"rd\":6150},\""
		"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"ru\",\"ping\":{\"ping_freshness\":\"{22ea01e8-ac42-4f68-87ef-6bdd70371263}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\""
		"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.87623110cd546130368ec1581c27856b3c11acd9b8986bea3d7c5c09c71fbad2\"}]},\"ping\":{\"ping_freshness\":\"{a624c528-657b-448a-83ce-d3196d92a0ca}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"755\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:21wr@0.025\",\"cohorthint\":\"General release\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"ru\",\"packages\":{"
		"\"package\":[{\"fp\":\"1.d68a1e6d53e787feb3bcab12c5e7e76ade2594add8c77084503cd288e460a838\"}]},\"ping\":{\"ping_freshness\":\"{7a90df21-b28e-4104-aba4-0aa075db582a}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.10.12.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6133,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.b207f670ca3a12250b58363022f90e987303e0de5e6df2e8af3fb87f8cb6b73b\"}]},\"ping\":{\"ping_freshness\":\"{a7c9b2cf-6db6-4bbc-8777-f08f3342ebba}\",\"rd\":6150},\"updatecheck\":{},\"version\":\"2023.11.2.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\""
		"10.0.19045.3570\"},\"prodversion\":\"118.0.5993.120\",\"protocol\":\"3.1\",\"requestid\":\"{60f89b3a-4ac2-46f8-810b-af67f4880999}\",\"sessionid\":\"{986733db-fe75-423b-a6d2-d0942f59eadb}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.312\"},\"updaterversion\":\"118.0.5993.120\"}}", 
		LAST);

	lr_end_transaction("StartWebTours",LR_AUTO);

	lr_start_transaction("LogIn");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"118\", \"Google Chrome\";v=\"118\", \"Not=A?Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(17);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=137628.968327258HAHQcQApAfiDDDDDtctHfpHtADf", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=27", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("LogIn",LR_AUTO);

	lr_start_transaction("ViewTicket");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(15);

	web_url("Itinerary Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("ViewTicket",LR_AUTO);

	lr_start_transaction("DeleteTicket");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(94);

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=7493-843-JB", ENDITEM, 
		"Name=flightID", "Value=4563-1555-JB", ENDITEM, 
		"Name=flightID", "Value=0-23-JB", ENDITEM, 
		"Name=flightID", "Value=0-3105-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-3873-JB", ENDITEM, 
		"Name=flightID", "Value=41157535-4650-AK", ENDITEM, 
		"Name=flightID", "Value=41153751-5406-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-6180-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-6950-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-7719-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-8488-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-9257-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-10026-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-10796-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-11565-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-12334-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-13103-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-13873-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-14642-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-15411-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-16180-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-16950-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-17719-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-18488-{B", ENDITEM, 
		"Name=flightID", "Value=86038531-19257-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-20026-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-20796-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-21565-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-22334-JB", ENDITEM, 
		"Name=flightID", "Value=86038531-23103-JB", ENDITEM, 
		"Name=flightID", "Value=0-23873-JB", ENDITEM, 
		"Name=flightID", "Value=41154125-24644-JB", ENDITEM, 
		"Name=flightID", "Value=41154125-25414-JB", ENDITEM, 
		"Name=flightID", "Value=0-26180-JB", ENDITEM, 
		"Name=flightID", "Value=0-26950-JB", ENDITEM, 
		"Name=flightID", "Value=0-276-JB", ENDITEM, 
		"Name=flightID", "Value=0-28488-JB", ENDITEM, 
		"Name=flightID", "Value=0-29257-JB", ENDITEM, 
		"Name=flightID", "Value=0-30026-JB", ENDITEM, 
		"Name=flightID", "Value=0-30796-JB", ENDITEM, 
		"Name=flightID", "Value=0-31565-JB", ENDITEM, 
		"Name=flightID", "Value=0-32334-JB", ENDITEM, 
		"Name=flightID", "Value=0-33103-JB", ENDITEM, 
		"Name=flightID", "Value=0-33873-JB", ENDITEM, 
		"Name=flightID", "Value=0-34642-JB", ENDITEM, 
		"Name=flightID", "Value=0-35411-JB", ENDITEM, 
		"Name=flightID", "Value=0-36180-JB", ENDITEM, 
		"Name=flightID", "Value=0-36950-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-37719-JB", ENDITEM, 
		"Name=flightID", "Value=242783345-38486-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-39257-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-40026-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-40796-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-41565-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-42334-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-43103-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-43873-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-44642-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-45411-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-46180-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-46950-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-47719-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-48488-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-49257-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-50026-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-50796-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-51565-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-52334-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-53103-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-53873-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-54642-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-55411-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-56180-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-56950-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-57719-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-58488-JB", ENDITEM, 
		"Name=flightID", "Value=41149642-59257-JB", ENDITEM, 
		"Name=78", "Value=on", ENDITEM, 
		"Name=flightID", "Value=41149642-60026-PB", ENDITEM, 
		"Name=flightID", "Value=41149642-60796-JB", ENDITEM, 
		"Name=flightID", "Value=2922437457-615488-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-623180-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-630872-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-638565-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-646257-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-653949-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-661641-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-669334-JB", ENDITEM, 
		"Name=flightID", "Value=411696716-677026-JB", ENDITEM, 
		"Name=flightID", "Value=41-684-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=46", ENDITEM, 
		"Name=removeFlights.y", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=33", ENDITEM, 
		"Name=.cgifields", "Value=32", ENDITEM, 
		"Name=.cgifields", "Value=63", ENDITEM, 
		"Name=.cgifields", "Value=21", ENDITEM, 
		"Name=.cgifields", "Value=71", ENDITEM, 
		"Name=.cgifields", "Value=7", ENDITEM, 
		"Name=.cgifields", "Value=80", ENDITEM, 
		"Name=.cgifields", "Value=26", ENDITEM, 
		"Name=.cgifields", "Value=18", ENDITEM, 
		"Name=.cgifields", "Value=72", ENDITEM, 
		"Name=.cgifields", "Value=16", ENDITEM, 
		"Name=.cgifields", "Value=44", ENDITEM, 
		"Name=.cgifields", "Value=55", ENDITEM, 
		"Name=.cgifields", "Value=84", ENDITEM, 
		"Name=.cgifields", "Value=74", ENDITEM, 
		"Name=.cgifields", "Value=27", ENDITEM, 
		"Name=.cgifields", "Value=57", ENDITEM, 
		"Name=.cgifields", "Value=61", ENDITEM, 
		"Name=.cgifields", "Value=20", ENDITEM, 
		"Name=.cgifields", "Value=89", ENDITEM, 
		"Name=.cgifields", "Value=10", ENDITEM, 
		"Name=.cgifields", "Value=31", ENDITEM, 
		"Name=.cgifields", "Value=35", ENDITEM, 
		"Name=.cgifields", "Value=11", ENDITEM, 
		"Name=.cgifields", "Value=78", ENDITEM, 
		"Name=.cgifields", "Value=48", ENDITEM, 
		"Name=.cgifields", "Value=87", ENDITEM, 
		"Name=.cgifields", "Value=77", ENDITEM, 
		"Name=.cgifields", "Value=65", ENDITEM, 
		"Name=.cgifields", "Value=29", ENDITEM, 
		"Name=.cgifields", "Value=50", ENDITEM, 
		"Name=.cgifields", "Value=39", ENDITEM, 
		"Name=.cgifields", "Value=64", ENDITEM, 
		"Name=.cgifields", "Value=58", ENDITEM, 
		"Name=.cgifields", "Value=41", ENDITEM, 
		"Name=.cgifields", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=15", ENDITEM, 
		"Name=.cgifields", "Value=81", ENDITEM, 
		"Name=.cgifields", "Value=52", ENDITEM, 
		"Name=.cgifields", "Value=60", ENDITEM, 
		"Name=.cgifields", "Value=56", ENDITEM, 
		"Name=.cgifields", "Value=73", ENDITEM, 
		"Name=.cgifields", "Value=66", ENDITEM, 
		"Name=.cgifields", "Value=45", ENDITEM, 
		"Name=.cgifields", "Value=86", ENDITEM, 
		"Name=.cgifields", "Value=76", ENDITEM, 
		"Name=.cgifields", "Value=19", ENDITEM, 
		"Name=.cgifields", "Value=62", ENDITEM, 
		"Name=.cgifields", "Value=54", ENDITEM, 
		"Name=.cgifields", "Value=67", ENDITEM, 
		"Name=.cgifields", "Value=70", ENDITEM, 
		"Name=.cgifields", "Value=68", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		"Name=.cgifields", "Value=17", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=88", ENDITEM, 
		"Name=.cgifields", "Value=30", ENDITEM, 
		"Name=.cgifields", "Value=82", ENDITEM, 
		"Name=.cgifields", "Value=25", ENDITEM, 
		"Name=.cgifields", "Value=28", ENDITEM, 
		"Name=.cgifields", "Value=83", ENDITEM, 
		"Name=.cgifields", "Value=75", ENDITEM, 
		"Name=.cgifields", "Value=40", ENDITEM, 
		"Name=.cgifields", "Value=14", ENDITEM, 
		"Name=.cgifields", "Value=69", ENDITEM, 
		"Name=.cgifields", "Value=59", ENDITEM, 
		"Name=.cgifields", "Value=49", ENDITEM, 
		"Name=.cgifields", "Value=24", ENDITEM, 
		"Name=.cgifields", "Value=53", ENDITEM, 
		"Name=.cgifields", "Value=79", ENDITEM, 
		"Name=.cgifields", "Value=22", ENDITEM, 
		"Name=.cgifields", "Value=42", ENDITEM, 
		"Name=.cgifields", "Value=46", ENDITEM, 
		"Name=.cgifields", "Value=23", ENDITEM, 
		"Name=.cgifields", "Value=13", ENDITEM, 
		"Name=.cgifields", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=85", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=36", ENDITEM, 
		"Name=.cgifields", "Value=9", ENDITEM, 
		"Name=.cgifields", "Value=51", ENDITEM, 
		"Name=.cgifields", "Value=47", ENDITEM, 
		"Name=.cgifields", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=38", ENDITEM, 
		"Name=.cgifields", "Value=4", ENDITEM, 
		"Name=.cgifields", "Value=34", ENDITEM, 
		"Name=.cgifields", "Value=37", ENDITEM, 
		"Name=.cgifields", "Value=43", ENDITEM, 
		"Name=.cgifields", "Value=5", ENDITEM, 
		LAST);

	lr_end_transaction("DeleteTicket",LR_AUTO);

	lr_think_time(17);

	lr_start_transaction("LogOut");

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://pki.goog/repo/certs/gts1c3.der", "Referer=", ENDITEM, 
		"Url=http://pki.goog/repo/certs/gtsr1.der", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("LogOut",LR_AUTO);

	lr_end_transaction("ReservViewDelete",LR_AUTO);

	return 0;
}
