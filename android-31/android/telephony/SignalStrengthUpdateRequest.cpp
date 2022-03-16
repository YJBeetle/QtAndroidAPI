#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalStrengthUpdateRequest.hpp"

namespace android::telephony
{
	// Fields
	JObject SignalStrengthUpdateRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalStrengthUpdateRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint SignalStrengthUpdateRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrengthUpdateRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject SignalStrengthUpdateRequest::getSignalThresholdInfos() const
	{
		return callObjectMethod(
			"getSignalThresholdInfos",
			"()Ljava/util/Collection;"
		);
	}
	jint SignalStrengthUpdateRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SignalStrengthUpdateRequest::isReportingRequestedWhileIdle() const
	{
		return callMethod<jboolean>(
			"isReportingRequestedWhileIdle",
			"()Z"
		);
	}
	JString SignalStrengthUpdateRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SignalStrengthUpdateRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

