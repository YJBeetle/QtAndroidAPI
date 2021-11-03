#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthCdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellSignalStrengthCdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellSignalStrengthCdma::CellSignalStrengthCdma(QJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthCdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthCdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellSignalStrengthCdma::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaDbm() const
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaEcio() const
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getCdmaLevel() const
	{
		return callMethod<jint>(
			"getCdmaLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoDbm() const
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoEcio() const
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoLevel() const
	{
		return callMethod<jint>(
			"getEvdoLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getEvdoSnr() const
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthCdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellSignalStrengthCdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellSignalStrengthCdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

