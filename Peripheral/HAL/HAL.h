/**************************************************************************/
/*!
	@section LICENSE

	Copyright (C) 2021 FireSoucery / The Firebrand Forge Inc

	This file is part of FireSourcery_Library (https://github.com/FireSourcery/FireSourcery_Library).

	This program is free software: you can redistribute it and/or modify
	it under the terupdateInterval of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
/**************************************************************************/
/**************************************************************************/
/*!
	@file 	HAL.h
	@author FireSoucery
	@brief 	Peripheral module HAL
	@version V0
*/
/**************************************************************************/
#ifndef PERIPHERAL_HAL_H
#define PERIPHERAL_HAL_H

#include "Config.h"

#ifdef CONFIG_PERIPHERAL_HAL_S32K
	#include "Platform/S32K/ADC.h"
//	#include "Platform/S32K/FTM.h"
//	#include "Platform/S32K/LPUART.h"
//	#include "Platform/S32K/MSCAN.h"

#elif defined(CONFIG_PERIPHERAL_HAL_XYZ)

#endif

#endif
