----------------1------------------------
#include<stdio.h>
typedef struct{
int number_of_wheels;
int number_of_Doors;
int number_of_mirrors;
}cars;
typedef struct{
int number_of_wheels;
int number;
int something;
}bikes;
bikes Suzuki;
void main(){

Suzuki.number_of_wheels= 500;
Suzuki.number = 100;
Suzuki.something = 300;
cars BMW,*Toyota;
BMW.number_of_wheels = 5;
BMW.number_of_Doors = 20;
Toyota = &BMW;
printf("The number of doors for BMW %d\n",Toyota->number_of_Doors);
Toyota = &Suzuki;
printf("Suzuki number of doors is %d\n",Toyota->number_of_wheels);
printf("Suzuki number of doors is %d\n",Toyota->number_of_Doors);

//BMW = Suzuki;
printf("\nBWM has these number of %d");
}



---------------------------2--------------------------
#define uint32 unsigned int
#define uint8 unsigned char
typedef struct{
uint32 Sleep_bit ;
uint32 Wakeup_bit ;
uint32 PowerDown_bit ;
uint32 *something;
}TC377;
void PowerDown_TC377();
void Wakeup_TC377();
void GotoSleep_TC377();
uint8 Get_Status_PowerDown_Bit();
uint8 Get_Status_Sleep_Bit();
uint8 Get_Status_Wakeup_Bit();
void main(){
TC377 TC377_Register_control_t;
if(Get_Status_PowerDown_Bit()==2)
{
PowerDown_TC377(&TC377_Register_control_t);
}
if(Get_Status_Sleep_Bit()==1)
{
GotoSleep_TC377(&TC377_Register_control_t);
}
if(Get_Status_Wakeup_Bit()==1)
{
Wakeup_TC377(&TC377_Register_control_t);
}
printf("The Powerdown bit is %d, Wakeup bit is %d, Sleep bit is %d"
       ,TC377_Register_control_t.PowerDown_bit,
       TC377_Register_control_t.Wakeup_bit
       ,TC377_Register_control_t.Sleep_bit);
}


void PowerDown_TC377(TC377 *TC377_Register_control_t){

TC377_Register_control_t->PowerDown_bit = 12;
}
void Wakeup_TC377(TC377 *TC377_Register_control_t){
TC377_Register_control_t->Wakeup_bit = 13;
}
void GotoSleep_TC377(TC377 *TC377_Register_control_t){
TC377_Register_control_t->Sleep_bit = 14;

}

uint8 Get_Status_PowerDown_Bit()
{
return 1;
}
uint8 Get_Status_Sleep_Bit()
{
return 1;
}
uint8 Get_Status_Wakeup_Bit()
{
return 1;
}

-------------------------------3---------------------------
#define uint32 unsigned int
typedef struct{
uint32 Sleep_bit ;
uint32 Wakeup_bit ;
uint32 PowerDown_bit ;
uint32 *something;
}TC377;

void main(){
TC377 TC377_something;
change_something(&TC377_something);
printf("%d",TC377_something.something);
}

void change_something(TC377 *TC377_something){
TC377_something->something = 500;
}
