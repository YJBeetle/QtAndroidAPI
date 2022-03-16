#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Light.hpp"

namespace android::hardware::lights
{
	// Fields
	JObject Light::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.lights.Light",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Light::LIGHT_CAPABILITY_BRIGHTNESS()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_CAPABILITY_BRIGHTNESS"
		);
	}
	jint Light::LIGHT_CAPABILITY_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_CAPABILITY_RGB"
		);
	}
	jint Light::LIGHT_TYPE_INPUT()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_INPUT"
		);
	}
	jint Light::LIGHT_TYPE_MICROPHONE()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_MICROPHONE"
		);
	}
	jint Light::LIGHT_TYPE_PLAYER_ID()
	{
		return getStaticField<jint>(
			"android.hardware.lights.Light",
			"LIGHT_TYPE_PLAYER_ID"
		);
	}
	
	// Constructors
	
	// Methods
	jint Light::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Light::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Light::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString Light::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Light::getOrdinal() const
	{
		return callMethod<jint>(
			"getOrdinal",
			"()I"
		);
	}
	jint Light::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean Light::hasBrightnessControl() const
	{
		return callMethod<jboolean>(
			"hasBrightnessControl",
			"()Z"
		);
	}
	jboolean Light::hasRgbControl() const
	{
		return callMethod<jboolean>(
			"hasRgbControl",
			"()Z"
		);
	}
	jint Light::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Light::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Light::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

