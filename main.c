 /************************************************************************
  *
  * delay
  * Copyright (C) 2001  Marcus Jansson <mjansson256@yahoo.se>
  * Author: Marcus Jansson
  * Date: 2012-05-09
  *
  * Small program that make a delay during a number of seconds, given by
  * the first parameter. The program does not try to delay very accurate.
  * Primary usage for this program is in scripts or CLI when "sleep" is
  * not available.
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  *
  ************************************************************************/
#include <stdio.h>
#include <unistd.h>

void help(char ** prgname)
{
	printf("Copyright (C) 2012 Marcus Jansson <mjansson256@yahoo.se>\n");
	printf("Usage: %s s\n", *prgname);
	printf("Where: ");
	printf("	s = nr of seconds to delay\n");
}

int main(int argc, char ** argv)
{

	if(argc < 2) {
		help((char **)&argv[0]);
		return 0;
	}

	if(argc >= 2) {
		if(*argv[1] == '-') {
			help((char **)&argv[0]);
			return 0;
		}
		sleep(atoi(argv[1]));
	}
	return 0;
}


