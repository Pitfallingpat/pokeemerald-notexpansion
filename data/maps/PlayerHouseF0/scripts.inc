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
	.string "Good morning.$"

PlayerHouseF0_Mom_Dia_2:
	.string "You look tired. How about a quick rest?$"
	
PlayerHouseF0_Mom_Dia_3:
	.string "Don't forget to stop by home every now.\n"
	.string "and again.$"

PlayerHouseF0_Moms_Gift_Dia:
	.string "So that is your first POKéMON!\n"
	.string "It's so cute!\p"
	.string "I also have a gift for you!$"
	
PlayerHouseF0_Moms_Gift_Dia_2:
	.string "You use POKEBALLs to capture POKéMON.\n"
	.string "I hope have many happy POKéMON next\l"
	.string "time I see you!$"