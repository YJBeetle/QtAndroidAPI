#include "../os/Parcel.hpp"
#include "./CellSignalStrengthCdma.hpp"

namespace android::telephony
{
	// Fields
	QAndroidJniObject CellSignalStrengthCdma::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellSignalStrengthCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellSignalStrengthCdma::CellSignalStrengthCdma(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthCdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthCdma::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthCdma::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaDbm()
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaEcio()
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaLevel()
	{
		return callMethod<jint>(
			"getCdmaLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoDbm()
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoEcio()
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoLevel()
	{
		return callMethod<jint>(
			"getEvdoLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoSnr()
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthCdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthCdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

