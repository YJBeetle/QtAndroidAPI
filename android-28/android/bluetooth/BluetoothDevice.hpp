#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./BluetoothClass.def.hpp"
#include "./BluetoothGatt.def.hpp"
#include "./BluetoothGattCallback.def.hpp"
#include "./BluetoothSocket.def.hpp"
#include "../content/Context.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothDevice.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothDevice::ACTION_ACL_CONNECTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_CONNECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_ACL_DISCONNECTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECTED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_ACL_DISCONNECT_REQUESTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_ACL_DISCONNECT_REQUESTED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_BOND_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_BOND_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_CLASS_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_CLASS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_FOUND()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_FOUND",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_NAME_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_NAME_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_PAIRING_REQUEST()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_PAIRING_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::ACTION_UUID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"ACTION_UUID",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothDevice::BOND_BONDED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDED"
		);
	}
	inline jint BluetoothDevice::BOND_BONDING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_BONDING"
		);
	}
	inline jint BluetoothDevice::BOND_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"BOND_NONE"
		);
	}
	inline JObject BluetoothDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothDevice::DEVICE_TYPE_CLASSIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_CLASSIC"
		);
	}
	inline jint BluetoothDevice::DEVICE_TYPE_DUAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_DUAL"
		);
	}
	inline jint BluetoothDevice::DEVICE_TYPE_LE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_LE"
		);
	}
	inline jint BluetoothDevice::DEVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"DEVICE_TYPE_UNKNOWN"
		);
	}
	inline jint BluetoothDevice::ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"ERROR"
		);
	}
	inline JString BluetoothDevice::EXTRA_BOND_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_BOND_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_CLASS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_CLASS",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_DEVICE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_DEVICE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_NAME()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_PAIRING_KEY()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_PAIRING_VARIANT()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PAIRING_VARIANT",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_PREVIOUS_BOND_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_PREVIOUS_BOND_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_RSSI()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_RSSI",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothDevice::EXTRA_UUID()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothDevice",
			"EXTRA_UUID",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothDevice::PAIRING_VARIANT_PASSKEY_CONFIRMATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PASSKEY_CONFIRMATION"
		);
	}
	inline jint BluetoothDevice::PAIRING_VARIANT_PIN()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PAIRING_VARIANT_PIN"
		);
	}
	inline jint BluetoothDevice::PHY_LE_1M()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M"
		);
	}
	inline jint BluetoothDevice::PHY_LE_1M_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_1M_MASK"
		);
	}
	inline jint BluetoothDevice::PHY_LE_2M()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M"
		);
	}
	inline jint BluetoothDevice::PHY_LE_2M_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_2M_MASK"
		);
	}
	inline jint BluetoothDevice::PHY_LE_CODED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED"
		);
	}
	inline jint BluetoothDevice::PHY_LE_CODED_MASK()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_LE_CODED_MASK"
		);
	}
	inline jint BluetoothDevice::PHY_OPTION_NO_PREFERRED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_NO_PREFERRED"
		);
	}
	inline jint BluetoothDevice::PHY_OPTION_S2()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S2"
		);
	}
	inline jint BluetoothDevice::PHY_OPTION_S8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"PHY_OPTION_S8"
		);
	}
	inline jint BluetoothDevice::TRANSPORT_AUTO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_AUTO"
		);
	}
	inline jint BluetoothDevice::TRANSPORT_BREDR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_BREDR"
		);
	}
	inline jint BluetoothDevice::TRANSPORT_LE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothDevice",
			"TRANSPORT_LE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;I)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;II)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4
		);
	}
	inline android::bluetooth::BluetoothGatt BluetoothDevice::connectGatt(android::content::Context arg0, jboolean arg1, android::bluetooth::BluetoothGattCallback arg2, jint arg3, jint arg4, android::os::Handler arg5) const
	{
		return callObjectMethod(
			"connectGatt",
			"(Landroid/content/Context;ZLandroid/bluetooth/BluetoothGattCallback;IILandroid/os/Handler;)Landroid/bluetooth/BluetoothGatt;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline jboolean BluetoothDevice::createBond() const
	{
		return callMethod<jboolean>(
			"createBond",
			"()Z"
		);
	}
	inline android::bluetooth::BluetoothSocket BluetoothDevice::createInsecureRfcommSocketToServiceRecord(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"createInsecureRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.object()
		);
	}
	inline android::bluetooth::BluetoothSocket BluetoothDevice::createRfcommSocketToServiceRecord(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"createRfcommSocketToServiceRecord",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothSocket;",
			arg0.object()
		);
	}
	inline jint BluetoothDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean BluetoothDevice::fetchUuidsWithSdp() const
	{
		return callMethod<jboolean>(
			"fetchUuidsWithSdp",
			"()Z"
		);
	}
	inline JString BluetoothDevice::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline android::bluetooth::BluetoothClass BluetoothDevice::getBluetoothClass() const
	{
		return callObjectMethod(
			"getBluetoothClass",
			"()Landroid/bluetooth/BluetoothClass;"
		);
	}
	inline jint BluetoothDevice::getBondState() const
	{
		return callMethod<jint>(
			"getBondState",
			"()I"
		);
	}
	inline JString BluetoothDevice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothDevice::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JArray BluetoothDevice::getUuids() const
	{
		return callObjectMethod(
			"getUuids",
			"()[Landroid/os/ParcelUuid;"
		);
	}
	inline jint BluetoothDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BluetoothDevice::setPairingConfirmation(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setPairingConfirmation",
			"(Z)Z",
			arg0
		);
	}
	inline jboolean BluetoothDevice::setPin(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"setPin",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	inline JString BluetoothDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

// Base class headers

