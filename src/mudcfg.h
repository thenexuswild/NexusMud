/****************************************************************************
 *                   ^     +----- |  / ^     ^ |     | +-\                  *
 *                  / \    |      | /  |\   /| |     | |  \                 *
 *                 /   \   +---   |<   | \ / | |     | |  |                 *
 *                /-----\  |      | \  |  v  | |     | |  /                 *
 *               /       \ |      |  \ |     | +-----+ +-/                  *
 ****************************************************************************
 * AFKMud Copyright 1997-2015 by Roger Libiez (Samson),                     *
 * Levi Beckerson (Whir), Michael Ward (Tarl), Erik Wolfe (Dwip),           *
 * Cameron Carroll (Cam), Cyberfox, Karangi, Rathian, Raine,                *
 * Xorith, and Adjani.                                                      *
 * All Rights Reserved.                                                     *
 *                                                                          *
 *                                                                          *
 * External contributions from Remcon, Quixadhal, Zarius, and many others.  *
 *                                                                          *
 * Original SMAUG 1.8b written by Thoric (Derek Snider) with Altrag,        *
 * Blodkai, Haus, Narn, Scryn, Swordbearer, Tricops, Gorog, Rennard,        *
 * Grishnakh, Fireblade, Edmond, Conran, and Nivek.                         *
 *                                                                          *
 * Original MERC 2.1 code by Hatchet, Furey, and Kahn.                      *
 *                                                                          *
 * Original DikuMUD code by: Hans Staerfeldt, Katja Nyboe, Tom Madsen,      *
 * Michael Seifert, and Sebastian Hammer.                                   *
 ****************************************************************************
 *                         MUD Specific Definitions                         *
 ****************************************************************************/

#ifndef __MUDCFG_H__
#define __MUDCFG_H__

/* These definitions can be safely changed without fear of being overwritten by future patches.
 * This does not guarantee however that compatibility will be maintained if you change
 * or remove too much of this stuff. Best to keep the names and only change the values they
 * represent if you want to spare yourself the hassle. Samson 3-14-2004
 */

/*
 * Game parameters.
 * Increase the max'es if you add more of something.
 * Adjust the pulse numbers to suit yourself.
 */
extern const char *SPELL_SILENT_MARKER;

const int MAX_LAYERS = 8;  /* maximum clothing layers */
const int MAX_NEST = 100;  /* maximum container nesting */
const int MAX_REXITS = 20; /* Maximum exits allowed in 1 room */
const int MAX_CLASS = 20;  /* Be careful with these two figures - alot depends on them being only available to PCs */
const int MAX_RACE = 23;
const int MAX_NPC_CLASS = 26;
const int MAX_NPC_RACE = 171; /* Good God almighty! If a race your looking for isn't available, you have problems!!! */
const int MAX_BEACONS = 10;
const int MAX_SAYHISTORY = 25;
const int MAX_TELLHISTORY = 25;
const int MAX_OINVOKE_QUANTITY = 20;   // Limit on how many copies of an object can be loaded by an imm at one time.
const int MAX_FIGHT = 8;
const int MAX_SKILL = 500; /* Raised during 1.4a patch */
const int MAX_HERB = 100;
const int MAX_DISEASE = 20;
const int MAX_RGRID_ROOMS = 30000;
const int MAX_MSG = 18;

extern int MAX_PC_RACE;
extern int MAX_PC_CLASS;

const int MAX_LEVEL = 115;     /* Raised from 65 by Teklord */
const int MAX_PERSONAL = 5;    /* Maximum personal skills */
const int MAX_WHERE_NAME = 35; /* See act_info.cpp for the text messages */

