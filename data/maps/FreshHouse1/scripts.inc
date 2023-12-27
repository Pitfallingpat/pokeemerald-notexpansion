FreshHouse1_MapScripts::
	.byte 0

FreshHouse1_Mother_Of_Azurill_Girl::
	lock
	faceplayer
	msgbox FreshHouse1_Mother_Of_Azurill_Girl_Text, MSGBOX_DEFAULT
	release
end

FreshHouse1_Mother_Of_Azurill_Girl_Text:
	.string "My husband and I got our daughter\n"
	.string "a cute AZURILL from the town's pond.\p"
	.string "Before we found it, I saw a beige fish\n"
	.string "for a brief moment before it\l"
	.string "disappeared deep into the water.\p"
	.string "I haven't seen it since then...\l"
	.string "Hmm...\p"
	.string "Maybe if my husband and I save up some\n"
	.string "money for a SUPER ROD...$"


FreshHouse1_Checkpoint_Girl::
	lock
	faceplayer
	msgbox FreshHouse1_Checkpoint_Girl_Dia, MSGBOX_DEFAULT
	release
end

FreshHouse1_Checkpoint_Girl_Dia:
	.string "Hi {PLAYER}!\n"
	.string "I'm playing with AZURILL!$"
	
FreshHouse1_EventScript_Hallway_Door_Sign::
	msgbox FreshHouse1_Sign_Hallway_Door_Text, MSGBOX_SIGN
	end
	
FreshHouse1_Sign_Hallway_Door_Text:
	.string "This door leads to the hallway.\p"
	.string "Best to avoid wandering into places\n"
	.string "you have no permission being in.$"
