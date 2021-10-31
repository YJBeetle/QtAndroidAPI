#include "../os/Parcel.hpp"
#include "./SignalStrength.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass SignalStrength::CREATOR()
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
	SignalStrength::SignalStrength(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SignalStrength::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrength::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	__JniBaseClass SignalStrength::getCellSignalStrengths()
	{
		return callObjectMethod(
			"getCellSignalStrengths",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass SignalStrength::getCellSignalStrengths(jclass arg0)
	{
		return callObjectMethod(
			"getCellSignalStrengths",
			"(Ljava/lang/Class;)Ljava/util/List;",
			arg0
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
	jstring SignalStrength::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

