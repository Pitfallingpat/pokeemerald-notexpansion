.set LOCALID_NURSE, 2

HistorTown_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Histor_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Histor_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_HISTOR_TOWN
	end

Histor_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

HistorTown_PokemonCenter_GBA_Boy::
	lock
	faceplayer
	msgbox HistorTown_PokemonCenter_GBA_Boy_Dia, MSGBOX_DEFAULT
	release
end

HistorTown_PokemonCenter_GBA_Boy_Dia:
	.string "Placeholder$"


HistorTown_PokemonCenter_Cool_Boy::
	lock
	faceplayer
	msgbox HistorTown_PokemonCenter_GBA_Boy_Dia, MSGBOX_DEFAULT
	release
end

HistorTown_PokemonCenter_Cool_Boy_Dia:
	.string "Placeholder2$"

