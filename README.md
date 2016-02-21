# kiosk-browser

This project aims to create a fullscreen web browser for kiosk-oriented
applications. Screen resolution is determined dynamically, and the starting web
URL is defined as a compile-time macro `DEFAULT_URL` in `browser.c`.

# Usage

Ensure that `libwebkit-dev`, `xterm`, and `build-essential` are installed, then
type `make` to build the browser. The application will be compiled to an
executable named `browser` which should be installed to `/usr/bin`. Next, run
the browser by typing `startx -e browser`.

# License

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your option) any
later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along
with this program. If not, see <http://www.gnu.org/licenses/>.
