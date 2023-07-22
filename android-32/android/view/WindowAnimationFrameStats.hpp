#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./WindowAnimationFrameStats.def.hpp"

namespace android::view
{
	// Fields
	inline JObject WindowAnimationFrameStats::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowAnimationFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WindowAnimationFrameStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString WindowAnimationFrameStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WindowAnimationFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers
#include "./FrameStats.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
