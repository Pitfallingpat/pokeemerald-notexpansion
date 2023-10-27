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
	msgbox PlayerHouseF0_Mom_Dia_2, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	incrementgamestat GAME_STAT_RESTED_AT_HOME
	setrespawn HEAL_LOCATION_FRESH_TOWN
	msgbox PlayerHouseF0_Mom_Dia_3, MSGBOX_DEFAULT
end

PlayerHouseF0_Moms_Gift::
	
	msgbox PlayerHouseF0_Moms_Gift_Dia, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 10
	msgbox PlayerHouseF0_Moms_Gift_Dia_2, MSGBOX_DEFAULT
	clearflag FLAG_MOMS_GIFT
	release
end

PlayerHouseF0_Mom_Dia_1:
	.string "Placeholder4$"

PlayerHouseF0_Mom_Dia_2:
	.string "Placeholder4$"
	
PlayerHouseF0_Mom_Dia_3:
	.string "Placeholder4$"

PlayerHouseF0_Moms_Gift_Dia:
	.string "PlaceholderGift$"
	
PlayerHouseF0_Moms_Gift_Dia_2:
	.string "PlaceholderGift$"