const int LEVEL_SUPREME = MAX_LEVEL;
const int LEVEL_ADMIN = ( MAX_LEVEL - 1 );
const int LEVEL_KL = ( MAX_LEVEL - 2 );
const int LEVEL_IMPLEMENTOR = ( MAX_LEVEL - 3 );
const int LEVEL_SUB_IMPLEM = ( MAX_LEVEL - 4 );
const int LEVEL_ASCENDANT = ( MAX_LEVEL - 5 );
const int LEVEL_GREATER = ( MAX_LEVEL - 6 );
const int LEVEL_GOD = ( MAX_LEVEL - 7 );
const int LEVEL_LESSER = ( MAX_LEVEL - 8 );
const int LEVEL_TRUEIMM = ( MAX_LEVEL - 9 );
const int LEVEL_DEMI = ( MAX_LEVEL - 10 );
const int LEVEL_SAVIOR = ( MAX_LEVEL - 11 );
const int LEVEL_CREATOR = ( MAX_LEVEL - 12 );
const int LEVEL_ACOLYTE = ( MAX_LEVEL - 13 );
const int LEVEL_IMMORTAL = ( MAX_LEVEL - 14 );
const int LEVEL_AVATAR = ( MAX_LEVEL - 15 );

const int LEVEL_LOG = LEVEL_LESSER;

#ifdef MULTIPORT
/* Port definitions for various commands - Samson 8-22-98 */
/* Now only works if Multiport support is enabled at compile time - Samson 7-12-02 */
const int CODEPORT = 9700;
const int BUILDPORT = 9600;
const int MAINPORT = 9500;
#endif

/*
 * Well known mob virtual numbers.
 * Defined in #MOBILES.
 */
/* Added animate dead mobs - Whir - 8/29/98 */
const int MOB_VNUM_WOODCALL1 = 11001;
const int MOB_VNUM_WOODCALL2 = 11002;
const int MOB_VNUM_WOODCALL3 = 11003;
const int MOB_VNUM_WOODCALL4 = 11004;
const int MOB_VNUM_WOODCALL5 = 11005;
const int MOB_VNUM_WOODCALL6 = 11006;
const int MOB_VNUM_WARMOUNTTWO = 11007;      // Antipaladin warmount - Samson 4-2-00 */
const int MOB_VNUM_WARMOUNTTHREE = 11008;    // Paladin flying warmount - Samson 4-2-00 */
const int MOB_VNUM_WARMOUNTFOUR = 11009;     // Antipaladin flying warmount - Samson 4-2-00 */
const int MOB_VNUM_GNOME_FLYER = 11010;      // Gnomish Flyer - for the Tinker skill
const int MOB_VNUM_GATE = 11029;             // Gate spell servitor daemon - Samson 3-26-98 */
const int MOB_VNUM_MAP_TRAVELER = 11030;     // Random traveler for Overland city sectors
const int MOB_VNUM_MAP_MERCHANT = 11031;     // Random merchant for Overland city sectors
const int MOB_VNUM_MAP_GYPSY = 11032;        // Random gypsy for Overland city sectors
const int MOB_VNUM_MAP_BANDIT = 11033;       // Random bandit for Overland city sectors
const int MOB_VNUM_MAP_FARMER = 11034;       // Random farmer for Overland field sectors
const int MOB_VNUM_MAP_COW = 11035;          // Random cow for Overland field sectors
const int MOB_VNUM_MAP_RABBIT = 11036;       // Random rabbit for Overland field sectors
const int MOB_VNUM_MAP_BULL = 11037;         // Random bull for Overland field sectors
const int MOB_VNUM_MAP_DEER = 11038;         // Random deer for Overland forest sectors
const int MOB_VNUM_MAP_DRYAD = 11039;        // Random dryad for Overland forest sectors
const int MOB_VNUM_MAP_TREANT = 11040;       // Random treant for Overland forest sectors
const int MOB_VNUM_MAP_WURM = 11041;         // Random wurm for Overland forest sectors
const int MOB_VNUM_MAP_DWARF = 11042;        // Random dwarf for Overland hill sectors
const int MOB_VNUM_MAP_BADGER = 11043;       // Random rock badger for Overland hill sectors
const int MOB_VNUM_MAP_CROW = 11044;         // Random crow for Overland hill sectors
const int MOB_VNUM_MAP_DRAGON = 11045;       // Random dragon for Overland hill sectors
const int MOB_VNUM_MAP_GOAT = 11046;         // Random goat for Overland mountain sectors
const int MOB_VNUM_MAP_HOUND = 11047;        // Random wild hound for Overland mountain sectors
const int MOB_VNUM_MAP_FIRBOLG = 11048;      // Random firbolg for Overland mountain sectors
const int MOB_VNUM_MAP_BEETLE = 11049;       // Random scarab beetle for Overland desert sectors
const int MOB_VNUM_MAP_NOMAD = 11050;        // Random nomad for Overland desert sectors
const int MOB_VNUM_MAP_ELEMENTAL = 11051;    // Random sand elemental for Overland desert sectors
const int MOB_VNUM_MAP_STIRGE = 11052;       // Random stirge for Overland swamp sectors
const int MOB_VNUM_MAP_GOBLIN = 11053;       // Random goblin for Overland swamp sectors
const int MOB_VNUM_MAP_ORANGUTAN = 11054;    // Random orangutan for Overland jungle sectors
const int MOB_VNUM_MAP_PYTHON = 11055;       // Random python for Overland jungle sectors
const int MOB_VNUM_MAP_LIZARD = 11056;       // Random monitor lizard for Overland jungle sectors
const int MOB_VNUM_MAP_PANTHER = 11057;      // Random panther for Overland jungle sectors
const int MOB_VNUM_MAP_CRAB = 11058;         // Random crab for Overland shore sectors
const int MOB_VNUM_MAP_SEAGULL = 11059;      // Random seagull for Overland shore sectors
const int MOB_VNUM_MAP_HYENA = 11060;        // Random hyena for Overland scrub sectors
const int MOB_VNUM_MAP_MEERKAT = 11061;      // Random meerkat for Overland scrub sectors
const int MOB_VNUM_MAP_ARMADILLO = 11062;    // Random armadillo for Overland scrub sectors
const int MOB_VNUM_MAP_MANTICORE = 11063;    // Random manticore for Overland scrub sectors
const int MOB_VNUM_SKYSHIP = 11072;
const int MOB_VNUM_CITYGUARD = 11074;        // Replaced original cityguard - Samson 3-26-98 */
const int MOB_VNUM_SUPERMOB = 11402;
const int MOB_VNUM_ANIMATED_CORPSE = 11403;
const int MOB_VNUM_ANIMATED_SKELETON = 11404;
const int MOB_VNUM_ANIMATED_ZOMBIE = 11405;
const int MOB_VNUM_ANIMATED_GHOUL = 11406;
const int MOB_VNUM_ANIMATED_CRYPT_THING = 11407;
const int MOB_VNUM_ANIMATED_MUMMY = 11408;
const int MOB_VNUM_ANIMATED_GHOST = 11409;
const int MOB_VNUM_ANIMATED_DEATH_KNIGHT = 11410;
const int MOB_VNUM_ANIMATED_DRACOLICH = 11411;
const int MOB_VNUM_CREEPINGDOOM = 11412;           // Creeping Doom mob - Samson 9-27-98 */
const int MOB_DOPPLEGANGER = 11413;                // Doppleganger base mob - Samson 10-11-99 */
const int MOB_VNUM_WARMOUNT = 11414;               // Paladin warmount - Samson 10-13-98 */

