#pragma once

#include "../../JObject.hpp"

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
	class BluetoothGattCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothGattCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothGattCallback(QAndroidJniObject obj);
		
		// Constructors
		BluetoothGattCallback();
		
		// Methods
		void onCharacteristicChanged(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1) const;
		void onCharacteristicRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2) const;
		void onCharacteristicWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattCharacteristic arg1, jint arg2) const;
		void onConnectionStateChange(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const;
		void onDescriptorRead(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2) const;
		void onDescriptorWrite(android::bluetooth::BluetoothGatt arg0, android::bluetooth::BluetoothGattDescriptor arg1, jint arg2) const;
		void onMtuChanged(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const;
		void onPhyRead(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3) const;
		void onPhyUpdate(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2, jint arg3) const;
		void onReadRemoteRssi(android::bluetooth::BluetoothGatt arg0, jint arg1, jint arg2) const;
		void onReliableWriteCompleted(android::bluetooth::BluetoothGatt arg0, jint arg1) const;
		void onServiceChanged(android::bluetooth::BluetoothGatt arg0) const;
		void onServicesDiscovered(android::bluetooth::BluetoothGatt arg0, jint arg1) const;
	};
} // namespace android::bluetooth

