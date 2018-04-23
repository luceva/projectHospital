enum {FALSE=0, TRUE};

#define MAXBUFF 1024  // maximum size of string buffer for input file
#define SMALLBUFF 10  // a little buffer for the stack

/* The LinkNode type is used as an element of a linked list
** implementation of a stack of tree nodes. 
*/

typedef struct hospital_t HospitalNode;
typedef HospitalNode *HospitalNodePtr;

struct hospital_t {
    char *fDisease;
    HospitalNodePtr firstFloor;
    HospitalNodePtr secondFloor;
    HospitalNodePtr thirdFloor;
};


typedef struct floor_t FloorNode;
typedef FloorNode *FloorNodePtr;

struct floor_t {
    char *patient;
    char *pDisease;
    FloorNodePtr next;
};