/* Deity avatars */

/*
 * Well known object virtual numbers.
 * Defined in #OBJECTS.
 */
const int OBJ_VNUM_DUMMYOBJ = 11000;       // This one is used by resets to make sure they work right - Samson 2/25/05
const int OBJ_VNUM_FIREPIT = 11001;        // Campfires turn into these when dead - Samson 8-10-98
const int OBJ_VNUM_CAMPFIRE = 11002;       // Campfire that loads when a player camps - Samson 8-10-98
const int OBJ_VNUM_BEDROLL = 11003;        // Bedroll for camping gear
const int OBJ_VNUM_FIREWOOD = 11004;       // Firewood for camping gear
const int OBJ_VNUM_OVFIRE = 11005;         // Overland environmental fire
const int OBJ_VNUM_CAMPGEAR = 11006;       // Generic camping gear object
const int OBJ_VNUM_FIRESEED = 11007;       // Fireseed object for spell_fireseed - Samson 10-13-98
const int OBJ_VNUM_FORAGE = 11027;         // This is the start of a range of 10 vnums - Samson 5-1-04
                                           //  ( 11027 -> 11037 )
const int OBJ_VNUM_FLAMETHROWER = 11039;   // Gnomish Flamethrower - for the Tinker skill
const int OBJ_VNUM_LADDER = 11040;         // Gnomish Ladder - for the Tinker skill
const int OBJ_VNUM_DIGGER = 11041;         // Gnomish Differ - for the Tinker skill
const int OBJ_VNUM_GNOME_LOCKPICK = 11042; // Gnomish Lockpick - for the Tinker skill
const int OBJ_VNUM_REBREATHER = 11043;     // Gnomish Rebreather - for the Tinker skill
const int OBJ_VNUM_TREASURE = 11044;       // Base object used for generating random treasure in treasure.cpp
const int OBJ_VNUM_RUNE = 11045;           // Base object used to generate runes in treasure.cpp for the socketing system
const int OBJ_VNUM_MAPS = 11046;           // Object used for mapout - Samson 1/28/06
const int OBJ_VNUM_ORE_BASE = 11299;       // This object does not actually exist, it's used by the blacksmithing code in treasure.cpp
const int OBJ_VNUM_MINING = 11300;         // This is the start of a range of 5 vnums - Samson 5-1-04
                                           // 11300 -> 11304 [11305 and 11306 are special cases]
