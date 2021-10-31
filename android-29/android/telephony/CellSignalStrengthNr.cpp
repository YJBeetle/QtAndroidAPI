#include "../os/Parcel.hpp"
#include "./CellSignalStrengthNr.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass CellSignalStrengthNr::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellSignalStrengthNr::CellSignalStrengthNr(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthNr::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthNr::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthNr::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrp()
	{
		return callMethod<jint>(
			"getCsiRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrq()
	{
		return callMethod<jint>(
			"getCsiRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiSinr()
	{
		return callMethod<jint>(
			"getCsiSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrp()
	{
		return callMethod<jint>(
			"getSsRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrq()
	{
		return callMethod<jint>(
			"getSsRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsSinr()
	{
		return callMethod<jint>(
			"getSsSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthNr::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthNr::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

