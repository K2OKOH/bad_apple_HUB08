#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H

/* PORT DEFINE */
#define     R2      GPIO_Pin_8  //A
#define     G1      GPIO_Pin_9  //A
#define     G2      GPIO_Pin_10 //A
#define     CLK     GPIO_Pin_8  //B
#define     LAT     GPIO_Pin_9  //B
#define     R1      GPIO_Pin_10 //B
#define     OE      GPIO_Pin_11 //B
#define     D       GPIO_Pin_12 //B
#define     C       GPIO_Pin_13 //B
#define     B       GPIO_Pin_14 //B
#define     A       GPIO_Pin_15 //B

/* ROW DEFINE */
#define ROW_0   0
#define ROW_1   1
#define ROW_2   2
#define ROW_3   3
#define ROW_4   4
#define ROW_5   5
#define ROW_6   6
#define ROW_7   7
#define ROW_8   8
#define ROW_9   9
#define ROW_10  10
#define ROW_11  11
#define ROW_12  12
#define ROW_13  13
#define ROW_14  14
#define ROW_15  15
#define ROW_16  16
#define ROW_17  17
#define ROW_18  18
#define ROW_19  19
#define ROW_20  20
#define ROW_21  21
#define ROW_22  22
#define ROW_23  23
#define ROW_24  24
#define ROW_25  25
#define ROW_26  26
#define ROW_27  27
#define ROW_28  28
#define ROW_29  29
#define ROW_30  30
#define ROW_31  31
#define ROW_32  32
#define ROW_33  33
#define ROW_34  34
#define ROW_35  35
#define ROW_36  36
#define ROW_37  37
#define ROW_38  38
#define ROW_39  39
#define ROW_40  40
#define ROW_41  41
#define ROW_42  42
#define ROW_43  43
#define ROW_44  44
#define ROW_45  45
#define ROW_46  46
#define ROW_47  47
#define ROW_48  48
#define ROW_49  49
#define ROW_50  50
#define ROW_51  51
#define ROW_52  52
#define ROW_53  53
#define ROW_54  54
#define ROW_55  55
#define ROW_56  56
#define ROW_57  57
#define ROW_58  58
#define ROW_59  59
#define ROW_60  60
#define ROW_61  61
#define ROW_62  62
#define ROW_63  63


/* LINE DEFINE */
#define LINE_0  0
#define LINE_1  1
#define LINE_2  2
#define LINE_3  3
#define LINE_4  4
#define LINE_5  5
#define LINE_6  6
#define LINE_7  7
#define LINE_8  8
#define LINE_9  9
#define LINE_10  10
#define LINE_11  11
#define LINE_12  12
#define LINE_13  13
#define LINE_14  14
#define LINE_15  15
#define LINE_16  16
#define LINE_17  17
#define LINE_18  18
#define LINE_19  19
#define LINE_20  20
#define LINE_21  21
#define LINE_22  22
#define LINE_23  23
#define LINE_24  24
#define LINE_25  25
#define LINE_26  26
#define LINE_27  27
#define LINE_28  28
#define LINE_29  29
#define LINE_30  30
#define LINE_31  31

#define LINE0_ON  {GPIOB->BRR = D; GPIOB->BRR = C;\
                  GPIOB->BRR = B; GPIOB->BRR = A;} //0000
#define LINE1_ON  {GPIOB->BRR = D; GPIOB->BRR = C;\
                  GPIOB->BRR = B; GPIOB->BSRR = A;} //0001
#define LINE2_ON  {GPIOB->BRR = D; GPIOB->BRR = C;\
                  GPIOB->BSRR = B; GPIOB->BRR = A;} //0010
#define LINE3_ON  {GPIOB->BRR = D; GPIOB->BRR = C;\
                  GPIOB->BSRR = B; GPIOB->BSRR = A;} //0011
#define LINE4_ON  {GPIOB->BRR = D; GPIOB->BSRR = C;\
                  GPIOB->BRR = B; GPIOB->BRR = A;} //0100
#define LINE5_ON  {GPIOB->BRR = D; GPIOB->BSRR = C;\
                  GPIOB->BRR = B; GPIOB->BSRR = A;} //0101
#define LINE6_ON  {GPIOB->BRR = D; GPIOB->BSRR = C;\
                  GPIOB->BSRR = B; GPIOB->BRR = A;} //0110
#define LINE7_ON  {GPIOB->BRR = D; GPIOB->BSRR = C;\
                  GPIOB->BSRR = B; GPIOB->BSRR = A;} //0111

#define LINE8_ON  {GPIOB->BSRR = D; GPIOB->BRR = C;\
                  GPIOB->BRR = B; GPIOB->BRR = A;} //1000
#define LINE9_ON  {GPIOB->BSRR = D; GPIOB->BRR = C;\
                  GPIOB->BRR = B; GPIOB->BSRR = A;} //1001
#define LINE10_ON  {GPIOB->BSRR = D; GPIOB->BRR = C;\
                   GPIOB->BSRR = B; GPIOB->BRR = A;} //1010
#define LINE11_ON  {GPIOB->BSRR = D; GPIOB->BRR = C;\
                   GPIOB->BSRR = B; GPIOB->BSRR = A;} //1011
#define LINE12_ON  {GPIOB->BSRR = D; GPIOB->BSRR = C;\
                   GPIOB->BRR = B; GPIOB->BRR = A;} //1100
#define LINE13_ON  {GPIOB->BSRR = D; GPIOB->BSRR = C;\
                   GPIOB->BRR = B; GPIOB->BSRR = A;} //1101
#define LINE14_ON  {GPIOB->BSRR = D; GPIOB->BSRR = C;\
                   GPIOB->BSRR = B; GPIOB->BRR = A;} //1110
#define LINE15_ON  {GPIOB->BSRR = D; GPIOB->BSRR = C;\
                   GPIOB->BSRR = B; GPIOB->BSRR = A;} //1111


/* FUNCTION DECLARAYION */
extern void DelayUs(__IO uint32_t nTime);
extern void DelayMs(__IO uint32_t nTime);
extern void TimingDelay_Decrement(void);
extern void RCC_Configuration(void);
extern void GPIO_Configuration(void);
extern void Send595(int8_t row);
extern void SwitchLine(uint8_t line);
extern void MatrixSelectOneLed(uint8_t line, uint8_t row, uint8_t color);
#endif 
