/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef MADS_DRAGONSPHERE_SCENES_H
#define MADS_DRAGONSPHERE_SCENES_H

#include "common/scummsys.h"
#include "mads/game.h"
#include "mads/scene.h"
#include "mads/dragonsphere/game_dragonsphere.h"
//#include "mads/dragonsphere/globals_dragonsphere.h"

namespace MADS {

namespace Dragonsphere {

enum Verb {
	VERB_LOOK = 0x3,
	VERB_TAKE = 0x4,
	VERB_PUSH = 0x5,
	VERB_OPEN = 0x6,
	VERB_PUT = 0x7,
	VERB_TALK_TO = 0x8,
	VERB_GIVE = 0x9,
	VERB_PULL = 0xA,
	VERB_CLOSE = 0xB,
	VERB_THROW = 0xC,
	VERB_WALK_TO = 0xD,
	VERB_WALK_ACROSS = 0x11,
	VERB_WALK_BEHIND = 0x1C,
	VERB_LOOK_AT = 0x1E,
	VERB_WALK_THROUGH = 0x25,
	VERB_WALK_INTO = 0x27,
	VERB_INVOKE = 0x2F,
	VERB_ATTACK = 0x39,
	VERB_CARVE_UP = 0x3A,
	VERB_THRUST = 0x57,
	VERB_POUR = 0x62,
	VERB_POUR_CONTENTS_OF = 0x63,
	VERB_DRINK = 0x64,
	VERB_SHIFT_SELF = 0x73,
	VERB_SHIFT_INTO_BEAR = 0x74,
	VERB_SHIFT_INTO_SEAL = 0x75,
	VERB_SHIFT_INTO_SNAKE = 0x76,
	VERB_WALK_DOWN = 0xA9,
	VERB_WALK = 0x1CB,
	VERB_WALK_AROUND = 0x221
};

enum Noun {
	NOUN_GAME = 0x1,
	NOUN_QSAVE = 0x2,
	NOUN_NOTHING = 0xE,
	NOUN_ = 0xF,
	NOUN_FLOOR = 0x10,
	NOUN_RUG = 0x12,
	NOUN_CARPET = 0x13,
	NOUN_WALL = 0x14,
	NOUN_BED = 0x15,
	NOUN_PILLOW = 0x16,
	NOUN_CHEST = 0x17,
	NOUN_WINDOW = 0x18,
	NOUN_NIGHTSTAND = 0x19,
	NOUN_TAPESTRY = 0x1A,
	NOUN_DRESSING_SCREEN = 0x1B,
	NOUN_ROYAL_CREST = 0x1D,
	NOUN_WASHBASIN = 0x1F,
	NOUN_WASH_AT = 0x20,
	NOUN_BOOK = 0x21,
	NOUN_FIREPLACE = 0x22,
	NOUN_FIREPLACE_SCREEN = 0x23,
	NOUN_DOOR_TO_QUEENS_ROOM = 0x24,
	NOUN_HALL_TO_SOUTH = 0x26,
	NOUN_WALL_PLAQUE = 0x28,
	NOUN_DECORATION = 0x29,
	NOUN_SWORDS = 0x2A,
	NOUN_WALL_SCONCE = 0x2B,
	NOUN_BUST_ON_WALL = 0x2C,
	NOUN_WALL_ARCH = 0x2D,
	NOUN_SIGNET_RING = 0x2E,
	NOUN_POLISH = 0x30,
	NOUN_GANGBANG = 0x31,
	NOUN_BIRD_FIGURINE = 0x32,
	NOUN_RUB = 0x33,
	NOUN_BIRDCALL = 0x34,
	NOUN_USE = 0x35,
	NOUN_MAKE_NOISE = 0x36,
	NOUN_SHIELDSTONE = 0x37,
	NOUN_SWORD = 0x38,
	NOUN_GOBLET = 0x3B,
	NOUN_FILL = 0x3C,
	NOUN_DRINK_FROM = 0x3D,
	NOUN_BONE = 0x3E,
	NOUN_GNAW = 0x3F,
	NOUN_FRUIT = 0x40,
	NOUN_EAT = 0x41,
	NOUN_DOLL = 0x42,
	NOUN_PLAY_WITH = 0x43,
	NOUN_HEAL = 0x44,
	NOUN_HEAL_THYSELF = 0x45,
	NOUN_HEAL_SELF = 0x46,
	NOUN_POLYSTONE = 0x47,
	NOUN_MIMIC = 0x48,
	NOUN_RED_POWERSTONE = 0x49,
	NOUN_YELLOW_POWERSTONE = 0x4A,
	NOUN_BLUE_POWERSTONE = 0x4B,
	NOUN_KEY_CROWN = 0x4C,
	NOUN_WEAR = 0x4D,
	NOUN_DATES = 0x4E,
	NOUN_STATUE = 0x4F,
	NOUN_BOTTLE_OF_FLIES = 0x50,
	NOUN_LISTEN_TO = 0x51,
	NOUN_SOUL_EGG = 0x52,
	NOUN_BREAK = 0x53,
	NOUN_MAGIC_BELT = 0x54,
	NOUN_ADJUST = 0x55,
	NOUN_AMULET = 0x56,
	NOUN_MUD = 0x58,
	NOUN_FEEL = 0x59,
	NOUN_TASTE = 0x5A,
	NOUN_FEATHERS = 0x5B,
	NOUN_TICKLE = 0x5C,
	NOUN_TORCH = 0x5D,
	NOUN_WAVE = 0x5E,
	NOUN_FLASK = 0x5F,
	NOUN_FLASK_FULL_OF_ACID = 0x60,
	NOUN_POUR_CONTENTS = 0x61,
	NOUN_ROPE = 0x65,
	NOUN_TIE = 0x66,
	NOUN_POWER_VACUUM_STONE = 0x67,
	NOUN_TAKE_MAGIC_FROM = 0x68,
	NOUN_DEAD_RAT = 0x69,
	NOUN_PET = 0x6A,
	NOUN_MAP = 0x6B,
	NOUN_FOLD = 0x6C,
	NOUN_CRYSTAL_BALL = 0x6D,
	NOUN_GAZE_INTO = 0x6E,
	NOUN_INVOKE_POWER_OF = 0x6F,
	NOUN_BLACK_SPHERE = 0x70,
	NOUN_SOPTUS_SOPORIFIC = 0x71,
	NOUN_SHIFTER_RING = 0x72,
	NOUN_REVERT = 0x77,
	NOUN_MEDICINE_BUNDLE = 0x78,
	NOUN_SHAKE = 0x79,
	NOUN_PARTLY_BUILT_BUNDLE = 0x7A,
	NOUN_RATSICLE = 0x7B,
	NOUN_LICK = 0x7C,
	NOUN_TENTACLE_PARTS = 0x7D,
	NOUN_CHEW = 0x7E,
	NOUN_TELEPORT_DOOR = 0x7F,
	NOUN_UNROLL = 0x80,
	NOUN_RARE_COIN = 0x81,
	NOUN_ADMIRE = 0x82,
	NOUN_CRYSTAL_FLOWER = 0x83,
	NOUN_DIAMOND_DUST = 0x84,
	NOUN_RUBY_RING = 0x85,
	NOUN_GOLD_NUGGET = 0x86,
	NOUN_MAGIC_MUSIC_BOX = 0x87,
	NOUN_EMERALD = 0x88,
	NOUN_PIECE_OF_PAPER = 0x89,
	NOUN_SPEAK_WORDS_ON = 0x8A,
	NOUN_VORTEX_STONE = 0x8B,
	NOUN_RUG2 = 0x8C,
	NOUN_FIREPLACE_SCREEN2 = 0x8D,
	NOUN_BUST_ON_WALL2 = 0x8E,
	NOUN_LOOK_AT2 = 0x8F,
	NOUN_DRAGON = 0x90,
	NOUN_DRAGONSPHERE = 0x91,
	NOUN_TOUCH = 0x92,
	NOUN_THRONE_ROOM = 0x93,
	NOUN_RETURN_TO = 0x94,
	NOUN_CAVE = 0x95,
	NOUN_PASSAGEWAY_TO_WEST = 0x96,
	NOUN_PASSAGEWAY_TO_EAST = 0x97,
	NOUN_CAVE_FLOOR = 0x98,
	NOUN_STONE_COLUMN = 0x99,
	NOUN_ABYSS = 0x9A,
	NOUN_LOOK_INTO = 0x9B,
	NOUN_CASTLE = 0x9C,
	NOUN_CASTLE_GATE = 0x9D,
	NOUN_GROUND = 0x9E,
	NOUN_BARREL = 0x9F,
	NOUN_BARRELS = 0xA0,
	NOUN_HAYSTACK = 0xA1,
	NOUN_ROOT_THROUGH = 0xA2,
	NOUN_BATTLEMENTS = 0xA3,
	NOUN_GATE_TO_THRONE_ROOM = 0xA4,
	NOUN_CASTLE_WALL = 0xA5,
	NOUN_DOOR = 0xA6,
	NOUN_WALL_SWITCH = 0xA7,
	NOUN_STAIRS = 0xA8,
	NOUN_EDGE_OF_ABYSS = 0xAA,
	NOUN_COURTYARD = 0xAB,
	NOUN_ROCK = 0xAC,
	NOUN_CAVE_CEILING = 0xAD,
	NOUN_CAVE_WALL = 0xAE,
	NOUN_BRAZIER = 0xAF,
	NOUN_DOOR_TO_THRONE_ROOM = 0xB0,
	NOUN_GO_THROUGH = 0xB1,
	NOUN_DINING_TABLE = 0xB2,
	NOUN_ACTIVATE = 0xB3,
	NOUN_BATTLEMENT = 0xB4,
	NOUN_DOOR_TO_GAURDROOM = 0xB5,
	NOUN_DUNGEON_FLOOR = 0xB6,
	NOUN_DUNGEON_WALLS = 0xB7,
	NOUN_DUNGEON_CEILING = 0xB8,
	NOUN_BEDDING = 0xB9,
	NOUN_FLOOR_GRATE = 0xBA,
	NOUN_MANACLES = 0xBB,
	NOUN_CALENDAR = 0xBC,
	NOUN_DOOR_TO_GUARDROOM = 0xBD,
	NOUN_DOOR_TO_COUNCIL_ROOM = 0xBE,
	NOUN_GUARD_STATION = 0xBF,
	NOUN_DOOR_TO_DUNGEON_CELL = 0xC0,
	NOUN_DOORWAY_TO_CELL = 0xC1,
	NOUN_DUNGEON_DOOR = 0xC2,
	NOUN_DUNGEON_WALL = 0xC3,
	NOUN_CEILING = 0xC4,
	NOUN_DOOR_TO_HALLWAY = 0xC5,
	NOUN_TABLE = 0xC6,
	NOUN_BOOKSHELF = 0xC7,
	NOUN_TROPHY = 0xC8,
	NOUN_READING_BENCH = 0xC9,
	NOUN_CHAIR = 0xCA,
	NOUN_LOVESEAT = 0xCB,
	NOUN_WOOD_BASKET = 0xCC,
	NOUN_STOOL = 0xCD,
	NOUN_GUARD_STOOL = 0xCE,
	NOUN_ROCKS = 0xCF,
	NOUN_DIVIDING_WALL = 0xD0,
	NOUN_ARCHWAY = 0xD1,
	NOUN_MARKET_GROUNDS = 0xD2,
	NOUN_HEDGE = 0xD3,
	NOUN_SKY = 0xD4,
	NOUN_PLAINS = 0xD5,
	NOUN_FIELDS = 0xD6,
	NOUN_GATE_TO_COURTYARD = 0xD7,
	NOUN_ROAD_TO_EAST = 0xD8,
	NOUN_TREES = 0xD9,
	NOUN_CLOUDS = 0xDA,
	NOUN_MERCHANTS_STALL = 0xDB,
	NOUN_WELL = 0xDC,
	NOUN_DOWN_WELL = 0xDD,
	NOUN_GO = 0xDE,
	NOUN_GO_DOWN = 0xDF,
	NOUN_CRANK = 0xE0,
	NOUN_BUCKET = 0xE1,
	NOUN_JUMP_DOWN = 0xE2,
	NOUN_WALLS = 0xE3,
	NOUN_DOORWAY_TO_SOUTH = 0xE4,
	NOUN_PEDESTAL = 0xE5,
	NOUN_DOOR_TO_NORTH = 0xE6,
	NOUN_PAINTING = 0xE7,
	NOUN_DOCUMENT = 0xE8,
	NOUN_INK_BOTTLE = 0xE9,
	NOUN_QUILL_PEN = 0xEA,
	NOUN_CHANDELIER = 0xEB,
	NOUN_COUNCIL_TABLE = 0xEC,
	NOUN_CANDLESTICK = 0xED,
	NOUN_DESK = 0xEE,
	NOUN_TURN = 0xEF,
	NOUN_POLE = 0xF0,
	NOUN_THE_SCENE = 0xF1,
	NOUN_LEAVE = 0xF2,
	NOUN_END_TABLE = 0xF3,
	NOUN_BATTLE_AXES = 0xF4,
	NOUN_DOOR_TO_KINGS_ROOM = 0xF5,
	NOUN_COAT_OF_ARMS = 0xF6,
	NOUN_LARGE_WINDOW = 0xF7,
	NOUN_SMALL_WINDOW = 0xF8,
	NOUN_DOOR_TO_MEETING_ROOM = 0xF9,
	NOUN_DOOR_TO_BALLROOM = 0xFA,
	NOUN_FLOWERS = 0xFB,
	NOUN_SHUTTERS = 0xFC,
	NOUN_BOOKCASE = 0xFD,
	NOUN_DOOR_TO_COURTYARD = 0xFE,
	NOUN_PLATFORM = 0xFF,
	NOUN_STEP = 0x100,
	NOUN_RED_CARPET = 0x101,
	NOUN_KINGS_THRONE = 0x102,
	NOUN_SIT_IN = 0x103,
	NOUN_QUEENS_THRONE = 0x104,
	NOUN_TRAPDOOR = 0x105,
	NOUN_GRATE = 0x106,
	NOUN_RIVER = 0x107,
	NOUN_DIARIES = 0x108,
	NOUN_SWIM_DOWN = 0x109,
	NOUN_SCULLERY_MAID = 0x10A,
	NOUN_DOORWAY_TO_DUNGEON = 0x10B,
	NOUN_WARD = 0x10C,
	NOUN_DARKNESS_BEAST = 0x10D,
	NOUN_BEAST = 0x10E,
	NOUN_PUT_MAGIC_INTO = 0x10F,
	NOUN_GUARD = 0x110,
	NOUN_CROWN = 0x111,
	NOUN_BOOKS = 0x112,
	NOUN_SECRET_DOOR = 0x113,
	NOUN_WALL_PANEL = 0x114,
	NOUN_DOORWAY = 0x115,
	NOUN_FAERIE = 0x116,
	NOUN_SOPTUS_ECLIPTUS = 0x117,
	NOUN_GUARD_CAPTAIN = 0x118,
	NOUN_MERCHANT = 0x119,
	NOUN_SHAPECHANGER = 0x11A,
	NOUN_RED_STONE = 0x11B,
	NOUN_YELLOW_STONE = 0x11C,
	NOUN_BLUE_STONE = 0x11D,
	NOUN_FLIES = 0x11E,
	NOUN_FLASK_OF_ACID = 0x11F,
	NOUN_PARTIAL_BUNDLE = 0x120,
	NOUN_SOPORIFIC = 0x121,
	NOUN_PARCHMENT = 0x122,
	NOUN_KING = 0x123,
	NOUN_MACMORN = 0x124,
	NOUN_MOUNTAINSIDE = 0x125,
	NOUN_PATH_TO_SOUTH = 0x126,
	NOUN_ROUGH_STONE = 0x127,
	NOUN_CLIMB_UP = 0x128,
	NOUN_LARGE_ROCK = 0x129,
	NOUN_SMALL_ROCK = 0x12A,
	NOUN_PATH_TO_WEST = 0x12B,
	NOUN_CAVE_ENTRANCE = 0x12C,
	NOUN_PALLET = 0x12D,
	NOUN_BLANKET = 0x12E,
	NOUN_FIREPIT = 0x12F,
	NOUN_FLAT_STONE = 0x130,
	NOUN_MOVE = 0x131,
	NOUN_SPIRIT_BUNDLE = 0x132,
	NOUN_TRAIL_LEADING_UP = 0x133,
	NOUN_FOLLOW = 0x134,
	NOUN_TRAIL_LEADING_DOWN = 0x135,
	NOUN_NEST = 0x136,
	NOUN_REACH_IN = 0x137,
	NOUN_TRAIL_LEADING_WEST = 0x138,
	NOUN_PATH_TO_EAST = 0x139,
	NOUN_WATERFALL = 0x13A,
	NOUN_PUDDLE = 0x13B,
	NOUN_EDGE_OF_CLIFF = 0x13C,
	NOUN_LEDGE = 0x13D,
	NOUN_CLIMB_DOWN = 0x13E,
	NOUN_LANDING = 0x13F,
	NOUN_BOULDERS = 0x140,
	NOUN_ROCK_TUMBLE = 0x141,
	NOUN_ROCK_TREE = 0x142,
	NOUN_PILLAR = 0x143,
	NOUN_JUMP_TO = 0x144,
	NOUN_CLIFF = 0x145,
	NOUN_PILLARS = 0x146,
	NOUN_SPECIAL_ROCK = 0x147,
	NOUN_GAZE_UPON = 0x148,
	NOUN_SCONCE = 0x149,
	NOUN_LADDER = 0x14A,
	NOUN_STAIRWAY = 0x14B,
	NOUN_MECHANISM = 0x14C,
	NOUN_SPEARHEADS = 0x14D,
	NOUN_TRAP_DOOR = 0x14E,
	NOUN_SWIM = 0x14F,
	NOUN_DOWN_RIVER = 0x150,
	NOUN_SWIM_UP = 0x151,
	NOUN_UP_RIVER = 0x152,
	NOUN_SHORE = 0x153,
	NOUN_SWIM_TO = 0x154,
	NOUN_SWIM_TOWARDS = 0x155,
	NOUN_KING_CALLASH = 0x156,
	NOUN_KINGS_THRONE2 = 0x157,
	NOUN_KING2 = 0x158,
	NOUN_GROTTO = 0x159,
	NOUN_CLIMB_THROUGH = 0x15A,
	NOUN_QUEEN_MOTHER = 0x15B,
	NOUN_MACMORN2 = 0x15C,
	NOUN_SMALL_LEDGE = 0x15D,
	NOUN_MACMORN3 = 0x15E,
	NOUN_TO_110 = 0x15F,
	NOUN_TO_KITTY_HEAVEN = 0x160,
	NOUN_KITTY_HEAVEN = 0x161,
	NOUN_ROOM_110 = 0x162,
	NOUN_LLANIE = 0x163,
	NOUN_CW = 0x164,
	NOUN_HERMIT = 0x165,
	NOUN_TROU = 0x166,
	NOUN_SHAK = 0x167,
	NOUN_ROOM_501 = 0x168,
	NOUN_MOON = 0x169,
	NOUN_UFO = 0x16A,
	NOUN_SIT_ON = 0x16B,
	NOUN_STRANGER = 0x16C,
	NOUN_TOWER_DOOR = 0x16D,
	NOUN_DOOR_TO_EAST = 0x16E,
	NOUN_DOOR_TO_WEST = 0x16F,
	NOUN_EYE = 0x170,
	NOUN_DOORWAY_TO_EAST = 0x171,
	NOUN_DOORWAY_TO_WEST = 0x172,
	NOUN_SKULL = 0x173,
	NOUN_DOOR_TO_MAGIC_ROOM = 0x174,
	NOUN_ANCIENT_BARREL = 0x175,
	NOUN_COBWEBS = 0x176,
	NOUN_SHELF = 0x177,
	NOUN_MUSTY_CHART = 0x178,
	NOUN_LAB_TABLE = 0x179,
	NOUN_PETCOCK = 0x17A,
	NOUN_NOZZLE = 0x17B,
	NOUN_TUBING = 0x17C,
	NOUN_BEAKER = 0x17D,
	NOUN_FLAME = 0x17E,
	NOUN_METAL_PLATE = 0x17F,
	NOUN_SHAFT_OF_LIGHT = 0x180,
	NOUN_CABINET = 0x181,
	NOUN_BALANCE = 0x182,
	NOUN_CAGE = 0x183,
	NOUN_FREEZER = 0x184,
	NOUN_CONTENTS_OF_FREEZER = 0x185,
	NOUN_CAGE_WITH_RATS = 0x186,
	NOUN_DOOR_TO_SOUTH = 0x187,
	NOUN_TRAIL_OF_GREEN_SLIME = 0x188,
	NOUN_NECK_LOCK = 0x189,
	NOUN_BENCH = 0x18A,
	NOUN_SKELETON = 0x18B,
	NOUN_LEG_CLAMPS = 0x18C,
	NOUN_LEG_LOCK = 0x18D,
	NOUN_WAIST_LOCK = 0x18E,
	NOUN_NER_TOM = 0x18F,
	NOUN_BELT = 0x190,
	NOUN_JUMP_INTO = 0x191,
	NOUN_CLOSET = 0x192,
	NOUN_DOOR_TO_EYE_CHAMBER = 0x193,
	NOUN_DRESSER = 0x194,
	NOUN_SCROLL = 0x195,
	NOUN_WITCH_PARAPHERNALIA = 0x196,
	NOUN_SHELVES = 0x197,
	NOUN_MAGIC_TOMES = 0x198,
	NOUN_MAGIC_PARAPHERNALIA = 0x199,
	NOUN_BOOK_OF_MAGIC = 0x19A,
	NOUN_HOURGLASS = 0x19B,
	NOUN_STONE_SPHERE = 0x19C,
	NOUN_SHADOW_OF_WINDOW = 0x19D,
	NOUN_MUSIC_BOX = 0x19E,
	NOUN_LARGE_SPIDER_WEB = 0x19F,
	NOUN_INFERNAL_MACHINE = 0x1A0,
	NOUN_WATER_SOURCE = 0x1A1,
	NOUN_FLOW_OF_WATER = 0x1A2,
	NOUN_RETORT = 0x1A3,
	NOUN_DOORWAY_TO_CORRIDOR = 0x1A4,
	NOUN_TELESCOPE = 0x1A5,
	NOUN_STRANGE_MAP = 0x1A6,
	NOUN_CIRCLE_OF_SPHERES = 0x1A7,
	NOUN_STONE_BED = 0x1A8,
	NOUN_DRAGON_SCULPTURE = 0x1A9,
	NOUN_RAT = 0x1AA,
	NOUN_RAT_CAGE = 0x1AB,
	NOUN_DOWN_BUTTON = 0x1AC,
	NOUN_DOOR_TO_MACHINE_ROOM = 0x1AD,
	NOUN_STRANGE_PORTAL = 0x1AE,
	NOUN_DOOR_FRAME = 0x1AF,
	NOUN_ELEVATOR_HOLE = 0x1B0,
	NOUN_UP_BUTTON = 0x1B1,
	NOUN_DOORWAY_TO_DARK_ROOM = 0x1B2,
	NOUN_BIG_SKULL = 0x1B3,
	NOUN_ELEVATOR_PLATFORM = 0x1B4,
	NOUN_BUTTON = 0x1B5,
	NOUN_TOP_BUTTON = 0x1B6,
	NOUN_BOTTOM_BUTTON = 0x1B7,
	NOUN_TELEPORTAL = 0x1B8,
	NOUN_EYE_CHAMBER_DOORWAY = 0x1B9,
	NOUN_MACHINE_ROOM_DOORWAY = 0x1BA,
	NOUN_GLOWING_FLOOR = 0x1BB,
	NOUN_BRYNN_FANN = 0x1BC,
	NOUN_GRAN_CALLAHACH = 0x1BD,
	NOUN_SLATHAN_NI_PATAN = 0x1BE,
	NOUN_HIGHTOWER = 0x1BF,
	NOUN_SOPTUS_ECLIPTUS2 = 0x1C0,
	NOUN_TOWER = 0x1C1,
	NOUN_MOUNTAIN_PATH = 0x1C2,
	NOUN_PATH_BEHIND_TOWER = 0x1C3,
	NOUN_VINES = 0x1C4,
	NOUN_SLATHAN_NI_PATAN2 = 0x1C5,
	NOUN_SICK = 0x1C6,
	NOUN_PATH_AROUND_TOWER = 0x1C7,
	NOUN_PATH_TO_HIGHTOWER = 0x1C8,
	NOUN_SPIRIT_PLANE = 0x1C9,
	NOUN_SPIRIT_TREE = 0x1CA,
	NOUN_REMAINS = 0x1CC,
	NOUN_DOORWAY_TO_ELEVATOR = 0x1CD,
	NOUN_DRAGON_DOOR = 0x1CE,
	NOUN_DRAGON_BONES = 0x1CF,
	NOUN_IRON_FLOOR = 0x1D0,
	NOUN_HOLE = 0x1D1,
	NOUN_STONE = 0x1D2,
	NOUN_HOMEMADE_BUNDLE = 0x1D3,
	NOUN_LEFT = 0x1D4,
	NOUN_RIGHT = 0x1D5,
	NOUN_UP = 0x1D6,
	NOUN_DOWN = 0x1D7,
	NOUN_WEST = 0x1D8,
	NOUN_DESERT_TO_WEST = 0x1D9,
	NOUN_CROSS = 0x1DA,
	NOUN_DESERT_TO_EAST = 0x1DB,
	NOUN_DESERT_TO_SOUTH = 0x1DC,
	NOUN_DESERT_TO_NORTH = 0x1DD,
	NOUN_DESERT = 0x1DE,
	NOUN_POWERSTONE = 0x1DF,
	NOUN_BONES = 0x1E0,
	NOUN_TENT = 0x1E1,
	NOUN_BUSH = 0x1E2,
	NOUN_SANWE = 0x1E3,
	NOUN_TANGLE = 0x1E4,
	NOUN_SAND = 0x1E5,
	NOUN_MAGIC_GRAPES = 0x1E6,
	NOUN_ROCS_NEST = 0x1E7,
	NOUN_GRAPE_VINE = 0x1E8,
	NOUN_STRANGE_SQUARE = 0x1E9,
	NOUN_WATER_SPHERE = 0x1EA,
	NOUN_EAST_END_OF_ISLAND = 0x1EB,
	NOUN_ISLAND = 0x1EC,
	NOUN_SECRET_MESSAGE = 0x1ED,
	NOUN_FIND = 0x1EE,
	NOUN_SAND_NEAR_STONES = 0x1EF,
	NOUN_DESERT_SKY = 0x1F0,
	NOUN_POOL = 0x1F1,
	NOUN_PALM_TREE = 0x1F2,
	NOUN_OASIS = 0x1F3,
	NOUN_LEAN_TO = 0x1F4,
	NOUN_TRADER = 0x1F5,
	NOUN_SIGN = 0x1F6,
	NOUN_WATER_FLOW = 0x1F7,
	NOUN_FLOATING_DISK = 0x1F8,
	NOUN_GNARLED_ROOT = 0x1F9,
	NOUN_SNAKE_PIT = 0x1FA,
	NOUN_MARKER = 0x1FB,
	NOUN_SHAMAN = 0x1FC,
	NOUN_GUARDHOUSE = 0x1FD,
	NOUN_BONE_TREE = 0x1FE,
	NOUN_EAR_ROCK = 0x1FF,
	NOUN_MOUTH_ROCK = 0x200,
	NOUN_NOSE_ROCK = 0x201,
	NOUN_NEW_BUNDLE = 0x202,
	NOUN_LIZARD = 0x203,
	NOUN_ROC = 0x204,
	NOUN_ROCS_NEST2 = 0x205,
	NOUN_SELECT = 0x206,
	NOUN_PURPLE_GEM = 0x207,
	NOUN_PURPLE_STONE = 0x208,
	NOUN_GREEN_STONE = 0x209,
	NOUN_PATH = 0x20A,
	NOUN_GUARDS = 0x20B,
	NOUN_LAMP = 0x20C,
	NOUN_SCIMITAR = 0x20D,
	NOUN_SITTING_PILLOW = 0x20E,
	NOUN_WATER_GOURD = 0x20F,
	NOUN_JAR = 0x210,
	NOUN_TENT_POLE = 0x211,
	NOUN_EXIT = 0x212,
	NOUN_PARAPHERNALIA = 0x213,
	NOUN_SLATHAN_NI_PATAN3 = 0x214,
	NOUN_EYE_ROCK = 0x215,
	NOUN_BODY_TREE = 0x216,
	NOUN_CLEARING = 0x217,
	NOUN_TENTACLES = 0x218,
	NOUN_SPELL_SHIELD = 0x219,
	NOUN_POOL_MONSTER = 0x21A,
	NOUN_SHIFTER_BOULDER = 0x21B,
	NOUN_DEAD_TREE = 0x21C,
	NOUN_PIT = 0x21D,
	NOUN_SHIFTER_VILLAGE = 0x21E,
	NOUN_SLATHAN_SKY = 0x21F,
	NOUN_SHIFTER = 0x220,
	NOUN_WRECKED_BRIDGE = 0x222,
	NOUN_SHACK = 0x223,
	NOUN_WRECKED_SHACK = 0x224,
	NOUN_WISE_SHIFTER = 0x225,
	NOUN_GRASS = 0x226,
	NOUN_ENTRANCE_TO_MAZE = 0x227,
	NOUN_TOPIARY_TOAD = 0x228,
	NOUN_BOULDER = 0x229,
	NOUN_MUSHROOM = 0x22A,
	NOUN_SLATHAN_SKY2 = 0x22B,
	NOUN_GRETA = 0x22C,
	NOUN_TREE_STUMP = 0x22D,
	NOUN_SANCTUARY_WOODS = 0x22E,
	NOUN_TOADS = 0x22F,
	NOUN_DOOFUS = 0x230,
	NOUN_SHIFTING_MONSTER = 0x231,
	NOUN_SPRITE = 0x232,
	NOUN_MAZE = 0x233,
	NOUN_TOPIARY_TOADSTOOL = 0x234,
	NOUN_TOPIARY_GARGOYLE = 0x235,
	NOUN_TOPIARY_DRAGON = 0x236,
	NOUN_GUARDIAN = 0x237,
	NOUN_BUTTERFLY_KING = 0x238,
	NOUN_ROBE = 0x239,
	NOUN_CEDAR_CHEST = 0x23A,
	NOUN_DRAGONSPHERE2 = 0x23B,
	NOUN_PATH_TO_HIGHTOWER2 = 0x23C,
	NOUN_CALIPH = 0x23D
};

class SceneFactory {
public:
	static SceneLogic *createScene(MADSEngine *vm);
};

/**
 * Specialized base class for Dragonsphere game scenes
 */
class DragonsphereScene : public SceneLogic {
protected:
	DragonsphereGlobals &_globals;
	GameDragonsphere &_game;
	MADSAction &_action;

	/**
	 * Forms an animation resource name
	 */
	Common::String formAnimName(char sepChar, int suffixNum);

	/**
	 * Plays appropriate sound for entering varous rooms
	 */
	void lowRoomsEntrySound();
public:
	/**
	 * Constructor
	 */
	DragonsphereScene(MADSEngine *vm);

	void sub7178C();
};

class SceneInfoDragonsphere : public SceneInfo {
	friend class SceneInfo;
protected:
	virtual void loadCodes(MSurface &depthSurface, int variant);

	virtual void loadCodes(MSurface &depthSurface, Common::SeekableReadStream *stream);

	/**
	* Constructor
	*/
	SceneInfoDragonsphere(MADSEngine *vm) : SceneInfo(vm) {}
};

// TODO: Temporary, remove once implemented properly
class DummyScene : public DragonsphereScene {
public:
	DummyScene(MADSEngine *vm) : DragonsphereScene(vm) {
		warning("Unimplemented scene");
	}

	virtual void setup() {}
	virtual void enter() {}
	virtual void actions() {}
};

} // End of namespace Dragonsphere

} // End of namespace MADS

#endif /* MADS_DRAGONSPHERE_SCENES_H */
