HistorTown_MapScripts::
	.byte 0

HistorTown_EventScript_HistorTown_sign::
	msgbox HistorTown_Sign_HistorTown_Sign_Text, MSGBOX_SIGN
	end

HistorTown_Sign_HistorTown_Sign_Text:
	.string "HISTOR TOWN\p"
	.string "Where history is made and\n"
	.string "remembered.$"
	
HistorTown_EventScript_HistorSchool_sign::
	msgbox HistorTown_Sign_HistorSchool_Sign_Text, MSGBOX_SIGN
	end

HistorTown_Sign_HistorSchool_Sign_Text:
	.string "HISTOR'S POKéMON TRAINER &\n"
	.string "ELEMENTARY SCHOOL\p"
	.string "Teaching students everything about\n"
	.string "POKéMON and Divoro's history.$"