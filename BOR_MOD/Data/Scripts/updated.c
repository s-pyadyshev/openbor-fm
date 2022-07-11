// void main()
// {
//    void self = getlocalvar("self"); //Get calling entity.
//    void health = getentityproperty(self,"health"); //get health
//    int time = openborvariant("elapsed_time");// get time
//    int recovery_time = 1000;

//    time %= recovery_time*2; // game time protection OPTIONAL!!

//    if ( getlocalvar("time_flag") == NULL() ) setlocalvar("time_flag",time+recovery_time);  

//    if ( time >= getlocalvar("time_flag") )
//    {
//         if ( health < getentityproperty(self, "maxhealth") )
//         {
//               changeentityproperty(self, "health", health - 1); //decrease health
//               setlocalvar("time_flag",NULL());
//         }
//    }
// }

void main(){
  // void self = getlocalvar("self"); //Get calling entity.
  // int health = getentityproperty(self, "health"); //get health
  // int time = openborvariant("elapsed_time");// get time
  //     drawstring (50, 80, 3, health);
  // if ( time % 1000 == 0 )
  // {

  //     changeentityproperty(self, "health", health - 1);//add health
  // }
  // works
	// void self = getlocalvar("self");
	// int health = getentityproperty(self, "health");
	// int max = 100;
	// int time = openborvariant("elapsed_time");
	// int timer;

	// if(!timer){
	// 		timer = time + 100;
	// }
	
	// if(time > timer){
	// 		changeentityproperty(self, "health", health - 1);
	// 		timer = NULL();\
	// }
}

