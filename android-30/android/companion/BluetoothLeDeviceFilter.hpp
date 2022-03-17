#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothLeDeviceFilter.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject BluetoothLeDeviceFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.BluetoothLeDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothLeDeviceFilter::getRenamePrefixLengthLimit()
	{
		return callStaticMethod<jint>(
			"android.companion.BluetoothLeDeviceFilter",
			"getRenamePrefixLengthLimit",
			"()I"
		);
	}
	inline jint BluetoothLeDeviceFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothLeDeviceFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BluetoothLeDeviceFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BluetoothLeDeviceFilter::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothLeDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

// Base class headers

