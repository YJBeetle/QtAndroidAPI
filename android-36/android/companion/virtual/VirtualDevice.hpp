#pragma once

#include "../../../JIntArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./VirtualDevice.def.hpp"

namespace android::companion::virtual_
{
	// Fields
	inline JObject VirtualDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.virtual.VirtualDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VirtualDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint VirtualDevice::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline JIntArray VirtualDevice::getDisplayIds() const
	{
		return callObjectMethod(
			"getDisplayIds",
			"()[I"
		);
	}
	inline JString VirtualDevice::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString VirtualDevice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline JString VirtualDevice::getPersistentDeviceId() const
	{
		return callObjectMethod(
			"getPersistentDeviceId",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean VirtualDevice::hasCustomSensorSupport() const
	{
		return callMethod<jboolean>(
			"hasCustomSensorSupport",
			"()Z"
		);
	}
	inline JString VirtualDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VirtualDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion::virtual_

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion::virtual_;
#endif
