#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
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
class JObject;
class JString;
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
		static JString ACTION_ACL_CONNECTED();
		static JString ACTION_ACL_DISCONNECTED();
		static JString ACTION_ACL_DISCONNECT_REQUESTED();
		static JString ACTION_BOND_STATE_CHANGED();
		static JString ACTION_CLASS_CHANGED();
		static JString ACTION_FOUND();
		static JString ACTION_NAME_CHANGED();
		static JString ACTION_PAIRING_REQUEST();
		static JString ACTION_UUID();
		static jint BOND_BONDED();
		static jint BOND_BONDING();
		static jint BOND_NONE();
		static JObject CREATOR();
		static jint DEVICE_TYPE_CLASSIC();
		static jint DEVICE_TYPE_DUAL();
		static jint DEVICE_TYPE_LE();
		static jint DEVICE_TYPE_UNKNOWN();
		static jint ERROR();
		static JString EXTRA_BOND_STATE();
		static JString EXTRA_CLASS();
		static JString EXTRA_DEVICE();
		static JString EXTRA_NAME();
		static JString EXTRA_PAIRING_KEY();
		static JString EXTRA_PAIRING_VARIANT();
		static JString EXTRA_PREVIOUS_BOND_STATE();
		static JString EXTRA_RSSI();
		static JString EXTRA_UUID();
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
		android::bluetooth::BluetoothSocket createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0);
		android::bluetooth::BluetoothSocket createRfcommSocketToServiceRecord(java::util::UUID arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jboolean fetchUuidsWithSdp();
		JString getAddress();
		android::bluetooth::BluetoothClass getBluetoothClass();
		jint getBondState();
		JString getName();
		jint getType();
		JArray getUuids();
		jint hashCode();
		jboolean setPairingConfirmation(jboolean arg0);
		jboolean setPin(JByteArray arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth

