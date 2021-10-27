#include "../../MacAddress.hpp"
#include "../aware/PeerHandle.hpp"
#include "./ResponderLocation.hpp"
#include "../../../os/Parcel.hpp"
#include "./RangingResult.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	QAndroidJniObject RangingResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.rtt.RangingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RangingResult::STATUS_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_FAIL"
		);
	}
	jint RangingResult::STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC"
		);
	}
	jint RangingResult::STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.rtt.RangingResult",
			"STATUS_SUCCESS"
		);
	}
	
	RangingResult::RangingResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint RangingResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RangingResult::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RangingResult::getDistanceMm()
	{
		return __thiz.callMethod<jint>(
			"getDistanceMm",
			"()I"
		);
	}
	jint RangingResult::getDistanceStdDevMm()
	{
		return __thiz.callMethod<jint>(
			"getDistanceStdDevMm",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getMacAddress()
	{
		return __thiz.callObjectMethod(
			"getMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	jint RangingResult::getNumAttemptedMeasurements()
	{
		return __thiz.callMethod<jint>(
			"getNumAttemptedMeasurements",
			"()I"
		);
	}
	jint RangingResult::getNumSuccessfulMeasurements()
	{
		return __thiz.callMethod<jint>(
			"getNumSuccessfulMeasurements",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getPeerHandle()
	{
		return __thiz.callObjectMethod(
			"getPeerHandle",
			"()Landroid/net/wifi/aware/PeerHandle;"
		);
	}
	jlong RangingResult::getRangingTimestampMillis()
	{
		return __thiz.callMethod<jlong>(
			"getRangingTimestampMillis",
			"()J"
		);
	}
	jint RangingResult::getRssi()
	{
		return __thiz.callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint RangingResult::getStatus()
	{
		return __thiz.callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	QAndroidJniObject RangingResult::getUnverifiedResponderLocation()
	{
		return __thiz.callObjectMethod(
			"getUnverifiedResponderLocation",
			"()Landroid/net/wifi/rtt/ResponderLocation;"
		);
	}
	jint RangingResult::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RangingResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RangingResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

