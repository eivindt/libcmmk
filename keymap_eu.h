/*
 * This file is part of libcmmk.
 *
 * libcmmk is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * libcmmk is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libcmmk.  If not, see <http://www.gnu.org/licenses/>.
 */

/* XXX = unassigned */
static keyboard_layout layout_eu_s = {
	{-1}, {-1}, {-1}, {-1}, {-1}, {-1}
};

static keyboard_layout layout_eu_l = {
	/*
	 ESC  F1   F2   F3   F4  XXX  F5   F6   F7   F8  XXX  F9   F10  F11  F12  PRN  SCL  PAU  P1   P2   P3   P4	*/
	{11,  22,  30,  25,  27, -1,  7,   51,  57,  62, -1,  86,  87,  83,  85,  79,  72,  0,   101, 109, 117, 119},

	/*
	 ^    1    2    3    4    5    6    7    8    9    0    ß    ´   XXX  BCK  INS HOM PUP #LCK #/   #*   #- */
	{14,  15,  23,  31,  39,  38,  46,  47,  55,  63,  71,  70,  54, -1,  81,  3,  1,  2,  100, 108, 116, 118},

	/*
	 TAB  Q   W   E   R   T   Z/Y  U   I   O   P   Ü/[ +/]  XXX  ENT  DEL  END  PDN  #7  #8   #9   #+ */
	{9,   8,  16, 24, 32, 33, 41,  40, 48, 56, 64, 65, 49, -1,   84,  94,  92,  88,  96, 104, 112, 110},

	/*
	 CAP  A   S   D   F   G   H   J   K   L   Ö/;  Ä/'  #/C42  XXX XXX XXX XXX XXX #4  #5   #6   XXX */
	{17,  10, 18, 26, 34, 35, 43, 42, 50, 58, 66,  67,  68,    -1, -1, -1, -1, -1, 97, 105, 113, -1},

	/*
	LSHFT </C45 Y/Z  X   C   V   B   N   M   ,   .   -// XXX XXX RSHFT XXX UP  XXX #1 #2    #3   #ENTER */
	{73,  19,   12,  20, 28, 36, 37, 45, 44, 52, 60, 69, -1, -1, 74,   -1, 80, -1, 98, 106, 114, 111},

	/*
	LCTRL LWIN LALT XXX XXX XXX SPACE XXX XXX XXX RALT RWIN FN XXX  RCTRL LEFT DOWN RIGHT #0   XXX #,   XXX */
	{6,   90,  75,  -1, -1, -1, 91,   -1, -1, -1, 77,  78,  61, -1, 4,    95,  93,  5,    107, -1, 115, -1 },

	{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
};

static keyboard_layout layout_eu_mk730 = {
	/*
	ESC        F1    F2   F3    F4    XXX   F5    F6    F7    F8   XXX   F9    F10   F11   F12   PRN   SCL   PAU   XXX   XXX   XXX   XXX   */
	{ 7,       28,   35,  42,   49,  -1,    63,   70,   77,   84, -1,    91,   98,   105,  112,   119, 126,  133,  -1,  -1,  -1,  -1},

	/*
	^     1     2     3     4     5     6     7    8     9     0          ß     ´     XXX   BCK   INS   HOM   PUP   XXX   XXX  XXX   XXX */
	{8,  22,    29,  36,   43,   50,   57,   64,  71,   78,   85,        92,   99,   -1,   113,   120,  127,  134,   -1,   -1,   -1,   -1},

	/*
	TAB   Q     W     E     R     T    Z/Y   U     I     O     P         Ü/[   +/]   XXX   ENT   DEL   END   PDN   XXX  XXX   XXX   XXX    */
	{9,  23,    30,  37,   44,   51,   58,  27,   72,   79,   86,        100,   100,   -1,   115,  121,  128,  135,   -1,   -1,   -1,   -1},

	/*
t 	CAP   A     S     D     F     G     H     J    K     L     Ö/;       Ä/'   #/C42 XXX   XXX   XXX   XXX   XXX   XXX   XXX   XXX   XXX   */
	{10,  24,  31,   38,   45,   52,   59,   66,  73,   80,   87,        101,   108,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1},

	/*
  LSHFT </C45 Y/Z   X     C     V     B     N     M    ,     .     -//   XXX   XXX   RSHFT XXX   UP    XXX  XXX   XXX   XXX   XXX */
    {11,  18,  25, 32,   39,   46,   53,   60,   31,  74,   81,   88,   -1,   -1,    116,   -1,   130,   -1,  -1,   -1,   -1,    -1},

	/*
  LCTRL LWIN  LALT XXX  XXX  XXX   SPACE  XXX   XXX   XXX  RALT              RWIN  FN    XXX   RCTRL LEFT  DOWN  RIGHT XXX   XXX   XXX   XXX    */
    {12,  19,   26, -1,  -1,  -1,     54,  -1,   -1,   -1,  82,               89,   96,   -1,   117,   124,   131,  138,   -1,   -1,   -1,   -1},

	/*
	XXX   LED1  LED2  LED3  LED4  XXX   LED6  LED7  LED8  LED9  LED10 LED11 LED12 LED13 LED14 LED15 LED16   LED17 LED18 LED19 LED20 XXX  LED22 LED23 LED24 LED25 XXX */
	{-1,     1,    2,    3,    4,  -1,   20,    27,   34,   41,    55,   62,   69,   76,   90,  104,  111,  118,  125,  120,  126,   -1,  141, 142,   143,  144, -1}
};

static keyboard_layout layout_eu_mk750 = {
	/*
	ESC   F1    F2    F3    F4    XXX   F5    F6    F7    F8    XXX   F9    F10   F11   F12   PRN   SCL   PAU   MUT   PLA   REW   FWD   */
	{96,  97,   98,   99,   104,  -1,   105,  106,  112,   113, -1,   114,  67,   68,   69,   102,  103,  107,  111,  110,  108,  109},

	/*
	^     1     2     3     4     5     6     7     8     9     0     ß     ´     XXX   BCK   INS   HOM   PUP   #LCK  #/    #*    #-    */
	{0,   1,    8,    9,    16,   17,   24,   25,   32,   33,   40,   41,   48,   -1,   49,   56,   57,   64,   72,   73,   80,   81},

	/*
	TAB   Q     W     E     R     T     Z/Y   U     I     O     P     Ü/[   +/]   XXX   ENT   DEL   END   PDN   #7    #8    #9    #+    */
	{2,   3,    10,   11,   18,   19,   26,   27,   34,   35,   42,   43,   50,   -1,   52,   58,   59,   66,   74,   75,   82,   83},

	/*
t 	CAP   A     S     D     F     G     H     J     K     L     Ö/;   Ä/'   #/C42 XXX   XXX   XXX   XXX   XXX   #4    #5     #6   XXX   */
	{4,   5,    12,   13,   20,   21,   28,   29,   36,   37,   44,   45,   119,  -1,   -1,   -1,   -1,   -1,   76,   77,   84,   -1},

	/*
	LSHFT </C45 Y/Z   X     C     V     B     N     M     ,     .     -//   XXX   XXX   RSHFT XXX   UP    XXX   #1    #2    #3    #ENTER */
	{6,   118,  7,    14,   15,   22,   23,   30,   31,   38,   39,   46,   -1,   -1,   47,   -1,   61,   -1,  78,   79,   86,    85},

	/*
	LCTRL LWIN  LALT  XXX   XXX   XXX   SPACE XXX   XXX   XXX   RALT  RWIN  FN    XXX   RCTRL LEFT  DOWN  RIGHT #0    XXX   #,    XXX    */
	{91,  90,   92,   -1,   -1,   -1,   93,   -1,   -1,   -1,   53,   95,   60,   -1,   54,   63,   62,   70,   71,   -1,   87,   -1},

	/*
	XXX   LED1  LED2  LED3  LED4  XXX   LED6  LED7  LED8  LED9  LED10 LED11 LED12 LED13 LED14 LED15 XXX   LED17 LED18 LED19 LED20 XXX   */
	{-1,  128,  140,  126,  141,  -1,   142,  125,  143,  151,  124,  123,  122,  150,  121,  120,  -1,   137,  135,  136,  138,  -1}
};
