/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* Select hand configuration */
#define MASTER_LEFT


// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 240

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Enable macros. This must be set to the number you have defined in your keymap!
// #define COMBO_COUNT 1

// Turn on capsword if left shift is double pressed.
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// Time in ms for leader key to timeout 
//#define LEADER_TIMEOUT 300
// Let's reset that timeout on every key press to keep thing sane.
//#define LEADER_PER_KEY_TIMING
