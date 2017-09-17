#ifndef _AVR_INITBOARD_H
#define _AVR_INITBOARD_H

#define XTAL 16000000UL
#define F_CPU XTAL

#define DOT_PORT 	PORTA
#define DOT_DDR 	DDRA
#define DOTD0_PIN 0x01<<0
#define DOTD1_PIN 0x01<<1
#define DOTD2_PIN 0x01<<2
#define DOTD3_PIN 0x01<<3
#define DOTD4_PIN 0x01<<4
#define DOTD5_PIN 0x01<<5
#define DOTD6_PIN 0x01<<6
#define DOTD7_PIN 0x01<<7
#define DOT_DDR_INIT DOT_DDR|=(DOTD7_PIN & DOTD6_PIN & DOTD5_PIN & DOTD4_PIN & DOTD3_PIN & DOTD2_PIN & DOTD1_PIN & DOTD0_PIN) 

#define HP_MUTE_PORT PORTB
#define HP_MUTE_DDR DDRB
#define HP_MUTE_PIN 0x01<<7
#define HP_MUTE_DDR_INIT HP_MUTE_DDR|=HP_MUTE_PIN

#define POWER_EN_PORT PORTB
#define POWER_EN_DDR DDRB
#define POWER_EN_PIN 0x01<<6
#define POWER_EN_DDR_INIT POWER_EN_DDR&=~POWER_EN_PIN

#define UA_EN_PORT PORTB
#define UA_EN_DDR DDRB
#define UA_EN_READ PINB
#define UA_EN_PIN 0x01<<5
#define UA_EN_DDR_INIT UA_EN_DDR&=~UA_EN_PIN

#define DAC_MUTE_PORT PORTB
#define DAC_MUTE_DDR DDRB
#define DAC_MUTE_PIN 0x01<<4
#define DAC_MUTE_DDR_INIT DAC_MUTE_DDR|=DAC_MUTE_PIN

#define DSD128_PORT PORTB
#define DSD128_DDR DDRB
#define DSD128_PIN 0x01<<3
#define DSD128_DDR_INIT DSD128_DDR&=~DSD128_PIN

#define LINE_MUTE_PORT PORTB
#define LINE_MUTE_DDR DDRB
#define LINE_MUTE_PIN 0x01<<2
#define LINE_MUTE_DDR_INIT LINE_MUTE_DDR|=LINE_MUTE_PIN

#define DOT_CE1_PORT PORTC
#define DOT_CE1_DDR DDRC
#define DOT_CE1_PIN 0x01<<7
#define DOT_CE1_DDR_INIT DOT_CE1_DDR|=DOT_CE1_PIN

#define DOT_CLR_PORT PORTD
#define DOT_CLR_DDR DDRD
#define DOT_CLR_PIN 0x01<<7
#define DOT_CLR_DDR_INIT DOT_CLR_DDR|=DOT_CLR_PIN

#define INKEY1_PORT PORTD
#define INKEY1_DDR DDRD
#define INKEY1_A2_PIN 0x01<<6
#define INKEY1_A1_PIN 0x01<<5
#define INKEY1_A0_PIN 0x01<<4
#define INKEY1_PIN    0x01<<3
#define INKEY1_DDR_INIT INKEY1_DDR&=~(INKEY1_A2_PIN & INKEY1_A1_PIN & INKEY1_A0_PIN & INKEY1_PIN)

#define I2C_PORT PORTD
#define I2C_DDR  DDRD
#define I2C_SDA_PIN 0x01<<1
#define I2C_SCL_PIN 0x01<<0
#define I2C_DDR_INIT I2C_DDR|=(I2C_SDA_PIN & I2C_SCL_PIN)

#define AK_INT0_PORT PORTE
#define AK_INT0_DDR DDRE
#define AK_INT0_PIN 0x01<<4
#define AK_INT0_DDR_INIT AK_INT0_DDR&=~AK_INT0_PIN

#define AK_INT1_PORT PORTD
#define AK_INT1_DDR DDRD
#define AK_INT1_PIN 0x01<<2
#define AK_INT1_DDR_INIT AK_INT1_DDR&=~AK_INT1_PIN

#define DSD_ON_PORT PORTE
#define DSD_ON_DDR DDRE
#define DSD_ON_PIN 0x01<<7
#define DSD_ON_DDR_INIT DSD_ON_DDR&=~DSD_ON_PIN

#define AMLI_PORT PORTE
#define AMLI_DDR DDRE
#define AMLI_PIN 0x01<<6
#define AMLI_DDR_INIT AMLI_DDR|=AMLI_PIN

#define R_TRANS_PORT PORTE
#define R_TRANS_DDR DDRE
#define R_TRANS_PIN 0x01<<5
#define R_TRANS_DDR_INIT R_TRANS_DDR&=~R_TRANS_PIN

#define AK_INT0_PORT PORTE
#define AK_INT0_DDR DDRE
#define AK_INT0_PIN 0x01<<4
#define AK_INT0_DDR_INIT AK_INT0_DDR&=~AK_INT0_PIN

#define I2S_SEL_PORT PORTE
#define I2S_SEL_DDR DDRE
#define I2S_SEL_PIN 0x01<<3
#define I2S_SEL_DDR_INIT I2S_SEL_DDR|=I2S_SEL_PIN

#define USB_DET_PORT PORTE
#define USB_DET_DDR DDRE
#define USB_DET_PIN 0x01<<2
#define USB_DET_DDR_INIT USB_DET_DDR&=~USB_DET_PIN

#define DOT_A3_PORT PORTF
#define DOT_A3_DDR DDRF
#define DOT_A3_PIN 0x01<<3
#define DOT_A3_DDR_INIT DOT_A3_DDR|=DOT_A3_PIN

#define DOT_A2_PORT PORTF
#define DOT_A2_DDR DDRF
#define DOT_A2_PIN 0x01<<2
#define DOT_A2_DDR_INIT DOT_A2_DDR|=DOT_A2_PIN

#define DOT_A1_PORT PORTF
#define DOT_A1_DDR DDRF
#define DOT_A1_PIN 0x01<<1
#define DOT_A1_DDR_INIT DOT_A1_DDR|=DOT_A1_PIN

#define DOT_A0_PORT PORTF
#define DOT_A0_DDR DDRF
#define DOT_A0_PIN 0x01<<0
#define DOT_A0_DDR_INIT DOT_A0_DDR|=DOT_A0_PIN

#define DOT_WR_PORT PORTG
#define DOT_WR_DDR DDRG
#define DOT_WR_PIN 0x01<<2
#define DOT_WR_DDR_INIT DOT_WR_DDR|=DOT_WR_PIN

#define DOT_CE_PORT PORTG
#define DOT_CE_DDR DDRG
#define DOT_CE_PIN 0x01<<1
#define DOT_CE_DDR_INIT DOT_CE_DDR|=DOT_CE_PIN

#define DOT_A4_PORT PORTG
#define DOT_A4_DDR DDRG
#define DOT_A4_PIN 0x01<<1
#define DOT_A4_DDR_INIT DOT_A4_DDR|=DOT_A4_PIN

#define SELECT_USB    I2S_SEL_PORT|=I2S_SEL_PIN
#define SELECT_AK4118 I2S_SEL_PORT&=~I2S_SEL_PIN

void power_enable(void)
{
  
}




#endif