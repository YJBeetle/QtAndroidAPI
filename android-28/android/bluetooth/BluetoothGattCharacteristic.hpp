#pragma once

#include "../../JByteArray.hpp"
#include "./BluetoothGattDescriptor.def.hpp"
#include "./BluetoothGattService.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/lang/Float.def.hpp"
#include "../../java/lang/Integer.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothGattCharacteristic.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothGattCharacteristic::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattCharacteristic",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_FLOAT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_FLOAT"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_SFLOAT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SFLOAT"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_SINT16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT16"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_SINT32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT32"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_SINT8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT8"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_UINT16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT16"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_UINT32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT32"
		);
	}
	inline jint BluetoothGattCharacteristic::FORMAT_UINT8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT8"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	inline jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_BROADCAST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_BROADCAST"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_EXTENDED_PROPS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_EXTENDED_PROPS"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_INDICATE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_INDICATE"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_NOTIFY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_NOTIFY"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_READ"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_SIGNED_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_SIGNED_WRITE"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE"
		);
	}
	inline jint BluetoothGattCharacteristic::PROPERTY_WRITE_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE_NO_RESPONSE"
		);
	}
	inline jint BluetoothGattCharacteristic::WRITE_TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_DEFAULT"
		);
	}
	inline jint BluetoothGattCharacteristic::WRITE_TYPE_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_NO_RESPONSE"
		);
	}
	inline jint BluetoothGattCharacteristic::WRITE_TYPE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_SIGNED"
		);
	}
	
	// Constructors
	inline BluetoothGattCharacteristic::BluetoothGattCharacteristic(java::util::UUID arg0, jint arg1, jint arg2)
		: JObject(
			"android.bluetooth.BluetoothGattCharacteristic",
			"(Ljava/util/UUID;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean BluetoothGattCharacteristic::addDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"addDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
	inline jint BluetoothGattCharacteristic::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::bluetooth::BluetoothGattDescriptor BluetoothGattCharacteristic::getDescriptor(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"getDescriptor",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattDescriptor;",
			arg0.object()
		);
	}
	inline JObject BluetoothGattCharacteristic::getDescriptors() const
	{
		return callObjectMethod(
			"getDescriptors",
			"()Ljava/util/List;"
		);
	}
	inline java::lang::Float BluetoothGattCharacteristic::getFloatValue(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFloatValue",
			"(II)Ljava/lang/Float;",
			arg0,
			arg1
		);
	}
	inline jint BluetoothGattCharacteristic::getInstanceId() const
	{
		return callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	inline java::lang::Integer BluetoothGattCharacteristic::getIntValue(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getIntValue",
			"(II)Ljava/lang/Integer;",
			arg0,
			arg1
		);
	}
	inline jint BluetoothGattCharacteristic::getPermissions() const
	{
		return callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	inline jint BluetoothGattCharacteristic::getProperties() const
	{
		return callMethod<jint>(
			"getProperties",
			"()I"
		);
	}
	inline android::bluetooth::BluetoothGattService BluetoothGattCharacteristic::getService() const
	{
		return callObjectMethod(
			"getService",
			"()Landroid/bluetooth/BluetoothGattService;"
		);
	}
	inline JString BluetoothGattCharacteristic::getStringValue(jint arg0) const
	{
		return callObjectMethod(
			"getStringValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline java::util::UUID BluetoothGattCharacteristic::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline JByteArray BluetoothGattCharacteristic::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	inline jint BluetoothGattCharacteristic::getWriteType() const
	{
		return callMethod<jint>(
			"getWriteType",
			"()I"
		);
	}
	inline jboolean BluetoothGattCharacteristic::setValue(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	inline jboolean BluetoothGattCharacteristic::setValue(JString arg0) const
	{
		return callMethod<jboolean>(
			"setValue",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"setValue",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2, jint arg3) const
	{
		return callMethod<jboolean>(
			"setValue",
			"(IIII)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void BluetoothGattCharacteristic::setWriteType(jint arg0) const
	{
		callMethod<void>(
			"setWriteType",
			"(I)V",
			arg0
		);
	}
	inline void BluetoothGattCharacteristic::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

