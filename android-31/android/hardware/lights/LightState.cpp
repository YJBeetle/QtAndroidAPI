#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	LightState::LightState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint LightState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint LightState::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint LightState::getPlayerId() const
	{
		return callMethod<jint>(
			"getPlayerId",
			"()I"
		);
	}
	JString LightState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void LightState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware::lights

