class CfgGradFortifications {
   boundingBoxSizeFactor =	1;	//Number - Global size factor of bounding box - smaller means collision detection is less strict
   buildTimeFactor = 1;	//Number - Higher means building takes longer.
   canDemolishDefault = 1; //(1/0) - Can anyone demolish fortifications by default?
   demolitionTimeFactor = 1;
   playerInventorySize = 70;
   vehicleInventorySizeFactor = 2; //Number - Size factor for vehicle inventories.
   fortificationOwnerType = "BUILDER";
   packUpTimeFactor = 1;	//Number - Higher means packing up takes longer.
   canPackUpDefault = 1;	//(1/0) - Can fortification owners pack up fortifications by default?
   canStoreInLandVehicles = 1;	//(1/0) - Can fortifications be stored in land vehicles?
   canStoreInShips = 1;	//(1/0) - Can fortifications be stored in ships?
   canStoreInHelicopters = 1;	//(1/0) - Can fortifications be stored in helicopters?
   canStoreInPlanes = 1;	//(1/0) - Can fortifications be stored in planes?
   canStoreInContainers = 1;	//(1/0) - Can fortifications be stored in containers (anything with an inventory that's not one of the above)?

   class Fortifications {
       class Land_HBarrier_5_F {
           boundingBoxSize = 0.8;
           surfaceNormal = 0;
           canDemolish = 0;
       };
       class Wire {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };

       class CargoNet_01_box_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class VirtualReammoBox_camonet_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Box_NATO_Ammo_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
       };
       class Flag_NATO_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };

       class Land_Plank_01_4m_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Land_Plank_01_8m_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };

       class Fort_RazorWire {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Land_BagFence_Corner_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Land_BagFence_End_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Land_BagFence_Long_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
       class Land_BagFence_Round_F {
         canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
         canDemolish =	1;	//(1/0) - Can this fortification be demolished?
         canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
         canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
         canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
         surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
         surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
         boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
         boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
         buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
         demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
         packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
         size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
         condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
         conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.

       };
    class Land_BagFence_Short_F {
        canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
        canDemolish =	1;	//(1/0) - Can this fortification be demolished?
        canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
        canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
        canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
        surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
        surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
        boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
        boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
        buildTime	= 10;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
        demolitionTime = 15;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
        packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
        size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
        condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
        conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class Land_PortableDesk_01_olive_F {
        canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
        canDemolish =	1;	//(1/0) - Can this fortification be demolished?
        canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
        canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
        canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
        surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
        surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
        boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
        boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
        buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
        demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
        packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
        size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
        condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
        conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
 	class Land_WaterTank_04_F {
 		canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
 		canDemolish =	1;	//(1/0) - Can this fortification be demolished?
 		canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
 		canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
 		canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
 		surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
 		surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
 		boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
 		boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
 		buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
 		demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
 		packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
 		size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
 		condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
 		conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
 	};
 	class Land_DeerStand_01_F {
 		canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
 		canDemolish =	1;	//(1/0) - Can this fortification be demolished?
 		canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
 		canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
 		canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
 		surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
 		surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
 		boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
 		boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
 		buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
 		demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
 		packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
 		size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
 		condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
 		conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
 	};
    class Land_CamoNetVar_EAST {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class Land_CamoNet_EAST {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class Land_CamoNetB_EAST {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class CamoNet_OPFOR_open_F {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class CamoNet_OPFOR_F {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class CamoNet_OPFOR_big_F {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class CamoNet_INDP_open_F {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
    class CamoNet_INDP_big_F {
      canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
      canDemolish =	1;	//(1/0) - Can this fortification be demolished?
      canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
      canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
      canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
      surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
      surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
      boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
      boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
      buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
      demolitionTime = 35;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
      packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
      size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
      condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
      conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
    };
  class Land_Target_Dueling_01_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Target_PopUp_Alien1_Moving_90deg_Acc1_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Target_PopUp_Moving_90deg_Acc2_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Target_PopUp2_Moving_90deg_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Zombie_PopUp_Moving_90deg_Acc1_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Target_PopUp8_Moving_90deg_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
  class Target_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Flag_Redburger_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class rhs_Flag_Russia_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Flag_US_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Flag_Viper_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class FlagCarrierCDF_EP1 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class MetalBarrel_burning_F {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

   class Misery_Forge {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Misery_Anvil {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class CUP_radio_b {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

   class Hedgehog {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class land_bunker_garage {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish =	1;	//(1/0) - Can this fortification be demolished?
    canPackUp	= 1;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Laptop_03_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Laptop_03_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Laptop_03_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableGenerator_01_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableGenerator_01_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableGenerator_01_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Portable_generator_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_MobileRadar_01_generator_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_DieselGroundPowerUnit_01_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PowerGenerator_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableSolarPanel_01_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableSolarPanel_01_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_SolarPanel_04_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_SolarPanel_04_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_SolarPanel_04_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_BatteryPack_01_open_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_BatteryPack_01_open_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_BatteryPack_01_open_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_single_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_double_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_single_yellow_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_single_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_single_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_single_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_double_yellow_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_double_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_double_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_double_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_quad_yellow_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_quad_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_quad_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableLight_02_quad_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Router_01_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Router_01_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_Router_01_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableDesk_01_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableDesk_01_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_PortableDesk_01_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_DeskChair_01_olive_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_DeskChair_01_black_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };

  class Land_DeskChair_01_sand_F_AE3 {
    canCollide = 1;	//(1/0) - Can this fortification be placed while colliding with other objects?
    canDemolish = 0;	//(1/0) - Can this fortification be demolished?
    canPackUp = 0;	//(1/0) - Can this fortification be packed up and reused?
    canFloat = 1;	//(1/0) - Can this fortification be placed while floating?
    canPlaceOnRoad = 1;	//(1/0) - Can this fortification be placed on roads?
    surfaceNormal = 1;	//(1/0) - Default setting for surface normal up-vector.
    surfaceNormalForced = 0;	//(1/0) - If forced, user will be unable to change from default setting.
    boundingBoxSizeFactor	= 1;	//Number - Size factor of bounding box for this fortification - smaller means collision detection is less strict - is factored into global boundingBoxSize
    boundingBoxOffset =	[0,0,0];	//Array - Offset for bounding box, vector [x,y,z].
    buildTime	= 15;//dependent on actual object size	Number - Sets building time in seconds for this type of fortification. Is affected by buildTimeFactor.
    demolitionTime = 60;	//dependent on actual object size	Number - Sets demolishing time in seconds for this type of fortification. Is affected by demolishTimeFactor.
    packUpTime = 20;	//dependent on actual object size	Number - Sets pack up time in seconds for this type of fortification. Is affected by packUpTimeFactor.
    size = 3;	//dependent on actual object size	Number - The size that this fortification takes up in the virtual inventory.
    condition	= "true";	//String - Custom condition that will be evaluated during placement. Arguments passed are [fortification object, unit that is placing].
    conditionHint	= "CAN'T PLACE!";	//String - Status that will be displayed in GUI when fotification can not be placed because of custom condition.
  };
    };//End of GRAD fortification buid-ables
};
