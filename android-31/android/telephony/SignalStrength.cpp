#include "../os/Parcel.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SignalStrength.hpp"

namespace android::telephony
{
	// Fields
	JObject SignalStrength::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.SignalStrength",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SignalStrength::INVALID()
	{
		return getStaticField<jint>(
			"android.telephony.SignalStrength",
			"INVALID"
		);
	}
	
	// QJniObject forward
	SignalStrength::SignalStrength(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SignalStrength::SignalStrength(android::telephony::SignalStrength &arg0)
		: JObject(
			"android.telephony.SignalStrength",
			"(Landroid/telephony/SignalStrength;)V",
			arg0.object()
		) {}
	
	// Methods
	jint SignalStrength::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrength::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SignalStrength::getCdmaDbm()
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint SignalStrength::getCdmaEcio()
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	JObject SignalStrength::getCellSignalStrengths()
	{
		return callObjectMethod(
			"getCellSignalStrengths",
			"()Ljava/util/List;"
		);
	}
	JObject SignalStrength::getCellSignalStrengths(JClass arg0)
	{
		return callObjectMethod(
			"getCellSignalStrengths",
			"(Ljava/lang/Class;)Ljava/util/List;",
			arg0.object<jclass>()
		);
	}
	jint SignalStrength::getEvdoDbm()
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint SignalStrength::getEvdoEcio()
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint SignalStrength::getEvdoSnr()
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint SignalStrength::getGsmBitErrorRate()
	{
		return callMethod<jint>(
			"getGsmBitErrorRate",
			"()I"
		);
	}
	jint SignalStrength::getGsmSignalStrength()
	{
		return callMethod<jint>(
			"getGsmSignalStrength",
			"()I"
		);
	}
	jint SignalStrength::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jlong SignalStrength::getTimestampMillis()
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	jint SignalStrength::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SignalStrength::isGsm()
	{
		return callMethod<jboolean>(
			"isGsm",
			"()Z"
		);
	}
	JString SignalStrength::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SignalStrength::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

