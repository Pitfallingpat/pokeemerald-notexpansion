ProfessorsLab1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ProfessorsLab1_MapScripts_SCRIPT_ON_FRAME_TABLE
	.byte 0

ProfessorsLab1_MapScripts_SCRIPT_ON_FRAME_TABLE:
	map_script_2 FLAG_ADVENTURE_STARTED, 0, ProfessorsLab1_EventScript_Intro
	.2byte 0
	
ProfessorsLab1_EventScript_Intro::
	lock
	//bufferleadmonspeciesname STR_VAR_1
	msgbox ProfessorsLab1_Prof_Lab_Intro_1, MSGBOX_DEFAULT
	
	msgbox ProfessorsLab1_Prof_Lab_Intro_2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ProfessorsLab1_NicknameStarter
	goto_if_eq VAR_RESULT, NO, ProfessorsLab1_EventScript_Intro2
	end
	
ProfessorsLab1_EventScript_Intro2::
	
	setflag FLAG_MOMS_GIFT
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setflag FLAG_ADVENTURE_STARTED
	release
	end	
	
ProfessorsLab1_Prof_Lab_Intro_1:
	.string "Test$"
	
ProfessorsLab1_Prof_Lab_Intro_2:
	.string "Oh by the way would you like to give\n"
	.string "a nickname to your new partner?$"

ProfessorsLab1_NicknameStarter:
	setvar VAR_0x8004, 0 //?
	call Common_EventScript_NameReceivedPartyMon
	goto ProfessorsLab1_EventScript_Intro2
	end