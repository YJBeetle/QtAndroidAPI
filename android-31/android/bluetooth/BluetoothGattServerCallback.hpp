#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothGattCharacteristic;
}
namespace android::bluetooth
{
	class BluetoothGattDescriptor;
}
namespace android::bluetooth
{
	class BluetoothGattService;
}

namespace android::bluetooth
{
	class BluetoothGattServerCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattServerCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattServerCallback(QAndroidJniObject obj);
		
		// Constructors
		BluetoothGattServerCallback();
		
		// Methods
		void onCharacteristicReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattCharacteristic arg3);
		void onCharacteristicWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattCharacteristic arg2, jboolean arg3, jboolean arg4, jint arg5, JByteArray arg6);
		void onConnectionStateChange(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2);
		void onDescriptorReadRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, android::bluetooth::BluetoothGattDescriptor arg3);
		void onDescriptorWriteRequest(android::bluetooth::BluetoothDevice arg0, jint arg1, android::bluetooth::BluetoothGattDescriptor arg2, jboolean arg3, jboolean arg4, jint arg5, JByteArray arg6);
		void onExecuteWrite(android::bluetooth::BluetoothDevice arg0, jint arg1, jboolean arg2);
		void onMtuChanged(android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onNotificationSent(android::bluetooth::BluetoothDevice arg0, jint arg1);
		void onPhyRead(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
		void onPhyUpdate(android::bluetooth::BluetoothDevice arg0, jint arg1, jint arg2, jint arg3);
		void onServiceAdded(jint arg0, android::bluetooth::BluetoothGattService arg1);
	};
} // namespace android::bluetooth

