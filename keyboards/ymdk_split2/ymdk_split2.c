/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>
Modified 2018 Kenneth A. <github.com/krusli>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ymdk_split2.h"

void keyboard_pre_init_kb(void) {
    led_init_ports();
    keyboard_pre_init_user();
}

void led_init_ports(void) {
    setPinOutput(D0);
}

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        writePin(D0, led_state.num_lock);
    }
    return true;
}
