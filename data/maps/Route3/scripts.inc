Route3_MapScripts::
	.byte 0

Route3_EventScript_Trainer_Eyes_Girl::
	lock
	faceplayer
	msgbox Route3_Trainer_Eyes_Girl_Text, MSGBOX_DEFAULT
	release
	end

Route3_Trainer_Eyes_Girl_Text:
	.string "Oh hello! I'm not a trainer but\n"
	.string "I do have some advice for you.\p"
	.string "When two trainers' eyes meet,\n"
	.string "they have to battle.\p"
	.string "That's a rule most trainers in\n"
	.string "DIVORO abide by.\p"
	.string "If you want to avoid the trainers here,\n"
	.string "then try walking into the tall grass.$"
	
	
	
	
	
	
	
	
	
	
	

	
	
	
Route3_EventScript_Joshua::
	trainerbattle_single TRAINER_JOSHUA, Route3_Text_JosuhaIntro, Route3_Text_JoshuaDefeated
	msgbox Route3_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
	end
	
Route3_EventScript_Jake::
	trainerbattle_single TRAINER_JAKE, Route3_Text_JakeIntro, Route3_Text_JakeDefeated
	msgbox Route3_Text_JakePostBattle, MSGBOX_AUTOCLOSE
	end
	
Route3_EventScript_Jenny::
	trainerbattle_single TRAINER_JENNY, Route3_Text_JennyIntro, Route3_Text_JennyDefeated
	msgbox Route3_Text_JennyPostBattle, MSGBOX_AUTOCLOSE
	end