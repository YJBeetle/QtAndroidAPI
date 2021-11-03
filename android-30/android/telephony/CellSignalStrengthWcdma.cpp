#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthWcdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellSignalStrengthWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellSignalStrengthWcdma::CellSignalStrengthWcdma(QJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthWcdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthWcdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellSignalStrengthWcdma::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthWcdma::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthWcdma::getEcNo()
	{
		return callMethod<jint>(
			"getEcNo",
			"()I"
		);
	}
	jint CellSignalStrengthWcdma::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthWcdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellSignalStrengthWcdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellSignalStrengthWcdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

