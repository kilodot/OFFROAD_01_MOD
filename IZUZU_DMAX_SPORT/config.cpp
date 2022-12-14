class CfgPatches
{
	class IZUZU_DMAX_ST
	{
		units[]=
		{
			"DMAX_ST",
			// "DMAX_ST_M2"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"a3_soft_f"
		};
	};
};

class CfgVehicles
{
	class Offroad_01_base_F;
	
	class DMAX_ST_base: Offroad_01_base_F
	{
		class NewTurret;
		class AnimationSources;
		class EventHandlers;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1
			{
			};
			class HitGlass2;
		};
		class UserActions;
		class VehicleTransport;

		author="kilodot, Bohemia Interactive";
		mapSize=6.8600001;
		_generalMacro="DMAX_ST_base";
		displayName="Izuzu DMAX ST Base";
		nameSound="veh_car";

		thrustDelay=0.125;
		brakeIdleSpeed=1.78;
		maxSpeed=250;
		fuelCapacity=20;
		
		antiRollbarForceCoef=1.9;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=150;
		idleRpm=900;
		redRpm=5500;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				"4.5*(0.635^0)",
				"D2",
				"4.5*(0.635^1)",
				"D3",
				"4.5*(0.635^2)",
				"D4",
				"4.5*(0.635^3)",
				"D5",
				"4.5*(0.635^4)",
			};
			TransmissionRatios[]=
			{
				"High",
				7
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.94999999;
			gearDownMaxCoef=0.85000002;
			gearUpMinCoef=0.64999998;
			gearDownMinCoef=0.55000001;
			transmissionDelay=2;
		};
		simulation="carx";
		dampersBumpCoef=3;
		differentialType="all_limited";
		frontRearSplit=0.25;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.3;
		clutchStrength=30;
		engineMOI=0.8;
		enginePower=500;
		maxOmega= 576;
		peakTorque=750;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=0.5;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.1,0.9},
			{0.3,0.925},
			{0.5,1},
			{0.7,0.9},
			{0.9,0.7.5},
			{1.7,0}
		};
		changeGearMinEffectivity[]={1,0.15000001,1,1,1,1,1,1};
		switchTime=0.20;
		latency=0.5;
		turnCoef=3.5;

		class Wheels
		{
			class LF
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.3";
				mass=30;
				MOI=6;
				dampingRate=1;
				dampingRateDamaged=5;
				dampingRateInAir=0.80000001;
				dampingRateDestroyed=5000;
				maxBrakeTorque=7500;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				maxDroop=0.1;
				sprungMass=400;
				springStrength=14400;
				springDamperRate="1920*2";
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=2.5;
				latStiffY=18;
				frictionVsSlipGraph[]=
				{
					{0,1.75},
					{0.5,1.35},
					{1,1.2}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3000;
				frictionVsSlipGraph[]=
				{
					{0,2},
					{0.5,1.53},
					{1,1.36}
				};
			};
			class RF: LF
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3000;
				frictionVsSlipGraph[]=
				{
					{0,2.3},
					{0.5,2.0999999},
					{1,2}
				};
			};
		};

		class Reflectors
		{
			class Left
			{
				color[]={1.9,1.8,1.7};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=30;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=100;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.050000001;
					hardLimitStart=50;
					hardLimitEnd=80;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class Right3: Right2
			{
				position="light_R_flare2";
				flareSize=0.30000001;
			};
			class Left3: Left2
			{
				position="light_L_flare2";
				flareSize=0.30000001;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2",
				"Left3",
				"Right3"
			}
		};
	};

	class DMAX_ST_unarmed_base: DMAX_ST_base
	{
		author="kilodot, Bohemia Interactive";
		_generalMacro="DMAX_ST_unarmed_base";
		transportSoldier=1;
		cargoProxyIndexes[]={1};
		getInProxyOrder[]={1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				canHideGunner=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=3;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{37.1488,-71.900299},
						{36.4967,92.275703}
					};
					limitsArrayBottom[]=
					{
						{-22.183201,-70.0989},
						{-13.9068,-22.810699},
						{-7.1236,75.684898},
						{-7.8564,102.5826}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos cargo RF";
				memoryPointsGetInGunnerDir="pos cargo RF dir";
				proxyIndex=4;
				forceHideGunner=0;
				canHideGunner=1;
				isPersonTurret=2;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.089901,0.4614}
					};
					limitsArrayBottom[]=
					{
						{-5.6160998,-103.2468},
						{-6.3358998,-86.666603},
						{-4.5173001,-52.222401},
						{-2.1726999,-26.9412},
						{-2.7195001,17.171101},
						{-8.6473999,52.254501},
						{-9.5586996,116.7031}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{38.5373,-12.3438}
					};
					limitsArrayBottom[]=
					{
						{-55.813202,-78.700996},
						{-55.695,-42.974899},
						{-20.534901,-8.1766005},
						{-18.5114,7.3281999},
						{-19.9175,18.901199},
						{-20.0625,26.805099},
						{-19.9485,37.776798},
						{-34.081501,67.225403},
						{-48.6922,80.034798},
						{-47.633099,90.4505}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={5,75};
					CargoTurret_02[]={-15,75};
					CargoTurret_04[]={-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=5;
				animationSourceHatch="gunner_lf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{32.724899,-3.3246}
					};
					limitsArrayBottom[]=
					{
						{-13.8937,-116.0915},
						{-15.9318,-73.923203},
						{-7.7740998,-33.610401},
						{-2.2081001,-11.6789},
						{-2.175,33.696899},
						{-4.7947998,64.996803},
						{-6.1245999,108.4244}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{60.203899,-100.4401}
					};
					limitsArrayBottom[]=
					{
						{-39.821899,-73.344398},
						{-35.159698,-60.962002},
						{-28.0802,-54.4944},
						{-18.1518,-30.9259},
						{-20.7152,12.1939},
						{-36.766602,33.6105},
						{-39.774799,75.873199}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,15};
					CargoTurret_02[]={-75,-5};
					CargoTurret_03[]={-75,75};
				};
			};
		};
	};

	class DMAX_ST_civil_base: DMAX_ST_unarmed_base
	{
		author="kilodot, Bohemia Interactive";
		_generalMacro="DMAX_ST_civil_base";
		features="Randomization: Yes, 6 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];							<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 5)							<br />Camo selections: 2 - the body, wheels and accessories							<br />Script door sources: None							<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction							<br />Executed scripts: \A3\soft_F\Offroad_01\scripts\randomize.sqf 							<br />Firing from vehicles: Positions 2 to 5							<br />Slingload: Slingloadable							<br />Cargo proxy indexes: 1 to 5";
		transportSoldier=1;
		cargoProxyIndexes[]={1};
		getInProxyOrder[]={1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_3";
				memoryPointsGetInGunner="pos cargo RR";
				memoryPointsGetInGunnerDir="pos cargo RR dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				canHideGunner=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{33.820801,-93.961601},
						{40.890598,66.570503}
					};
					limitsArrayBottom[]=
					{
						{-9.4643002,-94.575302},
						{-8.3683004,-67.686699},
						{-9.7173004,43.637199},
						{-10.1082,78.916603}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner="pos cargo LR";
				memoryPointsGetInGunnerDir="pos cargo LR dir";
				proxyIndex=3;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{37.1488,-71.900299},
						{36.4967,92.275703}
					};
					limitsArrayBottom[]=
					{
						{-22.183201,-70.0989},
						{-13.9068,-22.810699},
						{-7.1236,75.684898},
						{-7.8564,102.5826}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner="pos cargo RF";
				memoryPointsGetInGunnerDir="pos cargo RF dir";
				proxyIndex=4;
				forceHideGunner=0;
				canHideGunner=1;
				isPersonTurret=2;
				LODTurnedIn=1200;
				LODTurnedOut=-1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				animationSourceHatch="gunner_rf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.089901,0.4614}
					};
					limitsArrayBottom[]=
					{
						{-5.6160998,-103.2468},
						{-6.3358998,-86.666603},
						{-4.5173001,-52.222401},
						{-2.1726999,-26.9412},
						{-2.7195001,17.171101},
						{-8.6473999,52.254501},
						{-9.5586996,116.7031}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{38.5373,-12.3438}
					};
					limitsArrayBottom[]=
					{
						{-55.813202,-78.700996},
						{-55.695,-42.974899},
						{-20.534901,-8.1766005},
						{-18.5114,7.3281999},
						{-19.9175,18.901199},
						{-20.0625,26.805099},
						{-19.9485,37.776798},
						{-34.081501,67.225403},
						{-48.6922,80.034798},
						{-47.633099,90.4505}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={5,75};
					CargoTurret_02[]={-15,75};
					CargoTurret_04[]={-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction="passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerInAction="vehicle_passenger_stand_1_passenger_flatground_4";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner="pos cargo LF";
				memoryPointsGetInGunnerDir="pos cargo LF dir";
				proxyIndex=5;
				animationSourceHatch="gunner_lf_turn";
				allowLauncherIn=0;
				allowLauncherOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{32.724899,-3.3246}
					};
					limitsArrayBottom[]=
					{
						{-13.8937,-116.0915},
						{-15.9318,-73.923203},
						{-7.7740998,-33.610401},
						{-2.2081001,-11.6789},
						{-2.175,33.696899},
						{-4.7947998,64.996803},
						{-6.1245999,108.4244}
					};
					turnOffset=-180;
				};
				class TurnOut: TurnIn
				{
					limitsArrayTop[]=
					{
						{60.203899,-100.4401}
					};
					limitsArrayBottom[]=
					{
						{-39.821899,-73.344398},
						{-35.159698,-60.962002},
						{-28.0802,-54.4944},
						{-18.1518,-30.9259},
						{-20.7152,12.1939},
						{-36.766602,33.6105},
						{-39.774799,75.873199}
					};
				};
				class dynamicViewLimits
				{
					CargoTurret_01[]={-75,15};
					CargoTurret_02[]={-75,-5};
					CargoTurret_03[]={-75,75};
				};
			};
		};
		accuracy=1.25;
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		class TextureSources
		{
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Beige
			{
				displayName="$STR_A3_TEXTURESOURCES_BEIGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Darkred
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_DARKRED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Bluecustom
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUECUSTOM0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Guerilla_01
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_02
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_020";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_03
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_030";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_04
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_040";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_05
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_050";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_06
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_060";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_07
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_070";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_08
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_080";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_09
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_090";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_10
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_100";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_11
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_110";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
			class Guerilla_12
			{
				displayName="$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_120";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa",
					"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"
				};
				faction[]=
				{
					"BLU_F_F",
					"OPF_G_F",
					"IND_G_F"
				};
			};
		};
		textureList[]=
		{
			"Red",
			1,
			"Beige",
			1,
			"White",
			1,
			"Blue",
			1,
			"Darkred",
			1,
			"Bluecustom",
			1
		};
		animationList[]=
		{
			"HideBumper1",
			0.17,
			"HideBumper2",
			0.5,
			"HideConstruction",
			1,
			"HideDoor3",
			0.33000001
		};
	};

	class DMAX_ST: DMAX_ST_civil_base
	{
		displayName="Izuzu D-Max Sport";
		author="kilodot, Bohemia Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"glass6_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1_damper",
					0
				},
				
				{
					"wheel_2_1_damper",
					0
				},
				
				{
					"wheel_1_2_damper",
					0
				},
				
				{
					"wheel_2_2_damper",
					0
				},
				
				{
					"hide_dashboard_door_l",
					0
				},
				
				{
					"hide_dashboard_door_r",
					0
				},
				
				{
					"hide_daylights",
					0
				},
				
				{
					"hide_reverselights",
					0
				},
				
				{
					"hide_rearlights",
					0
				},
				
				{
					"gunnerlf",
					1
				},
				
				{
					"gunnerlf_pos",
					1
				},
				
				{
					"gunnerrf",
					1
				},
				
				{
					"gunnerrf_pos",
					1
				},
				
				{
					"damagehidegunner_rf",
					0
				},
				
				{
					"damagehidegunner_lf",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"indicatorspeed",
					0
				},
				
				{
					"damagehidemph",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"damagehidefuel",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"damagehiderpm",
					0
				},
				
				{
					"prop_02",
					0
				},
				
				{
					"damagehidetemp",
					0
				},
				
				{
					"damagehidedoor1",
					0
				},
				
				{
					"damagehideglass2",
					0
				},
				
				{
					"damagehidepolice",
					0
				},
				
				{
					"damagehidebackpack_proxy",
					0
				},
				
				{
					"reverse_light",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"beacon1",
					409.72
				},
				
				{
					"beaconsstart",
					0
				},
				
				{
					"beaconsservicesstart",
					0
				},
				
				{
					"beacon2",
					409.72
				},
				
				{
					"beacon3",
					409.72
				},
				
				{
					"beacon4",
					409.72
				},
				
				{
					"beacon5",
					409.72
				},
				
				{
					"beacon6",
					409.72
				},
				
				{
					"beacons1",
					409.72
				},
				
				{
					"beacons2",
					409.72
				},
				
				{
					"beacons3",
					409.72
				},
				
				{
					"beacons4",
					409.72
				}
			};
			hide[]=
			{
				"clan",
				"dashboard",
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.539;
			verticalOffsetWorld=-0.072999999;
			postinit="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_Offroad_01_F.jpg";
		_generalMacro="DMAX_ST";
		scope=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		class EventHandlers: EventHandlers
		{
			postinit="if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
};