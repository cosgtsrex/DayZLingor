
class CfgPatches {
	class ibr_as350lingor {
		units[] = {"ibr_as350_cop", "ibr_as350_gal", "ibr_as350_pmc"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAAir", "CAWeapons"};
	};
};

class CfgFactionClasses {
	class LIN_army {
		displayName = "Lingor Army (GAL)";
		priority = 5;
		side = 1;
	};
	
	class ibr_venator_faction {
		displayName = "Venator PMCs";
		priority = 90;
		side = 1;
	};
	
	class ibr_police_unit {
		displayName = "Lingor Police";
		priority = 5;
		side = "TWest";
	};
};

class CfgWeapons {
	class MGun;	// External class reference
	class RocketPods;	// External class reference
	
	class NEXTERM621_20MM : MGun {
		scope = 1;
		displayName = "Nexter M621 20mm";
		magazines[] = {"180Rnd_20x102_M621"};
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.070795, 1, 15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03", 0.070795, 1, 15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02", 0.070795, 1, 15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01", 0.070795, 1, 15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01", 0.070795, 1, 15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02", 0.070795, 1, 15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03", 0.070795, 1, 15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04", 0.070795, 1, 15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01", 0.070795, 1, 15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02", 0.070795, 1, 15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03", 0.070795, 1, 15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04", 0.070795, 1, 15};
		soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		soundContinuous = 0;
		aiDispersionCoefY = 2;
		aiDispersionCoefX = 2;
		magazineReloadTime = 5;
		canLock = 0;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 0.7;
		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class manual : MGun {
			displayName = "HE";
			autoFire = 1;
			begin1[] = {"ibr_as350lingor\sound\m621_20mm.wav", 1.77828, 1, 1000};
			begin2[] = {"ibr_as350lingor\sound\m621_20mm.wav", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			reloadTime = 0.075;
			dispersion = 0.0012;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.3;
			aiRateOfFireDistance = 600;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 500;
			midRangeProbab = 0.01;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		
		class short : close {
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		
		class medium : close {
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		
		class far : close {
			burst = 3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	
	class FFARLauncher_7 : RocketPods {
		magazines[] = {"7Rnd_FFAR"};
		displayName = "FFAR Launcher";
	};
};

class CfgMagazines {
	class VehicleMagazine;	// External class reference
	class 750Rnd_M197_AH1;	// External class reference
	
	class 180Rnd_20x102_M621 : 750Rnd_M197_AH1 {
		scope = 2;
		displayName = "20x102 M621";
		ammo = "ibr_B_20mm_HE";
		count = 180;
		initSpeed = 985;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	
	class 7Rnd_FFAR : VehicleMagazine {
		scope = 2;
		displayName = $STR_DN_FFAR;
		ammo = "R_Hydra_HE";
		count = 7;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"\ca\weapons\Data\Sound\rockets\rocketLauncher_Shot21", 3.16228, 1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload", 0.000316228, 1};
	};
};

class CfgAmmo {
	class B_20mm_AP;	// External class reference
	
	class ibr_B_20mm_HE : B_20mm_AP {
		hit = 30;
		indirectHit = 12;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.4;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ibr_as350lingor\tracer_orange";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 2.33;
	};
};
class ViewPilot;	// External class reference
class AnimationSources;	// External class reference
class UserActions;	// External class reference
class HelicopterWreck;	// External class reference

class CfgVehicles {
	class AllVehicles;	// External class reference
	
	class Air : AllVehicles {};
	
	class Helicopter : Air {};
	
	class ibr_as350lingor : Helicopter {
		destrType = "DestructWreck";
		displayName = "AS-350 Squirrel";
		scope = 2;
		ACE_canLift = 1;
		ACE_GeoLifterAttachment[] = {{0, 0, 0}};
		ACE_weight = 5224;
		hideWeaponsCargo = 1;
		radartype = 0;
		side = 1;
		transportMaxMagazines = 20;
		transportMaxWeapons = 2;
		transportmaxbackpacks = 1;
		transportSoldier = 5;
		crew = "LIN_Soldier_Pilot";
		Icon = "\ibr_as350lingor\IconFireEcureuil.paa";
		picture = "\ibr_as350lingor\FireEcureuil.paa";
		vehicleClass = "Air";
		faction = "LIN_army";
		model = "\ibr_as350lingor\ibr_as350.p3d";
		hasGunner = 0;
		nightVision = 1;
		memoryPointsGetInCargo[] = {"pos codriver", "pos cargo", "pos driver"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir", "pos cargo dir", "pos driver dir"};
		driverAction = "UH1Y_Pilot";
		driverInAction = "UH1Y_Pilot";
		cargoAction[] = {"UH1Y_Cargo02", "UH1Y_Cargo03", "UH1Y_Cargo03", "UH1Y_Cargo02", "UH1Y_Cargo01", "UH1Y_Cargo01", "UH1Y_Cargo01"};
		cargoIsCoDriver[] = {0, 0};
		driverCanSee = 31;
		gunnerCanSee = 31;
		type = 2;
		maxSpeed = 200;
		enableSweep = 1;
		armor = 25;
		damageResistance = 0.00244;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		cost = 10000000;
		rotorBig = "velka vrtule staticka";
		rotorBigBlend = "velka vrtule blur";
		rotorSmall = "mala vrtule staticka";
		rotorSmallBlend = "mala vrtule blur";
		threat[] = {1, 0.85, 0.1};
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		extCameraPosition[] = {0, 2, -16};
		weapons[] = {};
		magazines[] = {};
		gunAimDown = 1.0;
		soundGetIn[] = {"\ca\Sounds\Air\Noises\heli_door_01", 0.316228, 1};
		soundGetOut[] = {"\ca\Sounds\Air\Noises\heli_door_01", 0.316228, 1, 40};
		soundEnviron[] = {"", 0.0316228, 1.0};
		soundDammage[] = {"Ca\sounds\Air\Noises\alarm_loop1", 0.316228, 1};
		soundEngineOnInt[] = {"ca\sounds\Air\UH1Y\int\int-start-final", 0.446684, 1.0};
		soundEngineOnExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-start", 0.446684, 1.0, 700};
		soundEngineOffInt[] = {"ca\sounds\Air\UH1Y\int\int-stop-final", 0.446684, 1.0};
		soundEngineOffExt[] = {"ca\sounds\Air\UH1Y\ext\ext-motor-stop", 0.446684, 1.0, 700};
		
		class Sounds {
			class Engine {
				sound[] = {"ibr_as350lingor\Sound\heliwhine", 1.0, 1.0};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			
			class Engine2 {
				sound[] = {"ibr_as350lingor\Sound\AS350_engine _out2", 7.0, 1.0};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "camPos*(0 max (rotorSpeed-0.4))";
			};
			
			class EngineIn {
				sound[] = {"ibr_as350lingor\Sound\heliwhine_in", 1.0, 1.0};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			
			class EngineIn2 {
				sound[] = {"ibr_as350lingor\Sound\AS350_engine _out2", 1.0, 1.0};
				frequency = "(randomizer*0.05+0.08)*rpm";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.4))";
			};
		};
		
		class Turrets {};
		
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1.0;
			};
			
			class right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				brightness = 1.0;
			};
		};
	};
	
	class ibr_as350lingor_wreck : HelicopterWreck {
		scope = 1;
		
		class Armory {
			disabled = 1;
		};
		model = "\ibr_as350lingor\ibr_as350_wreck.p3d";
		typicalCargo[] = {};
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		transportSoldier = 3;
		
		class Eventhandlers {};
	};
	
	
	class ibr_as350_pmc : ibr_as350lingor {
		model = "\ibr_as350lingor\ibr_as350_pmc.p3d";
		faction = "ibr_venator_faction";
		vehicleClass = "Air";
		displayName = "AS-350 Squirrel (PMC)";
		crew = "ibr_venator_escort";
	};
	
	class ibr_as350_pol : ibr_as350lingor {
		model = "\ibr_as350lingor\ibr_as350_pol.p3d";
		faction = "ibr_police_unit";
		vehicleClass = "Air";
		displayName = "AS-350 Squirrel (Police)";
		crew = "ibr_cop1";
	};
};
