#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./SurfaceControl.def.hpp"

namespace android::view
{
	// Fields
	inline JObject SurfaceControl::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SurfaceControl::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SurfaceControl::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline void SurfaceControl::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void SurfaceControl::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	inline JString SurfaceControl::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SurfaceControl::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
