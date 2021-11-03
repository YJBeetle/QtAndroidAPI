#include "./BluetoothGattCharacteristic.hpp"
#include "../os/Parcel.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothGattService.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothGattService::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattService",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothGattService::SERVICE_TYPE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_PRIMARY"
		);
	}
	jint BluetoothGattService::SERVICE_TYPE_SECONDARY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_SECONDARY"
		);
	}
	
	// QJniObject forward
	BluetoothGattService::BluetoothGattService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothGattService::BluetoothGattService(java::util::UUID arg0, jint arg1)
		: JObject(
			"android.bluetooth.BluetoothGattService",
			"(Ljava/util/UUID;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jboolean BluetoothGattService::addCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0)
	{
		return callMethod<jboolean>(
			"addCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothGattService::addService(android::bluetooth::BluetoothGattService arg0)
	{
		return callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	jint BluetoothGattService::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::bluetooth::BluetoothGattCharacteristic BluetoothGattService::getCharacteristic(java::util::UUID arg0)
	{
		return callObjectMethod(
			"getCharacteristic",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattCharacteristic;",
			arg0.object()
		);
	}
	JObject BluetoothGattService::getCharacteristics()
	{
		return callObjectMethod(
			"getCharacteristics",
			"()Ljava/util/List;"
		);
	}
	JObject BluetoothGattService::getIncludedServices()
	{
		return callObjectMethod(
			"getIncludedServices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothGattService::getInstanceId()
	{
		return callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	jint BluetoothGattService::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	java::util::UUID BluetoothGattService::getUuid()
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	void BluetoothGattService::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

