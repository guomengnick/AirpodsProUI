//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender){
	// 初始化
}


void __fastcall TForm1::Timer1Timer(TObject *Sender){
	TBluetoothManager* BluetoothManager = TBluetoothManager::Current;
	if (BluetoothManager){
		TBluetoothDeviceList* DiscoveredDevices = BluetoothManager->GetPairedDevices();
		if (DiscoveredDevices){
			for (int i = 0; i < DiscoveredDevices->Count; i++){
				TBluetoothDevice* device = DiscoveredDevices->Items[i];
				ShowMessage(device->DeviceName);  // 显示设备名称
				TBluetoothServiceList* list = device->GetServices();
				if (list)  // 确保服务列表是有效的
				{
					for (int i = 0; i < list->Count; ++i)  // 遍历服务列表
					{
						TBluetoothService* service = &(list->Items[i]);  
						ShowMessage(service->Name + "\t" + GUIDToString(service->UUID));
					}
				}
			}
		}
	}
}
//---------------------------------------------------------------------------

