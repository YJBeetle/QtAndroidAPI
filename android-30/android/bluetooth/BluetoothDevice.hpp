#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothClass;
}
namespace android::bluetooth
{
	class BluetoothGatt;
}
namespace android::bluetooth
{
	class BluetoothGattCallback;
}
namespace android::bluetooth
{
	class BluetoothSocket;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class Parcel;
}
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothDevice : public JObject
	{
	public:
		// Fields
		static jstring ACTION_ACL_CONNECTED();
		static jstring ACTION_ACL_DISCONNECTED();
		static jstring ACTION_ACL_DISCONNECT_REQUESTED();
		static jstring ACTION_ALIAS_CHANGED();
		static jstring ACTION_BOND_STATE_CHANGED();
		static jstring ACTION_CLASS_CHANGED();
		static jstring ACTION_FOUND();
		static jstring ACTION_NAME_CHANGED();
		static jstring ACTION_PAIRING_REQUEST();
		static jstring ACTION_UUID();
		static jint BOND_BONDED();
		static jint BOND_BONDING();
		static jint BOND_NONE();
		static JObject CREATOR();
		static jint DEVICE_TYPE_CLASSIC();
		static jint DEVICE_TYPE_DUAL();
		static jint DEVICE_TYPE_LE();
		static jint DEVICE_TYPE_UNKNOWN();
		static jint ERROR();
		static jstring EXTRA_BOND_STATE();
		static jstring EXTRA_CLASS();
		static jstring EXTRA_DEVICE();
		static jstring EXTRA_NAME();
		static jstring EXTRA_PAIRING_KEY();
		static jstring EXTRA_PAIRING_VARIANT();
		static jstring EXTRA_PREVIOUS_BOND_STATE();
		static jstring EXTRA_RSSI();
		static jstring EXTRA_UUID();
		static jint PAIRING_VARIANT_PASSKEY_CONFIRMATION();
		static jint PAIRING_VARIANT_PIN();
		static jint PHY_LE_1M();
		static jint PHY_LE_1M_MASK();
		static jint PHY_LE_2M();
		static jint PHY_LE_2M_MASK();
		static jint PHY_LE_CODED();
		static jint PHY_LE_CODED_MASK();
		static jint PHY_OPTION_NO_PREFERRED();
		static jint PHY_OPTION_S2();
		static jint PHY_OPTION_S8();
		static jint TRANSPORT_AUTO();
		static jint TRANSPORT_BREDR();
		static jint TRANSPORT_LE();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothDevice(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2);
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3);
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4);
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, android::os::Handler arg5);
		jboolean createBond();
		android::bluetooth::BluetoothSocket createInsecureL2capChannel(jint arg0);
		android::bluetooth::BluetoothSocket createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0);
		android::bluetooth::BluetoothSocket createL2capChannel(jint arg0);
		android::bluetooth::BluetoothSocket createRfcommSocketToServiceRecord(java::util::UUID arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean fetchUuidsWithSdp();
		jstring getAddress();
		jstring getAlias();
		android::bluetooth::BluetoothClass getBluetoothClass();
		jint getBondState();
		jstring getName();
		jint getType();
		jarray getUuids();
		jint hashCode();
		jboolean setPairingConfirmation(jboolean arg0);
		jboolean setPin(jbyteArray arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

