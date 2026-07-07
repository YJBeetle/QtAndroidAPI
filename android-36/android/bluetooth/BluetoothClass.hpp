#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothClass.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothClass::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothClass",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothClass::PROFILE_A2DP()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass",
			"PROFILE_A2DP"
		);
	}
	inline jint BluetoothClass::PROFILE_HEADSET()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass",
			"PROFILE_HEADSET"
		);
	}
	inline jint BluetoothClass::PROFILE_HID()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothClass",
			"PROFILE_HID"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothClass::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothClass::doesClassMatch(jint arg0) const
	{
		return callMethod<jboolean>(
			"doesClassMatch",
			"(I)Z",
			arg0
		);
	}
	inline jboolean BluetoothClass::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BluetoothClass::getDeviceClass() const
	{
		return callMethod<jint>(
			"getDeviceClass",
			"()I"
		);
	}
	inline jint BluetoothClass::getMajorDeviceClass() const
	{
		return callMethod<jint>(
			"getMajorDeviceClass",
			"()I"
		);
	}
	inline jboolean BluetoothClass::hasService(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasService",
			"(I)Z",
			arg0
		);
	}
	inline jint BluetoothClass::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BluetoothClass::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothClass::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
