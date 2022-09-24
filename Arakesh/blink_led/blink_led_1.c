#define uint32 unsigned int
uint32 *RCC_CR = 0x40023800;
uint32 *RCC_AHB1ENR = 0x40023800+0x30;

uint32 *GPIOG_MODER = 0x40021800;
uint32 *GPIOG_OTYPER = 0x40021800+0x04;
uint32 *GPIOG_OSPEEDR = 0x40021800+0x08;
uint32 *GPIOG_PUPDR = 0x40021800+0x0C;
uint32 *GPIOG_ODR = 0x40021800+0x14;

void clock_internal_enable();
void gpio_init();
void blink_led();
void main(){
	clock_internal_enable();
	gpio_init();
	while(1){
		blink_led();
	}
}

void clock_internal_enable()
	{
		*RCC_CR |= (1<<0); //Enabling the internal clock
		*RCC_AHB1ENR |= (1<<6); //Enabling the internal GPIO G
	}
	
	void gpio_init()
	{
		*GPIOG_MODER |= (1<<26); // Enabling Pin13 as output 
		*GPIOG_MODER &= ~(1<<27);// Enabling Pin13 as output
		*GPIOG_OTYPER &= ~(1<<13); //Making Pin13 output type as Push Pull
		*GPIOG_OSPEEDR &= ~(1<<27); //Enabling Medium Speed for Pin 13
		*GPIOG_OSPEEDR |= (1<<26);// Enabling Medium Speed for Pin 13
		*GPIOG_PUPDR &= ~(1<<27); //Enabling No Pull Push for Pin 13
		*GPIOG_PUPDR &= ~(1<<26);// Enabling No Pull Push for Pin 13
		
	}
	
	
	void blink_led(){
		*GPIOG_ODR |= (1<<13);
		
		*GPIOG_ODR &= ~(1<<13);
	}