#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./WindowContentFrameStats.def.hpp"

namespace android::view
{
	// Fields
	inline JObject WindowContentFrameStats::CREATOR()
	{
		return getStaticObjectField(
			"android.view.WindowContentFrameStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WindowContentFrameStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong WindowContentFrameStats::getFramePostedTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFramePostedTimeNano",
			"(I)J",
			arg0
		);
	}
	inline jlong WindowContentFrameStats::getFrameReadyTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFrameReadyTimeNano",
			"(I)J",
			arg0
		);
	}
	inline JString WindowContentFrameStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WindowContentFrameStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
