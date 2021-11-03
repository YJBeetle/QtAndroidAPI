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
		static JString ACTION_ALIAS_CHANGED();
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
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2) const;
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3) const;
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4) const;
		android::bluetooth::BluetoothGatt connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, android::os::Handler arg5) const;
		jboolean createBond() const;
		android::bluetooth::BluetoothSocket createInsecureL2capChannel(jint arg0) const;
		android::bluetooth::BluetoothSocket createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0) const;
		android::bluetooth::BluetoothSocket createL2capChannel(jint arg0) const;
		android::bluetooth::BluetoothSocket createRfcommSocketToServiceRecord(java::util::UUID arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jboolean fetchUuidsWithSdp() const;
		JString getAddress() const;
		JString getAlias() const;
		android::bluetooth::BluetoothClass getBluetoothClass() const;
		jint getBondState() const;
		JString getName() const;
		jint getType() const;
		JArray getUuids() const;
		jint hashCode() const;
		jboolean setPairingConfirmation(jboolean arg0) const;
		jboolean setPin(JByteArray arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth

