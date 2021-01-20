EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr E 44000 34000
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FF7B8E0
P 20450 5500
F 0 "U?" H 20450 6367 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 20450 6276 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 20450 5500 50  0001 L BNN
F 3 "" H 20450 5500 50  0001 L BNN
F 4 "v11" H 20450 5500 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 20450 5500 50  0001 L BNN "STANDARD"
F 6 "N/A" H 20450 5500 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 20450 5500 50  0001 L BNN "MANUFACTURER"
	1    20450 5500
	1    0    0    -1  
$EndComp
$Comp
L microcontrollers:Teensy3.2 U?
U 1 1 5FF7D506
P 24700 9550
F 0 "U?" H 24700 11293 60  0000 C CNN
F 1 "Teensy3.2" H 24700 11187 60  0000 C CNN
F 2 "microcontrollers:Teensy30_31_32_LC" H 24700 11081 60  0000 C CNN
F 3 "" H 24700 8800 60  0000 C CNN
	1    24700 9550
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF863EE
P 25800 11150
F 0 "#PWR?" H 25800 10900 50  0001 C CNN
F 1 "GND" H 25805 10977 50  0000 C CNN
F 2 "" H 25800 11150 50  0001 C CNN
F 3 "" H 25800 11150 50  0001 C CNN
	1    25800 11150
	1    0    0    -1  
$EndComp
Wire Wire Line
	25700 9700 25800 9700
Wire Wire Line
	25800 9700 25800 11150
Wire Wire Line
	23700 9600 23600 9600
$Comp
L power:GND #PWR?
U 1 1 5FF86F36
P 23600 11150
F 0 "#PWR?" H 23600 10900 50  0001 C CNN
F 1 "GND" H 23605 10977 50  0000 C CNN
F 2 "" H 23600 11150 50  0001 C CNN
F 3 "" H 23600 11150 50  0001 C CNN
	1    23600 11150
	1    0    0    -1  
$EndComp
Wire Wire Line
	23600 9600 23600 11150
$Comp
L microcontrollers:Teensy3.2 U?
U 1 1 5FF8E6FE
P 14400 9850
F 0 "U?" H 14400 11593 60  0000 C CNN
F 1 "Teensy3.2" H 14400 11487 60  0000 C CNN
F 2 "microcontrollers:Teensy30_31_32_LC" H 14400 11381 60  0000 C CNN
F 3 "" H 14400 9100 60  0000 C CNN
	1    14400 9850
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FF92DEF
P 20450 3650
F 0 "U?" H 20450 4517 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 20450 4426 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 20450 3650 50  0001 L BNN
F 3 "" H 20450 3650 50  0001 L BNN
F 4 "v11" H 20450 3650 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 20450 3650 50  0001 L BNN "STANDARD"
F 6 "N/A" H 20450 3650 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 20450 3650 50  0001 L BNN "MANUFACTURER"
	1    20450 3650
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FF9E467
P 22750 5500
F 0 "U?" H 22750 6367 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 22750 6276 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 22750 5500 50  0001 L BNN
F 3 "" H 22750 5500 50  0001 L BNN
F 4 "v11" H 22750 5500 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 22750 5500 50  0001 L BNN "STANDARD"
F 6 "N/A" H 22750 5500 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 22750 5500 50  0001 L BNN "MANUFACTURER"
	1    22750 5500
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FF9E60F
P 22750 3650
F 0 "U?" H 22750 4517 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 22750 4426 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 22750 3650 50  0001 L BNN
F 3 "" H 22750 3650 50  0001 L BNN
F 4 "v11" H 22750 3650 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 22750 3650 50  0001 L BNN "STANDARD"
F 6 "N/A" H 22750 3650 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 22750 3650 50  0001 L BNN "MANUFACTURER"
	1    22750 3650
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FFA4F3D
P 11700 9250
F 0 "U?" H 11700 10117 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 11700 10026 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 11700 9250 50  0001 L BNN
F 3 "" H 11700 9250 50  0001 L BNN
F 4 "v11" H 11700 9250 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 11700 9250 50  0001 L BNN "STANDARD"
F 6 "N/A" H 11700 9250 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 11700 9250 50  0001 L BNN "MANUFACTURER"
	1    11700 9250
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FFA6CAC
P 9900 9200
F 0 "U?" H 9900 10067 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 9900 9976 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 9900 9200 50  0001 L BNN
F 3 "" H 9900 9200 50  0001 L BNN
F 4 "v11" H 9900 9200 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 9900 9200 50  0001 L BNN "STANDARD"
F 6 "N/A" H 9900 9200 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 9900 9200 50  0001 L BNN "MANUFACTURER"
	1    9900 9200
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FFA7C3E
P 9850 11350
F 0 "U?" H 9850 12217 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 9850 12126 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 9850 11350 50  0001 L BNN
F 3 "" H 9850 11350 50  0001 L BNN
F 4 "v11" H 9850 11350 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 9850 11350 50  0001 L BNN "STANDARD"
F 6 "N/A" H 9850 11350 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 9850 11350 50  0001 L BNN "MANUFACTURER"
	1    9850 11350
	1    0    0    -1  
