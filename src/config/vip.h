/**
 * This file is part of Hercules.
 * http://herc.ws - http://github.com/HerculesWS/Hercules
 *
 * Copyright (C) 2012-2018  Hercules Dev Team
 * Copyright (C)  Athena Dev Teams
 *
 * Hercules is free software: you can redistribute it and/or modify
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
 */
#ifndef CONFIG_VIP_H
#define CONFIG_VIP_H

/**
 * Hercules configuration file (http://herc.ws)
 * For detailed guidance on these check http://herc.ws/wiki/SRC/config/
 **/

/**
 * @INFO: This file holds general-purpose vip settings, for class-specific ones check /src/config/classes folder
 **/

/// Uncomment to enable VIP system.
#define VIP_ENABLE
#ifdef VIP_ENABLE
	#define MIN_STORAGE 300 // Default number of storage slots.
	#define MIN_CHARS 3 // Default number of characters per account.
	#define MAX_CHAR_VIP 6 // This must be less than MAX_CHARS
	#define MAX_CHAR_BILLING 0 // This must be less than MAX_CHARS
#else
	#define MIN_STORAGE 600 // If the VIP system is disabled the min = max.
	#define MIN_CHARS 9 // Default number of characters per account.
	#define MAX_CHAR_BILLING 0
	#define MAX_CHAR_VIP 0
#endif


/// Enable VIP script changes? (requires VIP_ENABLE)
/// The primary effects of this are restrictions on non-VIP players, such as requiring
/// a Reset Stone to change into third classes, paying more for equipment upgrades, and
/// so forth. Note that the changes are based on euRO, not iRO.
#define VIP_SCRIPT 0


#endif // CONFIG_RENEWAL_H
