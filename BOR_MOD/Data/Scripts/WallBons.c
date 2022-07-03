
// Declare this in enemies header text to apply that script:
// onblockwscript data/scripts/wallbons.c

void main()
{// Wall bounce on falling state
    void self = getlocalvar("self");
    int Vx = getentityproperty(self,"xdir");
    int Vy = getentityproperty(self,"tossv");
    int Vz = getentityproperty(self,"zdir");
    int Fall = getentityproperty(self, "aiflag", "drop");

    if(Fall==1){
      changeentityproperty(self, "velocity", -Vx*0.5, -Vz*0.5, Vy+1); // bounced
    }
}