$EndComp
$Comp
L stepper-drivers:TMC2208_SILENTSTEPSTICK U?
U 1 1 5FFA89C7
P 11800 11350
F 0 "U?" H 11800 12217 50  0000 C CNN
F 1 "TMC2208_SILENTSTEPSTICK" H 11800 12126 50  0000 C CNN
F 2 "MODULE_TMC2208_SILENTSTEPSTICK" H 11800 11350 50  0001 L BNN
F 3 "" H 11800 11350 50  0001 L BNN
F 4 "v11" H 11800 11350 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 11800 11350 50  0001 L BNN "STANDARD"
F 6 "N/A" H 11800 11350 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "Trinamic" H 11800 11350 50  0001 L BNN "MANUFACTURER"
	1    11800 11350
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:DRV8838 U?
U 1 1 5FFA972E
P 26250 5450
F 0 "U?" H 26250 4861 50  0000 C CNN
F 1 "DRV8838" H 26250 4770 50  0000 C CNN
F 2 "Package_SON:WSON-8-1EP_2x2mm_P0.5mm_EP0.9x1.6mm" H 26250 4600 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/drv8837.pdf" H 26250 5450 50  0001 C CNN
	1    26250 5450
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:DRV8838 U?
U 1 1 5FFAAF60
P 27650 5450
F 0 "U?" H 27650 4861 50  0000 C CNN
F 1 "DRV8838" H 27650 4770 50  0000 C CNN
F 2 "Package_SON:WSON-8-1EP_2x2mm_P0.5mm_EP0.9x1.6mm" H 27650 4600 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/drv8837.pdf" H 27650 5450 50  0001 C CNN
	1    27650 5450
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:DRV8838 U?
U 1 1 5FFAB61A
P 9950 6550
F 0 "U?" H 9950 5961 50  0000 C CNN
F 1 "DRV8838" H 9950 5870 50  0000 C CNN
F 2 "Package_SON:WSON-8-1EP_2x2mm_P0.5mm_EP0.9x1.6mm" H 9950 5700 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/drv8837.pdf" H 9950 6550 50  0001 C CNN
	1    9950 6550
	1    0    0    -1  
$EndComp
$Comp
L Driver_Motor:DRV8838 U?
U 1 1 5FFAC20B
P 11750 6700
F 0 "U?" H 11750 6111 50  0000 C CNN
F 1 "DRV8838" H 11750 6020 50  0000 C CNN
F 2 "Package_SON:WSON-8-1EP_2x2mm_P0.5mm_EP0.9x1.6mm" H 11750 5850 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/drv8837.pdf" H 11750 6700 50  0001 C CNN
	1    11750 6700
	1    0    0    -1  
$EndComp
$EndSCHEMATC
