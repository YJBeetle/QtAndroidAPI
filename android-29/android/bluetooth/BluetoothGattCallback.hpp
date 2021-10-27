#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothGatt;
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
	class BluetoothGattCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		BluetoothGattCallback(QAndroidJniObject obj);
		// Constructors
		BluetoothGattCallback();
		
		// Methods
		void onCharacteristicChanged(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1);
		void onCharacteristicRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2);
		void onCharacteristicWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2);
		void onConnectionStateChange(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
		void onDescriptorRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2);
		void onDescriptorWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2);
		void onMtuChanged(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
		void onPhyRead(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3);
		void onPhyUpdate(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3);
		void onReadRemoteRssi(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2);
		void onReliableWriteCompleted(android::bluetooth::BluetoothGatt arg0, jint arg1);
		void onServicesDiscovered(android::bluetooth::BluetoothGatt arg0, jint arg1);
	};
} // namespace android::bluetooth

