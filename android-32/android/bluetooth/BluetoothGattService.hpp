#pragma once

#include "./BluetoothGattCharacteristic.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothGattService.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothGattService::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothGattService",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothGattService::SERVICE_TYPE_PRIMARY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_PRIMARY"
		);
	}
	inline jint BluetoothGattService::SERVICE_TYPE_SECONDARY()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothGattService",
			"SERVICE_TYPE_SECONDARY"
		);
	}
	
	// Constructors
	inline BluetoothGattService::BluetoothGattService(java::util::UUID arg0, jint arg1)
		: JObject(
			"android.bluetooth.BluetoothGattService",
			"(Ljava/util/UUID;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jboolean BluetoothGattService::addCharacteristic(android::bluetooth::BluetoothGattCharacteristic arg0) const
	{
		return callMethod<jboolean>(
			"addCharacteristic",
			"(Landroid/bluetooth/BluetoothGattCharacteristic;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothGattService::addService(android::bluetooth::BluetoothGattService arg0) const
	{
		return callMethod<jboolean>(
			"addService",
			"(Landroid/bluetooth/BluetoothGattService;)Z",
			arg0.object()
		);
	}
	inline jint BluetoothGattService::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::bluetooth::BluetoothGattCharacteristic BluetoothGattService::getCharacteristic(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"getCharacteristic",
			"(Ljava/util/UUID;)Landroid/bluetooth/BluetoothGattCharacteristic;",
			arg0.object()
		);
	}
	inline JObject BluetoothGattService::getCharacteristics() const
	{
		return callObjectMethod(
			"getCharacteristics",
			"()Ljava/util/List;"
		);
	}
	inline JObject BluetoothGattService::getIncludedServices() const
	{
		return callObjectMethod(
			"getIncludedServices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothGattService::getInstanceId() const
	{
		return callMethod<jint>(
			"getInstanceId",
			"()I"
		);
	}
	inline jint BluetoothGattService::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline java::util::UUID BluetoothGattService::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline void BluetoothGattService::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
