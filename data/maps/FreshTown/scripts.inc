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
	.string "Hmm, where should I go today?$"
	end

FreshTown_Prof_Cave_Text_2:
	.string "Oh! {PLAYER}!\n"
	.string	"What can I help you with today?$"
	end

FreshTown_Prof_Cave_Text_3:
	.string "Oh! Right! Today is the day I was\n"
	.string	"Going to give you your first POKéMON.$"
	end
	
FreshTown_Prof_Cave_Text_4:
	.string "I happen to have them on me now.\n"
	.string	"How about a POKéMON battle to start\p"
	.string "your adventure? There are plenty of \n"
	.string "Zubat in this cave, one should be \p"
	.string "a good first opponent.$"
	end

FreshTown_Prof_Cave_Text_5:
	.string "That was a good battle! I'd like to\n"
	.string	"talk with you more about POKéMON,\p"
	.string "but the Zubat will be distracting.\n"
	.string "We should go back to my lab first.$"
	end


FreshTown_EventScript_Checkpoint_Girl::
	lock
	faceplayer
	msgbox FreshTown_Checkpoint_Girl_Text, MSGBOX_DEFAULT
	release
	end

FreshTown_Checkpoint_Girl_Text:
	.string "It's dangerous to go outside of town\n"
	.string "without a POKéMON of your own.\p"
	.string "I heard you are getting a POKéMON of\n"
	.string "your own today! How exciting!$"

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
	.string "decomp teams and the RHH we are\p"
	.string "able to experience living with\n"
	.string "so many unique POKéMON.$"

FreshTown_EventScript_Professors_Lab_Sign::
	msgbox FreshTown_Sign_Professors_Sign_Text, MSGBOX_SIGN
	end

FreshTown_Sign_Professors_Sign_Text:
	.string "PROF.CONIFER's LAB.$"
	
	
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