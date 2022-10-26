
// TYPE_HERE: here you can type your mnemonic constants, using the #define directive
// like trng did it in the "Tomb_NextGeneration.h" file
// in this source you can also type your declaration of tomb raider function
// like it happens for "functions.h" source

// -------- START PRESET CONSTANTS ---------------------------------
// please don't remove the constants in this "PRESET CONSTANT" zone. 
// They will be used by some preset function in your plugin source

#define MAX_MYPROGR_ACTIONS 100
#define MAX_ASSIGN_SLOT_MINE 200

#define ENDLESS_DURATE 0xFFFF // to use as number of frames to set an infinite durate
#define NGTAG_END_SEQUENCE		   0   // signals the end of ng token sequence
#define NGTAG_PROGRESSIVE_ACTIONS  1
#define NGTAG_LOCAL_DATA           2
#define NGTAG_GLOBAL_DATA          3
#define AXN_FREE  0  // this record is to free an action record. You type this value in ActionType to free a action progress record
// --------- END PRESET CONSTANTS ---------------------------------
// type here the constant name for new progressive action you create
// use progressive number to have always different value for each AXN_ constant/action


// MPS_ flags
// you should type here your MPS_ flags for plugin command.
// then you'll test the presence of these flags checking the Trng.MainPluginFlags  value using "&" operator
// please: do not use the value 0x40000000 (MPS_DISABLE) because it has been already set by trng engine

#define QUANTITY_SEARCH_OBJECTS 16

#define OBJ_SEARCH_OBJECT1 1
#define OBJ_SEARCH_OBJECT2 2
#define OBJ_SEARCH_OBJECT3 3
#define OBJ_SEARCH_OBJECT4 4
#define OBJ_SEARCH_OBJECT5 5
#define OBJ_SEARCH_OBJECT6 6
#define OBJ_SEARCH_OBJECT7 7
#define OBJ_SEARCH_OBJECT8 8
#define OBJ_SEARCH_OBJECT9 9
#define OBJ_SEARCH_OBJECT10 10
#define OBJ_SEARCH_OBJECT11 11
#define OBJ_SEARCH_OBJECT12 12
#define OBJ_SEARCH_OBJECT13 13
#define OBJ_SEARCH_OBJECT14 14
#define OBJ_SEARCH_OBJECT15 15
#define OBJ_SEARCH_OBJECT16 16

#define CUST_SEARCH_OBJECT1 1
#define CUST_SEARCH_OBJECT2 2
#define CUST_SEARCH_OBJECT3 3
#define CUST_SEARCH_OBJECT4 4
#define CUST_SEARCH_OBJECT5 5
#define CUST_SEARCH_OBJECT6 6
#define CUST_SEARCH_OBJECT7 7
#define CUST_SEARCH_OBJECT8 8
#define CUST_SEARCH_OBJECT9 9
#define CUST_SEARCH_OBJECT10 10
#define CUST_SEARCH_OBJECT11 11
#define CUST_SEARCH_OBJECT12 12
#define CUST_SEARCH_OBJECT13 13
#define CUST_SEARCH_OBJECT14 14
#define CUST_SEARCH_OBJECT15 15
#define CUST_SEARCH_OBJECT16 16

#define INDEX_NONE -1

#define ARGUMENT_COUNT_SEARCH_OBJECT 4

#define ARGUMENT1 0
#define ARGUMENT2 1
#define ARGUMENT3 2
#define ARGUMENT4 3

#define ANIMATION_STAND_STILL_LINK 11
#define ANIMATION_STAND_STILL_BREATH 103
#define ANIMATION_STANDING_PICKUP_FLOOR 135

#define FRAME_ADD_PICKUP 15

#define DISTANCE_SECTOR 1024

#define MASK_ACTIVATION 0x3E00

#define TEST_POSITION_ID_MAXIMUM 1000
