#include "../os/Parcel.hpp"
#include "./SignalStrength.hpp"

namespace android::telephony
{
	// Fields
	jint SignalStrength::INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SignalStrength",
			"INVALID"
		);
	}
	
	SignalStrength::SignalStrength(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SignalStrength::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SignalStrength::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SignalStrength::getCdmaDbm()
	{
		return __thiz.callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint SignalStrength::getCdmaEcio()
	{
		return __thiz.callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	QAndroidJniObject SignalStrength::getCellSignalStrengths()
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrengths",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SignalStrength::getCellSignalStrengths(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getCellSignalStrengths",
			"(Ljava/lang/Class;)Ljava/util/List;",
			arg0
		);
	}
	jint SignalStrength::getEvdoDbm()
	{
		return __thiz.callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint SignalStrength::getEvdoEcio()
	{
		return __thiz.callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint SignalStrength::getEvdoSnr()
	{
		return __thiz.callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint SignalStrength::getGsmBitErrorRate()
	{
		return __thiz.callMethod<jint>(
			"getGsmBitErrorRate",
			"()I"
		);
	}
	jint SignalStrength::getGsmSignalStrength()
	{
		return __thiz.callMethod<jint>(
			"getGsmSignalStrength",
			"()I"
		);
	}
	jint SignalStrength::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint SignalStrength::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SignalStrength::isGsm()
	{
		return __thiz.callMethod<jboolean>(
			"isGsm",
			"()Z"
		);
	}
	jstring SignalStrength::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SignalStrength::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telephony

