#include "../../JByteArray.hpp"
#include "./BluetoothGattDescriptor.hpp"
#include "./BluetoothGattService.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattCharacteristic.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothGattCharacteristic::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattCharacteristic",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_FLOAT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_FLOAT"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SFLOAT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SFLOAT"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT16"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT32"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_SINT8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_SINT8"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT16"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT32"
		);
	}
	jint BluetoothGattCharacteristic::FORMAT_UINT8()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"FORMAT_UINT8"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	jint BluetoothGattCharacteristic::PERMISSION_WRITE_SIGNED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_BROADCAST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_BROADCAST"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_EXTENDED_PROPS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_EXTENDED_PROPS"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_INDICATE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_INDICATE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_NOTIFY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_NOTIFY"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_READ"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_SIGNED_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_SIGNED_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE"
		);
	}
	jint BluetoothGattCharacteristic::PROPERTY_WRITE_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"PROPERTY_WRITE_NO_RESPONSE"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_DEFAULT"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_NO_RESPONSE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_NO_RESPONSE"
		);
	}
	jint BluetoothGattCharacteristic::WRITE_TYPE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattCharacteristic",
			"WRITE_TYPE_SIGNED"
		);
	}
	
	// Constructors
	BluetoothGattCharacteristic::BluetoothGattCharacteristic(java::util::UUID arg0, jint arg1, jint arg2)
		: JObject(
			"android.bluetooth.BluetoothGattCharacteristic",
			"(Ljava/util/UUID;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean BluetoothGattCharacteristic::addDescriptor(android::bluetooth::BluetoothGattDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"addDescriptor",
			"(Landroid/bluetooth/BluetoothGattDescriptor;)Z",
			arg0.object()
		);
	}
	jint BluetoothGattCharacteristic::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::bluetooth::BluetoothGattDescriptor BluetoothGattCharacteristic::getDescriptor(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"getDescriptor",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattDescriptor;",
			arg0.object()
		);
	}
	JObject BluetoothGattCharacteristic::getDescriptors() const
	{
		return callObjectMethod(
			"getDescriptors",
			"()Ljava/util/List;"
		);
	}
	java::lang::Float BluetoothGattCharacteristic::getFloatValue(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getFloatValue",
			"(II)Ljava/lang/Float;",
			arg0,
			arg1
		);
	}
	jint BluetoothGattCharacteristic::getInstanceId() const
	{
		return callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	java::lang::Integer BluetoothGattCharacteristic::getIntValue(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getIntValue",
			"(II)Ljava/lang/Integer;",
			arg0,
			arg1
		);
	}
	jint BluetoothGattCharacteristic::getPermissions() const
	{
		return callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	jint BluetoothGattCharacteristic::getProperties() const
	{
		return callMethod<jint>(
			"getProperties",
			"()I"
		);
	}
	android::bluetooth::BluetoothGattService BluetoothGattCharacteristic::getService() const
	{
		return callObjectMethod(
			"getService",
			"()Landroid/bluetooth/BluetoothGattService;"
		);
	}
	JString BluetoothGattCharacteristic::getStringValue(jint arg0) const
	{
		return callObjectMethod(
			"getStringValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	java::util::UUID BluetoothGattCharacteristic::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	JByteArray BluetoothGattCharacteristic::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	jint BluetoothGattCharacteristic::getWriteType() const
	{
		return callMethod<jint>(
			"getWriteType",
			"()I"
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(JString arg0) const
	{
		return callMethod<jboolean>(
			"setValue",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"setValue",
			"(III)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean BluetoothGattCharacteristic::setValue(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void BluetoothGattCharacteristic::setWriteType(jint arg0) const
	{
		callMethod<void>(
			"setWriteType",
			"(I)V",
			arg0
		);
	}
	void BluetoothGattCharacteristic::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

