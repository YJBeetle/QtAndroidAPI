#pragma once

#include "../../JByteArray.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothGattDescriptor.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothGattDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JByteArray BluetoothGattDescriptor::DISABLE_NOTIFICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"DISABLE_NOTIFICATION_VALUE",
			"[B"
		);
	}
	inline JByteArray BluetoothGattDescriptor::ENABLE_INDICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_INDICATION_VALUE",
			"[B"
		);
	}
	inline JByteArray BluetoothGattDescriptor::ENABLE_NOTIFICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_NOTIFICATION_VALUE",
			"[B"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	inline jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	
	// Constructors
	inline BluetoothGattDescriptor::BluetoothGattDescriptor(java::util::UUID arg0, jint arg1)
		: JObject(
			"android.bluetooth.BluetoothGattDescriptor",
			"(Ljava/util/UUID;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint BluetoothGattDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::bluetooth::BluetoothGattCharacteristic BluetoothGattDescriptor::getCharacteristic() const
	{
		return callObjectMethod(
			"getCharacteristic",
			"()Landroid/bluetooth/BluetoothGattCharacteristic;"
		);
	}
	inline jint BluetoothGattDescriptor::getPermissions() const
	{
		return callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	inline java::util::UUID BluetoothGattDescriptor::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline JByteArray BluetoothGattDescriptor::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	inline jboolean BluetoothGattDescriptor::setValue(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	inline void BluetoothGattDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
