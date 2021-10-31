#include "../os/Parcel.hpp"
#include "./CellSignalStrengthLte.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthLte::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellSignalStrengthLte::CellSignalStrengthLte(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthLte::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthLte::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthLte::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getCqi()
	{
		return callMethod<jint>(
			"getCqi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrp()
	{
		return callMethod<jint>(
			"getRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRsrq()
	{
		return callMethod<jint>(
			"getRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssi()
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getRssnr()
	{
		return callMethod<jint>(
			"getRssnr",
			"()I"
		);
	}
	jint CellSignalStrengthLte::getTimingAdvance()
	{
		return callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	jint CellSignalStrengthLte::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthLte::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthLte::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony
