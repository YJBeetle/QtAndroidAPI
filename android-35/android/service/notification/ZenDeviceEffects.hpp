#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ZenDeviceEffects.def.hpp"

namespace android::service::notification
{
	// Fields
	inline JObject ZenDeviceEffects::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.ZenDeviceEffects",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ZenDeviceEffects::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ZenDeviceEffects::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ZenDeviceEffects::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ZenDeviceEffects::shouldDimWallpaper() const
	{
		return callMethod<jboolean>(
			"shouldDimWallpaper",
			"()Z"
		);
	}
	inline jboolean ZenDeviceEffects::shouldDisplayGrayscale() const
	{
		return callMethod<jboolean>(
			"shouldDisplayGrayscale",
			"()Z"
		);
	}
	inline jboolean ZenDeviceEffects::shouldSuppressAmbientDisplay() const
	{
		return callMethod<jboolean>(
			"shouldSuppressAmbientDisplay",
			"()Z"
		);
	}
	inline jboolean ZenDeviceEffects::shouldUseNightMode() const
	{
		return callMethod<jboolean>(
			"shouldUseNightMode",
			"()Z"
		);
	}
	inline JString ZenDeviceEffects::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ZenDeviceEffects::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::notification;
#endif
