ProfessorsLab1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ProfessorsLab1_MapScripts_SCRIPT_ON_FRAME_TABLE
	.byte 0

ProfessorsLab1_MapScripts_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_FRESHTOWN_INTRO_STATE, 1, ProfessorsLab1_EventScript_Intro
	.2byte 0
	
ProfessorsLab1_EventScript_Intro::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	setvar VAR_FRESHTOWN_INTRO_STATE, 2
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
	
	msgbox ProfessorsLab1_Prof_Lab_Intro_3, MSGBOX_DEFAULT
	release
	end	
	
ProfessorsLab1_Prof_Lab_Intro_1:
	.string "Test$"
	
ProfessorsLab1_Prof_Lab_Intro_2:
	.string "Oh by the way would you like to give\n"
	.string "a nickname to your new partner?$"
	
ProfessorsLab1_Prof_Lab_Intro_3:
	.string "Sorry for making you come find me\n"
	.string "in the cave to get your first POKéMON.\p"
	.string "By the way I think your mother has\n"
	.string "Something for you as well. You should\p"
	.string "Go see her before exploring outside\n"
	.string "town on your own for the first time.$"

ProfessorsLab1_NicknameStarter:
	setvar VAR_0x8004, 0 //?
	call Common_EventScript_NameReceivedPartyMon
	goto ProfessorsLab1_EventScript_Intro2
	end
	
	
Movement_Player_Faces_Up:
	face_up
	step_end