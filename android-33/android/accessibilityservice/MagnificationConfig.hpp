#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./MagnificationConfig.def.hpp"

namespace android::accessibilityservice
{
	// Fields
	inline JObject MagnificationConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.MagnificationConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MagnificationConfig::MAGNIFICATION_MODE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.MagnificationConfig",
			"MAGNIFICATION_MODE_DEFAULT"
		);
	}
	inline jint MagnificationConfig::MAGNIFICATION_MODE_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.MagnificationConfig",
			"MAGNIFICATION_MODE_FULLSCREEN"
		);
	}
	inline jint MagnificationConfig::MAGNIFICATION_MODE_WINDOW()
	{
		return getStaticField<jint>(
			"android.accessibilityservice.MagnificationConfig",
			"MAGNIFICATION_MODE_WINDOW"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MagnificationConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat MagnificationConfig::getCenterX() const
	{
		return callMethod<jfloat>(
			"getCenterX",
			"()F"
		);
	}
	inline jfloat MagnificationConfig::getCenterY() const
	{
		return callMethod<jfloat>(
			"getCenterY",
			"()F"
		);
	}
	inline jint MagnificationConfig::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jfloat MagnificationConfig::getScale() const
	{
		return callMethod<jfloat>(
			"getScale",
			"()F"
		);
	}
	inline JString MagnificationConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MagnificationConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::accessibilityservice;
#endif