const int OBJ_VNUM_TAN_JACKET = 11368;     // Block of objects used by the Tan skill in skills.cpp
const int OBJ_VNUM_TAN_BOOTS = 11369;
const int OBJ_VNUM_TAN_GLOVES = 11370;
const int OBJ_VNUM_TAN_LEGGINGS = 11371;
const int OBJ_VNUM_TAN_SLEEVES = 11372;
const int OBJ_VNUM_TAN_HELMET = 11373;
const int OBJ_VNUM_TAN_BAG = 11374;
const int OBJ_VNUM_TAN_CLOAK = 11375;
const int OBJ_VNUM_TAN_BELT = 11376;
const int OBJ_VNUM_TAN_COLLAR = 11377;
const int OBJ_VNUM_TAN_WATERSKIN = 11378;
const int OBJ_VNUM_TAN_QUIVER = 11379;
const int OBJ_VNUM_TAN_WHIP = 11380;
const int OBJ_VNUM_TAN_SHIELD = 11381;

const int OBJ_VNUM_PUDDLE = 11400;
const int OBJ_VNUM_MONEY_ONE = 11401;
const int OBJ_VNUM_MONEY_SOME = 11402;
const int OBJ_VNUM_CORPSE_NPC = 11403;
const int OBJ_VNUM_CORPSE_PC = 11404;
const int OBJ_VNUM_SEVERED_HEAD = 11405;
const int OBJ_VNUM_TORN_HEART = 11406;
const int OBJ_VNUM_SLICED_ARM = 11407;
const int OBJ_VNUM_SLICED_LEG = 11408;
const int OBJ_VNUM_SPILLED_GUTS = 11409;
const int OBJ_VNUM_BLOOD = 11410;
const int OBJ_VNUM_BLOODSTAIN = 11411;
const int OBJ_VNUM_SCRAPS = 11412;
const int OBJ_VNUM_MUSHROOM = 11413;
const int OBJ_VNUM_LIGHT_BALL = 11414;
const int OBJ_VNUM_SPRING = 11415;
const int OBJ_VNUM_SLICE = 11417;
const int OBJ_VNUM_SHOPPING_BAG = 11418;

const int OBJ_VNUM_FIRE = 11423;
const int OBJ_VNUM_TRAP = 11424;
const int OBJ_VNUM_PORTAL = 11425;
const int OBJ_VNUM_BLACK_POWDER = 11426;
const int OBJ_VNUM_SCROLL_SCRIBING = 11427;
const int OBJ_VNUM_FLASK_BREWING = 11428;
const int OBJ_VNUM_NOTE = 11429;

const int OBJ_VNUM_WAND_CHARGING = 11432;

