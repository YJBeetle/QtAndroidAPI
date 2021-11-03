#include "../../os/Parcel.hpp"
#include "./LightState.hpp"

namespace android::hardware::lights
{
	// Fields
	JObject LightState::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.lights.LightState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	LightState::LightState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LightState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint LightState::getColor()
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint LightState::getPlayerId()
	{
		return callMethod<jint>(
			"getPlayerId",
			"()I"
		);
	}
	jstring LightState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LightState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

