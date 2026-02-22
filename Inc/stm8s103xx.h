#ifndef STM8S103XX_H_
#define STM8S103XX_H_

#include <stdint.h>


#define __vo			volatile

/* 
* Base Addresses of Flash and SRAM EEPROM        
*/
#define FLASH_BASEADDR          0x8000U
#define SRAM_BASEADDR           0x0000U
#define EEPROM_BASEADDR         0x4000U
#define PERIPH_BASEADDR         0x5000U

/* 
* Peripheral Base Addresses        
*/
#define GPIOA_BASEADDR          (PERIPH_BASEADDR + 0x00)
#define GPIOB_BASEADDR          (PERIPH_BASEADDR + 0x05)
#define GPIOC_BASEADDR          (PERIPH_BASEADDR + 0x0A)
#define GPIOD_BASEADDR          (PERIPH_BASEADDR + 0x0F)
#define GPIOE_BASEADDR          (PERIPH_BASEADDR + 0x14)
#define GPIOF_BASEADDR          (PERIPH_BASEADDR + 0x19)
#define RCC_BASEADDR            (PERIPH_BASEADDR + 0x00C0)

/* 
* Communication Protocols Base Addresses        
*/
#define SPI_BASEADDR         (PERIPH_BASEADDR + 0x0200)
#define I2C_BASEADDR         (PERIPH_BASEADDR + 0x0210)
#define UART1_BASEADDR       (PERIPH_BASEADDR + 0x0230)

/*
 *  @brief Peripherals register definition structures
 */

/*
* GPIO Register definition structure 
*/
typedef struct{
  
  __vo uint8_t ODR;     /* Output Data Register             -Offset: 0x00 */
  __vo uint8_t IDR;     /* Input Data Register              -Offset: 0x01 */
  __vo uint8_t DDR;     /* Data Direction Register          -Offset: 0x02 */
  __vo uint8_t CR1;     /* Control Register 1               -Offset: 0x03 */
  __vo uint8_t CR2;     /* Control Register 2               -Offset: 0x04 */
  
}GPIO_RegDef_t;

/*
* RCC Register definition structure 
*/
typedef struct {
  
    __vo uint8_t ICKR;       /* Internal clock control reg  - Offset: 0x00 */
    __vo uint8_t ECKR;       /* External clock control reg  - Offset: 0x01 */
    __vo uint8_t RSVD1;      /* Reserved                    - Offset: 0x02 */
    __vo uint8_t CMSR;       /* Clock master status reg     - Offset: 0x03 */
    __vo uint8_t SWR;        /* Clock master switch reg     - Offset: 0x04 */
    __vo uint8_t SWCR;       /* Clock switch control reg    - Offset: 0x05 */
    __vo uint8_t CKDIVR;     /* Clock divider reg           - Offset: 0x06 */
    __vo uint8_t PCKENR1;    /* Peripheral clock gating 1   - Offset: 0x07 */
    __vo uint8_t CSSR;       /* Clock security system reg   - Offset: 0x08 */
    __vo uint8_t CCOR;       /* Configurable clock out reg  - Offset: 0x09 */
    __vo uint8_t PCKENR2;    /* Peripheral clock gating 2   - Offset: 0x0A */
    __vo uint8_t HSITRIMR;   /* HSI clock calibration reg   - Offset: 0x0B */
    __vo uint8_t SWIMCCR;    /* SWIM clock control reg      - Offset: 0x0C */
} RCC_RegDef_t;

/*
* SPI Register Definition structure 
*/
typedef struct {
  
  __vo uint8_t CR1;           /* Control Register 1         - Offset: 0x00 */           
  __vo uint8_t CR2;           /* Control Register 2         - Offset: 0x01 */ 
  __vo uint8_t ICR;           /* Interrupt Control Register - Offset: 0x02 */ 
  __vo uint8_t SR;            /* Status  Register           - Offset: 0x03 */ 
  __vo uint8_t DR;            /* Data    Register           - Offset: 0x04 */ 
  __vo uint8_t CRCPR;         /* CRC Polynominal Register   - Offset: 0x05 */ 
  __vo uint8_t RXCRCR;        /* Rx CRC Register            - Offset: 0x06 */  
  __vo uint8_t TXCRCR;        /* Tx CRC Register            - Offset: 0x07 */  
}SPI_RegDef_t;

/*
* I2C Register Definition structure 
*/
typedef struct {
  
  __vo uint8_t CR1;           /* Control Register 1         - Offset: 0x00 */           
  __vo uint8_t CR2;           /* Control Register 2         - Offset: 0x01 */ 
  __vo uint8_t FREQR;         /* Frequency Register         - Offset: 0x02 */ 
  __vo uint8_t OARL;          /* Own address register low   - Offset: 0x03 */ 
  __vo uint8_t OARH;          /* Own address register high  - Offset: 0x04 */ 
  __vo uint8_t RSVD1;         /* Reserved                   - Offset: 0x05 */ 
  __vo uint8_t DR;            /* Data Register              - Offset: 0x06 */  
  __vo uint8_t SR1;           /* Status Register 1          - Offset: 0x07 */  
  __vo uint8_t SR2;           /* Status Register 2          - Offset: 0x08 */           
  __vo uint8_t SR3;           /* Status Register 3          - Offset: 0x09 */ 
  __vo uint8_t ITR;           /* Interrupt Control Register - Offset: 0x0A */ 
  __vo uint8_t CCRL;          /* Clock control register low - Offset: 0x0B */ 
  __vo uint8_t CCRH;          /* Clock control register high- Offset: 0x0C */ 
  __vo uint8_t TRISER;        /* TRISE register             - Offset: 0x0D */ 
  __vo uint8_t PECR;          /* packet error checking reg  - Offset: 0x0E */  
    
}I2C_RegDef_t;

/*
* UART1 Register Definition structure 
*/
typedef struct {
  
    __vo uint8_t SR;     /* Offset: 0x00 */
    __vo uint8_t DR;     /* Offset: 0x01 */
    __vo uint8_t BRR1;   /* Offset: 0x02 */
    __vo uint8_t BRR2;   /* Offset: 0x03 */
    __vo uint8_t CR1;    /* Offset: 0x04 */
    __vo uint8_t CR2;    /* Offset: 0x05 */
    __vo uint8_t CR3;    /* Offset: 0x06 */
    __vo uint8_t CR4;    /* Offset: 0x07 */
    __vo uint8_t CR5;    /* Offset: 0x08 */
    __vo uint8_t GTR;    /* Offset: 0x09 */
    __vo uint8_t PSCR;   /* Offset: 0x0A */
    
} UART1_RegDef_t;


/*
 * @brief Peripherals definitions ( Peripheral base address typecasted to xxx_RegDef_t)
 */
#define GPIOA  ((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB  ((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC  ((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD  ((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE  ((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF  ((GPIO_RegDef_t*)GPIOF_BASEADDR)

#define RCC    ((RCC_RegDef_t*)RCC_BASEADDR)
#define SPI    ((SPI_RegDef_t*)SPI_BASEADDR)
#define I2C    ((I2C_RegDef_t*)I2C_BASEADDR)
#define UART1  ((UART1_RegDef_t*)UART1_BASEADDR)

#endif /* STM8S103XX_H_ */



