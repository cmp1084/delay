########################################################################
#
#  delay
#
#  Copyright (C) 2012 Marcus Jansson <mjansson256@yahoo.se>
#
#  Small program that make a delay during a number of seconds, given by
#  the first parameter. The program does not try to delay very accurate.
#  Primary usage for this program is in scripts or CLI when "sleep" is
#  not available.
#
#  Author: Marcus Jansson
#  Date: 2012-05-09
#
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
########################################################################
PROGRAM = delay

ifndef $(INSTALLDIR)
	INSTALLDIR = /usr/local/sbin
endif

CC = gcc

CFLAGS = -Os

SRC = main.c
OBJ = $(SRC:%.c=%.o)

all:
	$(CC) $(CFLAGS) $(SRC) -o$(PROGRAM)

install:
	test -d $(INSTALLDIR) || mkdir $(INSTALLDIR)
	cp $(PROGRAM) $(INSTALLDIR)

uninstall:
	rm -f $(INSTALLDIR)/$(PROGRAM)

clean:
	rm -rf $(PROGRAM) *.o