const int OBJ_VNUM_BRAINS = 11435;
const int OBJ_VNUM_HANDS = 11436;
const int OBJ_VNUM_FOOT = 11437;
const int OBJ_VNUM_FINGERS = 11438;
const int OBJ_VNUM_EAR = 11439;
const int OBJ_VNUM_EYE = 11440;
const int OBJ_VNUM_TONGUE = 11441;
const int OBJ_VNUM_EYESTALK = 11442;
const int OBJ_VNUM_TENTACLE = 11443;
const int OBJ_VNUM_FINS = 11444;
const int OBJ_VNUM_WINGS = 11445;
const int OBJ_VNUM_TAIL = 11446;
const int OBJ_VNUM_SCALES = 11447;
const int OBJ_VNUM_TUSKS = 11448;
const int OBJ_VNUM_HORNS = 11449;
const int OBJ_VNUM_CLAWS = 11450;

const int OBJ_VNUM_SHELL = 11461;
const int OBJ_VNUM_FEATHERS = 11462;
const int OBJ_VNUM_FORELEG = 11463;
const int OBJ_VNUM_PAWS = 11464;
const int OBJ_VNUM_HOOVES = 11465;
const int OBJ_VNUM_BEAK = 11466;
const int OBJ_VNUM_SHARPSCALE = 11467;
const int OBJ_VNUM_HAUNCHES = 11468;
const int OBJ_VNUM_FANGS = 11469;

/* Academy eq */
const int OBJ_VNUM_SCHOOL_BANNER = 11478;
const int OBJ_VNUM_NEWBIE_GUIDE = 11479;

/*
 * Well known room virtual numbers.
 * Defined in #ROOMS.
 */
const int ROOM_AUTH_START = 100;       /* Pregame Entry, auth system on */
const int ROOM_NOAUTH_START = 102;     /* Pregame Entry, auth system off */
const int ROOM_VNUM_LIMBO = 11401;
const int ROOM_VNUM_POLY = 11402;
const int ROOM_VNUM_RAREUPDATE = 11402;   /* Room where players get scanned for rare items - Samson 1-24-00 */
const int ROOM_VNUM_HELL = 11405;   /* Vnum for Hell - Samson */
const int ROOM_VNUM_CHAT = 11406;   /* Parlour of the Immortals */
const int ROOM_VNUM_TEMPLE = 1000; /* Primary continent recall */
const int ROOM_VNUM_ALTAR = 1000;  /* Primary continent death */
const int ROOM_VNUM_DONATION = 1155;  /* First donation room - Samson 2-6-98 */
const int ROOM_VNUM_REDEEM = 11411; /* Sindhae prize redemption start room - Samson 6-2-00 */
const int ROOM_VNUM_ENDREDEEM = 11412; /* Sindhae prize redemption ending room - Samson 6-2-00 */

/* New continent and plane support - Samson 3-28-98
 * Name of continent or plane is followed by the recall and death zone.
 * Area continent flags for continent and plane system, revised format - Samson 8-8-98
 */
enum acon_types
{
   ACON_ONE, ACON_ASTRAL, ACON_IMMORTAL, ACON_MAX
};

// Playable Races
// If you add a new race to this table, make sure you update update_aris in character.cpp as well
// Also make sure the array in const.cpp is synced with this.
enum race_types
{
   RACE_HUMAN, RACE_HIGH_ELF, RACE_DWARF, RACE_HALFLING, RACE_PIXIE,
   RACE_HALF_OGRE, RACE_HALF_ORC, RACE_HALF_TROLL, RACE_HALF_ELF, RACE_GITH,
   RACE_MINOTAUR, RACE_DUERGAR, RACE_CENTAUR, RACE_IGUANADON,
   RACE_GNOME, RACE_DROW, RACE_WILD_ELF, RACE_INSECTOID, RACE_SAUGHIN, 
   RACE_BELEIGH, RACE_DARVACK, RACE_ALDURIAN,RACE_CYBORG, RACE_23
};

