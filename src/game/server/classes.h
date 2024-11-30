#ifndef GAME_SERVER_CLASSES_H
#define GAME_SERVER_CLASSES_H

enum
{
	PLAYERCLASS_NONE = 0,

	START_HUMANCLASS,
	PLAYERCLASS_MERCENARY,
	PLAYERCLASS_MEDIC,
	PLAYERCLASS_HERO,
	PLAYERCLASS_ENGINEER,
	PLAYERCLASS_SOLDIER,
	PLAYERCLASS_NINJA,
	PLAYERCLASS_SNIPER,
	PLAYERCLASS_SCIENTIST,
	PLAYERCLASS_BIOLOGIST,
	PLAYERCLASS_LOOPER,
	PLAYERCLASS_SIEGRID,
	PLAYERCLASS_CATAPULT,
	PLAYERCLASS_REVIVER,
	END_HUMANCLASS,

	START_INFECTEDCLASS,
	PLAYERCLASS_SMOKER,
	PLAYERCLASS_BOOMER,
	PLAYERCLASS_HUNTER,
	PLAYERCLASS_BAT,
	PLAYERCLASS_GHOST,
	PLAYERCLASS_SPIDER,
	PLAYERCLASS_GHOUL,
	PLAYERCLASS_SLUG,
	PLAYERCLASS_VOODOO,
	PLAYERCLASS_WITCH,
	PLAYERCLASS_UNDEAD,
	PLAYERCLASS_SLIME,
	PLAYERCLASS_FREEZER,
	END_INFECTEDCLASS,

	NB_PLAYERCLASS,
	NB_HUMANCLASS = END_HUMANCLASS - START_HUMANCLASS - 1,
	NB_INFECTEDCLASS = END_INFECTEDCLASS - START_INFECTEDCLASS - 1,
};

#endif
