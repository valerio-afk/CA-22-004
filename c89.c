#include <stdio.h>

void print_compiler_std_version()
{
    #ifndef __STDC_VERSION__
    #define __STDC_VERSION__ 198901L
    #endif
    printf(">>> C compiler: %ld <<<\n",__STDC_VERSION__);
}

enum Division {command, security, ops, medical, scientific};

struct Officer
{
    const char * name;
    const char * role;
    float rank;
    enum Division section;

    struct {
        unsigned int deck;
        unsigned int room;
    } quarters; /*from C11*/
};

const char* get_rank(rank)
float rank; /* K&R function declaration */
{
    if(rank == 1)        return "ENSIGN";
    else if(rank == 1.5) return "LIEUTENANT JG";
    else if(rank == 2)   return "LIEUTENANT";
    else if(rank == 2.5) return "LIEUTENANT COMMANDER";
    else if(rank == 3)   return "COMMANDER";
    else if(rank == 4)   return "CAPTAIN";
    else                 return "UNKNOWN";
}

const char * get_section(enum Division section)
{
    switch(section)
    {
        case command:    return "COMMAND";
        case security:   return "SECURITY";
        case ops:        return "OPERATION";
        case medical:    return "MEDICAL";
        case scientific: return "SCIENTIFIC";
        default: return "UNKNOWN";
    }
}

void print_officer(struct Officer officer)
{
    printf("Starfleet Officer\n");
    printf("Full name: %s\n", officer.name);
    printf("Rank ....: %s\n",get_rank(officer.rank));
    printf("Section .: %s\n",get_section(officer.section));
    printf("Quarters : Deck %d Room %d\n\n",officer.quarters.deck, officer.quarters.room);
}

int main(int argc, char *argv[]) 
{
    print_compiler_std_version();

    struct Officer capt = {0};

    capt.name = "Jean-Luc Picard", 
    capt.role="Commanding Officer USS Enterprise NCC-1701D",
    capt.rank=4, //captn
    capt.section = command,
    capt.quarters.deck = 8;
    capt.quarters.room = 3601;



    struct Officer xo = {0};
    xo.name = "William T Riker";
    xo.role = "First Officer USS Enterprise NCC-1701D";
    xo.rank = 3;
    xo.section = command;
    xo.quarters.deck = 8;
    xo.quarters.room =  912;

    print_officer(capt);
    print_officer(xo);

    return 0;
}