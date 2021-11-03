#include "../net/LinkProperties.hpp"
#include "../os/Parcel.hpp"
#include "./data/ApnSetting.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PreciseDataConnectionState.hpp"

namespace android::telephony
{
	// Fields
	JObject PreciseDataConnectionState::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.PreciseDataConnectionState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PreciseDataConnectionState::PreciseDataConnectionState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PreciseDataConnectionState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PreciseDataConnectionState::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::data::ApnSetting PreciseDataConnectionState::getApnSetting()
	{
		return callObjectMethod(
			"getApnSetting",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	jint PreciseDataConnectionState::getLastCauseCode()
	{
		return callMethod<jint>(
			"getLastCauseCode",
			"()I"
		);
	}
	android::net::LinkProperties PreciseDataConnectionState::getLinkProperties()
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	jint PreciseDataConnectionState::getNetworkType()
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint PreciseDataConnectionState::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PreciseDataConnectionState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PreciseDataConnectionState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

