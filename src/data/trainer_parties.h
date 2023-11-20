static const struct TrainerMon sParty_Sawyer1[] = {
    {
	.iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12), // if line is missing defaults to 0x6 (which is normal)
    .lvl = 21,
    .species = SPECIES_GEODUDE,
	.heldItem = ITEM_CHESTO_BERRY, //line can be missing for no item
    .moves = {MOVE_TACKLE, MOVE_NONE, MOVE_NONE, MOVE_NONE} // not needed if you want species default moves
    }
};

static const struct TrainerMon sParty_Red[] = {
    {
    .lvl = 5,
    .species = SPECIES_CHARMANDER,
    }
};

static const struct TrainerMon sParty_Leaf[] = {
    {
    .lvl = 5,
    .species = SPECIES_BULBASAUR,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};
