.set LOCALID_CHECKPOINTGIRL, 2
.set LOCALID_CHECKPOINTPKM, 3
.set LOCALID_CAVEPROF, 4

FreshTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FreshTown_OnTransition
	.byte 0

FreshTown_OnTransition:
	//
	end
	
FreshTown_EventScript_Professor_Cave::
	lock
	msgbox FreshTown_Prof_Cave_Text_1, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_CAVEPROF, Movement_Exclamation
	waitmovement LOCALID_CAVEPROF
	faceplayer
	msgbox FreshTown_Prof_Cave_Text_2, MSGBOX_DEFAULT
	msgbox FreshTown_Prof_Cave_Text_3, MSGBOX_DEFAULT
	msgbox FreshTown_Prof_Cave_Text_4, MSGBOX_DEFAULT
	waitmessage
	special ChooseStarter
	waitstate
	delay 40
	setflag FLAG_SYS_POKEMON_GET
	clearflag FLAG_HIDE_FRESHTOWN
	special HealPlayerParty
	msgbox FreshTown_Prof_Cave_Text_5, MSGBOX_DEFAULT
	
	warp MAP_PROFESSORS_LAB1, 8, 6
	release
	end


//Dialogue

FreshTown_Prof_Cave_Text_1:
	.string "Hmm...\n"
	.string "I feel like I'm forgetting something...$"
	end

FreshTown_Prof_Cave_Text_2:
	.string "Oh! {PLAYER}!\n"
	.string	"What can I help you with today?$"
	end

FreshTown_Prof_Cave_Text_3:
	.string "Oh! That's right!\p"
	.string	"Today is the day I was going to give\n"
	.string	"you your first POKéMON!$"
	end
	
FreshTown_Prof_Cave_Text_4:
	.string "I just so happen to have them with me.\p"
	.string	"How about battling a wild POKéMON\n"
	.string "before departing on your adventure?\p"
	.string "There are plenty of ZUBAT in here,\n"
	.string "so one should be easy to defeat.$"
	end

FreshTown_Prof_Cave_Text_5:
	.string "That was a good battle!\p"
	.string	"Let's head on back to my LAB before\n"
	.string "the ZUBAT start getting restless.$"
	end


FreshTown_EventScript_Checkpoint_Girl::
	lock
	faceplayer
	msgbox FreshTown_Checkpoint_Girl_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Checkpoint_Girl_Text:
	.string "It's scary to leave town without\n"
	.string "a POKéMON of your own.\p"
	.string "My mommy said it's your turn to get\n"
	.string "one today! So cool!$"
	
FreshTown_EventScript_Rock_Boy::
	lock
	faceplayer
	msgbox FreshTown_Rock_Boy_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Rock_Boy_Text:
	.string "Have you heard of a POKéMON called\n"
	.string "GEODUDE?\p"
	.string "PROF. CONIFER recently discovered a\n"
	.string "BUG POKéMON that looks like it!$"
	
FreshTown_EventScript_Checkpoint_Azuril::
	lock
	faceplayer
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FreshTown_Checkpoint_Azuril_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Checkpoint_Azuril_Text:
	.string "Azu!$"


FreshTown_EventScript_Power_Of_Science_Man::
	lock
	faceplayer
	msgbox FreshTown_Power_Of_Science_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Power_Of_Science_Text:
	.string "The power of science is staggering!\p"
	.string "Thanks to the hard work of the\n"
	.string "decomp teams and the RHH we are\l"
	.string "able to experience living with\l"
	.string "so many unique POKéMON.$"
	
FreshTown_EventScript_Old_Expert_Woman::
	lock
	faceplayer
	msgbox FreshTown_Old_Expert_Woman_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Old_Expert_Woman_Text:
	.string "When I was young, I traveled to\n"
	.string "many different regions!\p"
	.string "I met all kinds of people and POKéMON,\n"
	.string "until I settled down and had a family.\p"
	.string "Fufufu, {PLAYER}...\p"
	.string "I can see that spark in your eyes,\n"
	.string "it's the same spark I had back then!$"
	
FreshTown_EventScript_Father_Of_Azurill_Girl::
	lock
	faceplayer
	msgbox FreshTown_Father_Of_Azurill_Girl_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Father_Of_Azurill_Girl_Text:
	.string "Placeholder\n"
	.string "Placeholder!\p"
	.string "Placeholder\n"
	.string "Placeholder.\p"
	.string "Placeholder\n"
	.string "Placeholder!$"

FreshTown_EventScript_Professors_Lab_Sign::
	msgbox FreshTown_Sign_Professors_Sign_Text, MSGBOX_SIGN
	end

FreshTown_Sign_Professors_Sign_Text:
	.string "PROF. CONIFER's LAB.$"
	
	
FreshTown_EventScript_Fresh_Cave_sign::
	msgbox FreshTown_Sign_Fresh_Cave_Sign_Text, MSGBOX_SIGN
	end

FreshTown_Sign_Fresh_Cave_Sign_Text:
	.string "Fresh Town Cave\n"
	.string "Beware of wild POKéMON.$"


FreshTown_EventScript_Freshtown_Sign::
	msgbox FreshTown_Sign_Freshtown_Text, MSGBOX_SIGN
	end

FreshTown_Sign_Freshtown_Text:
	.string "FRESH TOWN\p"
	.string "Where new beginnings\n"
	.string "are always beginning.$"

Movement_Exclamation:
	emote_exclamation_mark
	delay_16
	step_end