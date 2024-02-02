#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./VirtualDevice.def.hpp"

namespace android::companion::virtual
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
	inline jboolean VirtualDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint VirtualDevice::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline JString VirtualDevice::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint VirtualDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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
} // namespace android::companion::virtual

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion::virtual;
#endif
