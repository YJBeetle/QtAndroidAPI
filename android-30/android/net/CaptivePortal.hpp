#pragma once

#include "../os/Parcel.def.hpp"
#include "./CaptivePortal.def.hpp"

namespace android::net
{
	// Fields
	inline JObject CaptivePortal::CREATOR()
	{
		return getStaticObjectField(
			"android.net.CaptivePortal",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CaptivePortal::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void CaptivePortal::ignoreNetwork() const
	{
		callMethod<void>(
			"ignoreNetwork",
			"()V"
		);
	}
	inline void CaptivePortal::reportCaptivePortalDismissed() const
	{
		callMethod<void>(
			"reportCaptivePortalDismissed",
			"()V"
		);
	}
	inline void CaptivePortal::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