/* NPC Races */
const int RACE_HALFBREED = 25;
const int RACE_REPTILE = 26;
const int RACE_SPECIAL = 27;
const int RACE_LYCANTH = 28;
const int RACE_DRAGON = 29;
const int RACE_UNDEAD = 30;
const int RACE_ORC = 31;
const int RACE_INSECT = 32;
const int RACE_ARACHNID = 33;
const int RACE_DINOSAUR = 34;
const int RACE_FISH = 35;
const int RACE_BIRD = 36;
const int RACE_GIANT = 37; /* generic giant more specials down ---V */
const int RACE_PREDATOR = 38;
const int RACE_PARASITE = 39;
const int RACE_SLIME = 40;
const int RACE_DEMON = 41;
const int RACE_SNAKE = 42;
const int RACE_HERBIV = 43;
const int RACE_TREE = 44;
const int RACE_VEGGIE = 45;
const int RACE_ELEMENT = 46;
const int RACE_PLANAR = 47;
const int RACE_DEVIL = 48;
const int RACE_GHOST = 49;
const int RACE_GOBLIN = 50;
const int RACE_TROLL = 51;
const int RACE_VEGMAN = 52;
const int RACE_MFLAYER = 53;
const int RACE_PRIMATE = 54;
const int RACE_ENFAN = 55;
const int RACE_GOLEM = 56;
const int RACE_SKEXIE = 57;
const int RACE_TROGMAN = 58;
const int RACE_PATRYN = 59;
const int RACE_LABRAT = 60;
const int RACE_SARTAN = 61;
const int RACE_TYTAN = 62;
const int RACE_SMURF = 63;
const int RACE_ROO = 64;
const int RACE_HORSE = 65;
const int RACE_DRAAGDIM = 66;
const int RACE_ASTRAL = 67;
const int RACE_GOD = 68;

const int RACE_GIANT_HILL = 69;
const int RACE_GIANT_FROST = 70;
const int RACE_GIANT_FIRE = 71;
const int RACE_GIANT_CLOUD = 72;
const int RACE_GIANT_STORM = 73;
const int RACE_GIANT_STONE = 74;

const int RACE_DRAGON_RED = 75;
const int RACE_DRAGON_BLACK = 76;
const int RACE_DRAGON_GREEN = 77;
const int RACE_DRAGON_WHITE = 78;
const int RACE_DRAGON_BLUE = 79;
const int RACE_DRAGON_SILVER = 80;
const int RACE_DRAGON_GOLD = 81;
const int RACE_DRAGON_BRONZE = 82;
const int RACE_DRAGON_COPPER = 83;
const int RACE_DRAGON_BRASS = 84;

const int RACE_VAMPIRE = 85;
const int RACE_UNDEAD_VAMPIRE = 86;
const int RACE_LICH = 87;
const int RACE_UNDEAD_LICH = 88;
const int RACE_WIGHT = 89;
const int RACE_UNDEAD_WIGHT = 90;
const int RACE_GHAST = 91;
const int RACE_UNDEAD_GHAST = 92;
const int RACE_SPECTRE = 93;
const int RACE_UNDEAD_SPECTRE = 94;
const int RACE_ZOMBIE = 95;
const int RACE_UNDEAD_ZOMBIE = 96;
const int RACE_SKELETON = 97;
const int RACE_UNDEAD_SKELETON = 98;
const int RACE_GHOUL = 99;
const int RACE_UNDEAD_GHOUL = 100;

const int RACE_HALF_GIANT = 101;
const int RACE_DEEP_GNOME = 102;
const int RACE_GNOLL = 103;

const int RACE_GOLD_ELF = 104;
const int RACE_GOLD_ELVEN = 105;
const int RACE_SEA_ELF = 106;
const int RACE_SEA_ELVEN = 107;

/* 10-20-96 Admiral */
const int RACE_TIEFLING = 108;
const int RACE_AASIMAR = 109;
const int RACE_SOLAR = 110;
const int RACE_PLANITAR = 111;
const int RACE_UNDEAD_SHADOW = 112;
const int RACE_GIANT_SKELETON = 113;
const int RACE_NILBOG = 114;
const int RACE_HOUSERS = 115;
const int RACE_BAKU = 116;
const int RACE_BEASTLORD = 117;
const int RACE_DEVAS = 118;
const int RACE_POLARIS = 119;
const int RACE_DEMODAND = 120;
const int RACE_TARASQUE = 121;
const int RACE_DIETY = 122;
const int RACE_DAEMON = 123;
const int RACE_VAGABOND = 124;

