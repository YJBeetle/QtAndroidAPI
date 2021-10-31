#include "./BluetoothGattCharacteristic.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattDescriptor.hpp"

namespace android::bluetooth
{
	// Fields
	__JniBaseClass BluetoothGattDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jbyteArray BluetoothGattDescriptor::DISABLE_NOTIFICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"DISABLE_NOTIFICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray BluetoothGattDescriptor::ENABLE_INDICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_INDICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jbyteArray BluetoothGattDescriptor::ENABLE_NOTIFICATION_VALUE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattDescriptor",
			"ENABLE_NOTIFICATION_VALUE",
			"[B"
		).object<jbyteArray>();
	}
	jint BluetoothGattDescriptor::PERMISSION_READ()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_READ_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_READ_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_ENCRYPTED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_ENCRYPTED_MITM"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED"
		);
	}
	jint BluetoothGattDescriptor::PERMISSION_WRITE_SIGNED_MITM()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattDescriptor",
			"PERMISSION_WRITE_SIGNED_MITM"
		);
	}
	
	// QAndroidJniObject forward
	BluetoothGattDescriptor::BluetoothGattDescriptor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BluetoothGattDescriptor::BluetoothGattDescriptor(java::util::UUID arg0, jint arg1)
		: __JniBaseClass(
			"android.bluetooth.BluetoothGattDescriptor",
			"(Ljava/util/UUID;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint BluetoothGattDescriptor::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::bluetooth::BluetoothGattCharacteristic BluetoothGattDescriptor::getCharacteristic()
	{
		return callObjectMethod(
			"getCharacteristic",
			"()Landroid/bluetooth/BluetoothGattCharacteristic;"
		);
	}
	jint BluetoothGattDescriptor::getPermissions()
	{
		return callMethod<jint>(
			"getPermissions",
			"()I"
		);
	}
	java::util::UUID BluetoothGattDescriptor::getUuid()
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jbyteArray BluetoothGattDescriptor::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		).object<jbyteArray>();
	}
	jboolean BluetoothGattDescriptor::setValue(jbyteArray arg0)
	{
		return callMethod<jboolean>(
			"setValue",
			"([B)Z",
			arg0
		);
	}
	void BluetoothGattDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

