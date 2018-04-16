/*
 *  Author: Atunero
 *  Mod: CC_Insignia
 *  File= "config.cpp"
 */

#include "macros.hpp"





/*****************************************************************************/
/*  CFG PATCHES                                                              */
/*****************************************************************************/
class CfgPatches
{
	class 1ra_markers
	{
		author = "Cavallers del Cel";
		units[] = 
		{

		};
		weapons[] = 
		{
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


/*****************************************************************************/
/*  CFG UNIT INSIGNIA                                                        */
/*****************************************************************************/
class CfgUnitInsignia
{
	class insignia_ccescut
	{
		displayName = "Escut Cavallers del Cel";
		author = "Cavallers del Cel";
		texture = "\1ra_patches\data\img\ccescutpatch.paa";
		textureVehicle = "";
	};

	class insignia_1ra
	{
		displayName = "Insignia 1RA";
		author = "Cavallers del Cel";
		texture = "\1ra_patches\data\img\1rapatch.paa";
		textureVehicle = "";
	};
};
