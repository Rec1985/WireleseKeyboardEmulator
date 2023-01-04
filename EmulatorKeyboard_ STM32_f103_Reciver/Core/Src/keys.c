#include "keys.h"
#include "usbd_hid.h"

#define RESET USBD_HID_SendReport(&hUsbDeviceFS, reset,bufferSize)

extern USBD_HandleTypeDef hUsbDeviceFS;

		uint8_t bufferSize = 8;
		uint8_t reset[] = {0,0,0,0,0,0,0,0};	
		uint8_t ctrl_1[] = {0x01,0,0x1E,0,0x00,0,0,0};// Ctrl + 1
		uint8_t ctrl_2[] = {0x01,0,0x1F,0,0x00,0,0,0};// Ctrl + 2
		uint8_t ctrl_3[] = {0x01,0,0x20,0,0x00,0,0,0};// Ctrl + 3
		uint8_t ctrl_4[] = {0x01,0,0x21,0,0x00,0,0,0};// Ctrl + 4
		uint8_t ctrl_5[] = {0x01,0,0x22,0,0x00,0,0,0};// Ctrl + 5
		uint8_t ctrl_6[] = {0x01,0,0x23,0,0x00,0,0,0};// Ctrl + 6
		uint8_t ctrl_7[] = {0x01,0,0x24,0,0x00,0,0,0};// Ctrl + 7
		uint8_t ctrl_8[] = {0x01,0,0x25,0,0x00,0,0,0};// Ctrl + 8
		uint8_t ctrl_9[] = {0x01,0,0x26,0,0x00,0,0,0};// Ctrl + 9
		uint8_t f3[] = {0x00,0,0x3C,0x00,0x00,0,0,0};// 
		uint8_t f4[] = {0x00,0,0x3D,0x00,0x00,0,0,0};// 


void grup_1_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_1,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_1,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_1_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_1,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_1,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_2_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_2,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_2,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_2_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_2,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_2,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_3_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_3,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_3_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_3,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_3,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_4_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_4,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_4,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_4_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_4,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_4,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_5_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_5,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_5,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_5_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_5,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_5,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_6_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_6,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_6,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_6_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_6,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_6,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_7_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_7,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_7,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_7_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_7,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_7,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_8_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_8,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_8,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_8_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_8,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_8,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}

void grup_9_up ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_9,bufferSize);
	HAL_Delay(500); 		      
	RESET;
	HAL_Delay(500); 		      
	USBD_HID_SendReport(&hUsbDeviceFS, f3,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(500); 	      
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_9,bufferSize);
	HAL_Delay(500); 		        
	RESET;
	HAL_Delay(50);
}

void grup_9_down ()
{
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_9,bufferSize);
	HAL_Delay(50); 		       
	RESET;
	HAL_Delay(50); 		       
	USBD_HID_SendReport(&hUsbDeviceFS, f4,bufferSize);
	HAL_Delay(50); 		      
	RESET;
	HAL_Delay(50); 	       
	USBD_HID_SendReport(&hUsbDeviceFS, ctrl_9,bufferSize);
	HAL_Delay(50); 		        
	RESET;
	HAL_Delay(50);
}
