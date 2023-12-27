PlayerHouseF0_MapScripts::
	.byte 0

PlayerHouseF0_Mom::
	lock
	faceplayer
	goto_if_set FLAG_MOMS_GIFT, PlayerHouseF0_Moms_Gift 
	goto_if_set FLAG_SYS_POKEMON_GET, PlayerHouseF0_Mom_Heal
	msgbox PlayerHouseF0_Mom_Dia_1, MSGBOX_DEFAULT
	release
end

PlayerHouseF0_Mom_Heal::
	lock
	msgbox PlayerHouseF0_Mom_Dia_2, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	setrespawn HEAL_LOCATION_FRESH_TOWN
	msgbox PlayerHouseF0_Mom_Dia_3, MSGBOX_DEFAULT
	release
end

PlayerHouseF0_Moms_Gift::
	
	msgbox PlayerHouseF0_Moms_Gift_Dia, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 10
	msgbox PlayerHouseF0_Moms_Gift_Dia_2, MSGBOX_DEFAULT
	clearflag FLAG_MOMS_GIFT
	release
end

PlayerHouseF0_Mom_Dia_1:
	.string "Good morning {PLAYER}!\p"
	.string "Today's the day you'll start being a\n"
	.string "POKéMON TRAINER!\p"
	.string "PROF. CONIFER should be ready in the\n"
	.string "LAB to give you your first POKéMON.$"

PlayerHouseF0_Mom_Dia_2:
	.string "You look tired. How about a quick rest?$"
	
PlayerHouseF0_Mom_Dia_3:
	.string "Did you get enough sleep?\l"
	.string "Oh and your POKéMON are raring to go!\p"
	.string "If you're ever in the neighborhood\n"
	.string "again, then please don't hesitate\l"
	.string "stopping by for a visit!$"

PlayerHouseF0_Moms_Gift_Dia:
	.string "So that's your first POKéMON!\n"
	.string "It's so cute!\p"
	.string "I also have a gift for you!$"
	
PlayerHouseF0_Moms_Gift_Dia_2:
	.string "Remember to weaken the POKéMON first,\n"
	.string "then use POKEBALLs to catch them.\p"
	.string "I know you already learned this in\n"
	.string "school, but it doesn't hurt to hear\l"
	.string "it again.\p"
	.string "Anyways, remember to be careful\n"
	.string "and come home every now and then!\p"
	.string "Bye and good luck honey!$"