/* Imported races from old Alsherok code - Samson */
const int RACE_GARGOYLE = 125;
const int RACE_BEAR = 126;
const int RACE_BAT = 127;
const int RACE_CAT = 128;
const int RACE_DOG = 129;
const int RACE_ANT = 130;
const int RACE_APE = 131;
const int RACE_BABOON = 132;
const int RACE_BEE = 133;
const int RACE_BEETLE = 134;
const int RACE_BOAR = 135;
const int RACE_BUGBEAR = 136;
const int RACE_FERRET = 137;
const int RACE_FLY = 138;
const int RACE_GELATIN = 139;
const int RACE_GORGON = 140;
const int RACE_HARPY = 141;
const int RACE_HOBGOBLIN = 142;
const int RACE_KOBOLD = 143;
const int RACE_LOCUST = 144;
const int RACE_MOLD = 145;
const int RACE_MULE = 146;
const int RACE_NEANDERTHAL = 147;
const int RACE_OOZE = 148;
const int RACE_RAT = 149;
const int RACE_RUSTMONSTER = 150;
const int RACE_SHAPESHIFTER = 151;
const int RACE_SHREW = 152;
const int RACE_SHRIEKER = 153;
const int RACE_STIRGE = 154;
const int RACE_THOUL = 155;
const int RACE_WOLF = 156;
const int RACE_WORM = 157;
const int RACE_BOVINE = 158;
const int RACE_CANINE = 159;
const int RACE_FELINE = 160;
const int RACE_PORCINE = 161;
const int RACE_MAMMAL = 162;
const int RACE_RODENT = 163;
const int RACE_AMPHIBIAN = 164;
const int RACE_CRUSTACEAN = 165;
const int RACE_SPIRIT = 166;
const int RACE_MAGICAL = 167;
const int RACE_ANIMAL = 168;
const int RACE_HUMANOID = 169;
const int RACE_MONSTER = 170;
const int RACE_UNUSED1 = 171;
const int RACE_UNUSED2 = 172;
const int RACE_UNUSED3 = 173;
const int RACE_UNUSED4 = 174;
const int RACE_UNUSED5 = 175;
const int RACE_UNUSED6 = 176;

const int CLASS_NONE = -1; /* For skill/spells according to guild */

// Playable Classes
// If you add a new class to this, make sure you update update_aris in character.cpp as well.
// You also need to make sure the array in const.cpp is synced with this.
enum class_types
{
   CLASS_MAGE, CLASS_CLERIC, CLASS_ROGUE, CLASS_WARRIOR, CLASS_NECROMANCER,
   CLASS_DRUID, CLASS_RANGER, CLASS_MONK, CLASS_PC08, CLASS_PC09,
   CLASS_ANTIPALADIN, CLASS_PALADIN, CLASS_BARD, CLASS_PC13, CLASS_PC14, CLASS_PC15,
   CLASS_PC16, CLASS_PC17, CLASS_PC18, CLASS_PC19
};

/*
 * Languages -- Altrag
 */
enum lang_array
{
   LANG_COMMON, LANG_ELVEN, LANG_DWARVEN, LANG_PIXIE,
   LANG_OGRE, LANG_ORCISH, LANG_TROLLISH, LANG_RODENT,
   LANG_INSECTOID, LANG_MAMMAL, LANG_REPTILE,
   LANG_DRAGON, LANG_SPIRITUAL, LANG_MAGICAL,
   LANG_GOBLIN, LANG_GOD, LANG_ANCIENT, LANG_HALFLING,
   LANG_CLAN, LANG_GITH, LANG_MINOTAUR, LANG_CENTAUR,
   LANG_GNOME, LANG_SAHUAGIN, LANG_BELEIGH, LANG_DARVACK,
   LANG_ALDURIAN, LANG_CYBORG, LANG_UNKNOWN
};

#define VALID_LANGS    ( LANG_COMMON | LANG_ELVEN | LANG_DWARVEN | LANG_PIXIE  \
		       | LANG_OGRE | LANG_ORCISH | LANG_TROLLISH | LANG_GOBLIN \
		       | LANG_HALFLING | LANG_GITH | LANG_MINOTAUR | LANG_CENTAUR | LANG_GNOME \
			 | LANG_REPTILE | LANG_INSECTOID | LANG_SAHUAGIN | LANG_BELEIGH \
                         | LANG_DARVACK | LANG_ALDURIAN | LANG_CYBORG)
#endif
