#include "../../MacAddress.hpp"
#include "../aware/PeerHandle.hpp"
#include "./ResponderLocation.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./RangingResult.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	JObject RangingResult::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.RangingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RangingResult::STATUS_FAIL()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_FAIL"
		);
	}
	jint RangingResult::STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC"
		);
	}
	jint RangingResult::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_SUCCESS"
		);
	}
	
	// QJniObject forward
	RangingResult::RangingResult(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RangingResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RangingResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint RangingResult::getDistanceMm() const
	{
		return callMethod<jint>(
			"getDistanceMm",
			"()I"
		);
	}
	jint RangingResult::getDistanceStdDevMm() const
	{
		return callMethod<jint>(
			"getDistanceStdDevMm",
			"()I"
		);
	}
	android::net::MacAddress RangingResult::getMacAddress() const
	{
		return callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	jint RangingResult::getNumAttemptedMeasurements() const
	{
		return callMethod<jint>(
			"getNumAttemptedMeasurements",
			"()I"
		);
	}
	jint RangingResult::getNumSuccessfulMeasurements() const
	{
		return callMethod<jint>(
			"getNumSuccessfulMeasurements",
			"()I"
		);
	}
	android::net::wifi::aware::PeerHandle RangingResult::getPeerHandle() const
	{
		return callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	jlong RangingResult::getRangingTimestampMillis() const
	{
		return callMethod<jlong>(
			"getRangingTimestampMillis",
			"()J"
		);
	}
	jint RangingResult::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint RangingResult::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	android::net::wifi::rtt::ResponderLocation RangingResult::getUnverifiedResponderLocation() const
	{
		return callObjectMethod(
			"getUnverifiedResponderLocation",
			"()Landroid/net/wifi/rtt/ResponderLocation;"
		);
	}
	jint RangingResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean RangingResult::is80211mcMeasurement() const
	{
		return callMethod<jboolean>(
			"is80211mcMeasurement",
			"()Z"
		);
	}
	JString RangingResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RangingResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

