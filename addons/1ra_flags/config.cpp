/*
 *  Author: Atunero
 *  Mod: CC_Flags
 *  File= "config.cpp"
 */

#include "macros.hpp"





/*****************************************************************************/
/*  CFG PATCHES                                                              */
/*****************************************************************************/
class CfgPatches
{
	class 1ra_flags
	{
		author = "Cavallers del Cel";
		displayName="CC_Flags";
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
/*  CFG VEHICLES                                                             */
/*****************************************************************************/
class CfgVehicles
{
	class FlagCarrier;

	class CC_Flag_1ra: FlagCarrier
	{
		author="Cavallers del Cel";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Bandera 1RA";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\1ra_flags\data\img\1raflag.paa'";
		};
	};

	class CC_Flag_CavallersDelCel: FlagCarrier
	{
		author="Cavallers del Cel";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Bandera CC";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\1ra_flags\data\img\cavallersdelcelflag.paa'";
		};
	};

	class CC_Flag_Senyera: FlagCarrier
	{
		author="Cavallers del Cel";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_NATO_F.jpg";
		scope=2;
		scopeCurator=2;
		displayName="Bandera Senyera";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\1ra_flags\data\img\senyeraflag.paa'";
		};
	};
}

