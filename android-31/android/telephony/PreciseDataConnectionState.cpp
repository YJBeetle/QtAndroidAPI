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
	
	// QJniObject forward
	PreciseDataConnectionState::PreciseDataConnectionState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PreciseDataConnectionState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PreciseDataConnectionState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::data::ApnSetting PreciseDataConnectionState::getApnSetting() const
	{
		return callObjectMethod(
			"getApnSetting",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	jint PreciseDataConnectionState::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getLastCauseCode() const
	{
		return callMethod<jint>(
			"getLastCauseCode",
			"()I"
		);
	}
	android::net::LinkProperties PreciseDataConnectionState::getLinkProperties() const
	{
		return callObjectMethod(
			"getLinkProperties",
			"()Landroid/net/LinkProperties;"
		);
	}
	jint PreciseDataConnectionState::getNetworkType() const
	{
		return callMethod<jint>(
			"getNetworkType",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint PreciseDataConnectionState::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint PreciseDataConnectionState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PreciseDataConnectionState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PreciseDataConnectionState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

