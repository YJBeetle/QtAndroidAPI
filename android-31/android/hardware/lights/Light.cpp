#include "../../os/Parcel.hpp"
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
	
	// QJniObject forward
	Light::Light(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Light::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Light::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Light::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring Light::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Light::getOrdinal()
	{
		return callMethod<jint>(
			"getOrdinal",
			"()I"
		);
	}
	jint Light::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean Light::hasBrightnessControl()
	{
		return callMethod<jboolean>(
			"hasBrightnessControl",
			"()Z"
		);
	}
	jboolean Light::hasRgbControl()
	{
		return callMethod<jboolean>(
			"hasRgbControl",
			"()Z"
		);
	}
	jint Light::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Light::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Light::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

