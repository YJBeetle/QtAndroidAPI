#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothHidDevice_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothHidDevice_Callback(QAndroidJniObject obj);
		// Constructors
		BluetoothHidDevice_Callback();
		
		// Methods
		void onAppStatusChanged(android::bluetooth::BluetoothDevice arg0, jboolean arg1);
		void onConnectionStateChanged(android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onGetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3);
		void onInterruptData(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyteArray arg2);
		void onSetProtocol(android::bluetooth::BluetoothDevice arg0, jbyte arg1);
		void onSetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jbyteArray arg3);
		void onVirtualCableUnplug(android::bluetooth::BluetoothDevice arg0);
	};
} // namespace android::bluetooth

