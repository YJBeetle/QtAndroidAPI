#pragma once

#include "../../JArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./OverlayProperties.def.hpp"

namespace android::hardware
{
	// Fields
	inline JObject OverlayProperties::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.OverlayProperties",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint OverlayProperties::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JArray OverlayProperties::getLutProperties() const
	{
		return callObjectMethod(
			"getLutProperties",
			"()[Landroid/hardware/LutProperties;"
		);
	}
	inline jboolean OverlayProperties::isCombinationSupported(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isCombinationSupported",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean OverlayProperties::isMixedColorSpacesSupported() const
	{
		return callMethod<jboolean>(
			"isMixedColorSpacesSupported",
			"()Z"
		);
	}
	inline void OverlayProperties::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
