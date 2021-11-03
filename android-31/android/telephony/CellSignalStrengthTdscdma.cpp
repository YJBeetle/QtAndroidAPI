#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthTdscdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellSignalStrengthTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellSignalStrengthTdscdma::CellSignalStrengthTdscdma(QAndroidJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthTdscdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthTdscdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellSignalStrengthTdscdma::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::getRscp()
	{
		return callMethod<jint>(
			"getRscp",
			"()I"
		);
	}
	jint CellSignalStrengthTdscdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellSignalStrengthTdscdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellSignalStrengthTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

