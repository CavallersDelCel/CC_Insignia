/*
 *  Author: Moska
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
/*  CFG MARKERS                                                              */
/*****************************************************************************/
class CfgMarkers
{
	class flag_EU;
	
	class mrk_senyera : flag_EU
	{
		name = "Senyera";
		size = 32;
		icon = "\1ra_markers\data\img\senyera.paa";
		shadow = 0;
		scope = 1;
		color[] = {1, 1, 1, 1};
	};

	class mrk_quarterada_mall : mrk_senyera
	{
		name = "Quarterada de Mallorques";
		icon = "\1ra_markers\data\img\quarterada_mall.paa";
	};

	class mrk_quarterada_bar : mrk_senyera
	{
		name = "Quarterada de Barcelona";
		icon = "\1ra_markers\data\img\quarterada_bar.paa";
	};

	class mrk_sant_jordi : mrk_senyera
	{
		name = "Creu de Sant Jordi";
		icon = "\1ra_markers\data\img\sant_jordi.paa";
	};

	class mrk_cc : mrk_senyera
	{
		name = "Cavallers del Cel";
		icon = "\1ra_markers\data\img\cc.paa";
	};

	class mrk_1ra : mrk_senyera
	{
		name = "1er Regiment Aerotransportat";
		icon = "\1ra_markers\data\img\1ra.paa";
	};
};
