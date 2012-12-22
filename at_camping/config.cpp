#define IMAGEPATH \at\at_camping\data

class CfgPatches
{
	class at_camping
	{
		units[]				= {};
		weapons[]			= {};
		requiredVersion		= 0.1;
		requiredAddons[]	= {"CAUI"};
		author				= "Armed Tactics";
	};
};

class CfgMods
{
	class at_camping
	{
		dir				= "";
		name			= "AT Camping";
		picture			= "";
		hidePicture		= 0;
		hideName		= 1;
		action			= "http://www.armed-tactics.org";
	};
};

class CfgSounds
{

};

class CfgVehicles
{
	class Logic;
	#include "modules.hpp"
};