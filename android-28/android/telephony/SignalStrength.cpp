#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalStrength.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	
	// Methods
	jint SignalStrength::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrength::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SignalStrength::getCdmaDbm() const
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint SignalStrength::getCdmaEcio() const
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	jint SignalStrength::getEvdoDbm() const
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint SignalStrength::getEvdoEcio() const
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint SignalStrength::getEvdoSnr() const
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint SignalStrength::getGsmBitErrorRate() const
	{
		return callMethod<jint>(
			"getGsmBitErrorRate",
			"()I"
		);
	}
	jint SignalStrength::getGsmSignalStrength() const
	{
		return callMethod<jint>(
			"getGsmSignalStrength",
			"()I"
		);
	}
	jint SignalStrength::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint SignalStrength::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SignalStrength::isGsm() const
	{
		return callMethod<jboolean>(
			"isGsm",
			"()Z"
		);
	}
	JString SignalStrength::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SignalStrength::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

