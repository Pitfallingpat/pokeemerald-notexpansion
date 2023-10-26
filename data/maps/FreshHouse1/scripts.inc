FreshHouse1_MapScripts::
	.byte 0

FreshHouse1_Mom::
	lock
	faceplayer
	msgbox FreshHouse1_Mom_Dia, MSGBOX_DEFAULT
	release
end

FreshHouse1_Mom_Dia:
	.string "Placeholder$"


FreshHouse1_Checkpoint_Girl::
	lock
	faceplayer
	msgbox FreshHouse1_Checkpoint_Girl_Dia, MSGBOX_DEFAULT
	release
end

FreshHouse1_Checkpoint_Girl_Dia:
	.string "Placeholder2$"
