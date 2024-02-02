#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Light.def.hpp"

namespace android::hardware::lights
{
	// Fields
	inline JObject Light::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.lights.Light",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Light::LIGHT_CAPABILITY_BRIGHTNESS()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_CAPABILITY_BRIGHTNESS"
		);
	}
	inline jint Light::LIGHT_CAPABILITY_COLOR_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_CAPABILITY_COLOR_RGB"
		);
	}
	inline jint Light::LIGHT_CAPABILITY_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_CAPABILITY_RGB"
		);
	}
	inline jint Light::LIGHT_TYPE_INPUT()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_INPUT"
		);
	}
	inline jint Light::LIGHT_TYPE_KEYBOARD_BACKLIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_KEYBOARD_BACKLIGHT"
		);
	}
	inline jint Light::LIGHT_TYPE_MICROPHONE()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_MICROPHONE"
		);
	}
	inline jint Light::LIGHT_TYPE_PLAYER_ID()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_PLAYER_ID"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Light::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Light::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Light::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString Light::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Light::getOrdinal() const
	{
		return callMethod<jint>(
			"getOrdinal",
			"()I"
		);
	}
	inline jint Light::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jboolean Light::hasBrightnessControl() const
	{
		return callMethod<jboolean>(
			"hasBrightnessControl",
			"()Z"
		);
	}
	inline jboolean Light::hasRgbControl() const
	{
		return callMethod<jboolean>(
			"hasRgbControl",
			"()Z"
		);
	}
	inline jint Light::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Light::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Light::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::lights;
#endif
