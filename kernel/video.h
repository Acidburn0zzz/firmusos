/*
This file is part of FirmusOS.

FirmusOS is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

FirmusOS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with FirmusOS.  If not, see <http://www.gnu.org/licenses/>.

    Giacomo Picchiarelli <gpicchiarelli@gmail.com>
*/

#ifndef VIDEO_DUMMY_H
#define VIDEO_DUMMY_H

enum vga_color
{
	COLOR_BLACK = 0,
	COLOR_BLUE = 1,
	COLOR_GREEN = 2,
	COLOR_CYAN = 3,
	COLOR_RED = 4,
	COLOR_MAGENTA = 5,
	COLOR_BROWN = 6,
	COLOR_LIGHT_GREY = 7,
	COLOR_DARK_GREY = 8,
	COLOR_LIGHT_BLUE = 9,
	COLOR_LIGHT_GREEN = 10,
	COLOR_LIGHT_CYAN = 11,
	COLOR_LIGHT_RED = 12,
	COLOR_LIGHT_MAGENTA = 13,
	COLOR_LIGHT_BROWN = 14,
	COLOR_WHITE = 15,
};

static const unsigned int VGA_WIDTH = 80;
static const unsigned int VGA_HEIGHT = 25;

class Video
{
public:
  Video();
  ~Video();
  void clear();
  void write(char *cp);
  void put(char c);
private:
  unsigned short *videomem;
  unsigned int offset;
  unsigned int pos;
};

#endif