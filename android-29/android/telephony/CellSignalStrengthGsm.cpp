#include "../os/Parcel.hpp"
#include "./CellSignalStrengthGsm.hpp"

namespace android::telephony
{
	// Fields
	JObject CellSignalStrengthGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CellSignalStrengthGsm::CellSignalStrengthGsm(QJniObject obj) : android::telephony::CellSignalStrength(obj) {}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthGsm::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthGsm::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrengthGsm::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getBitErrorRate()
	{
		return callMethod<jint>(
			"getBitErrorRate",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getTimingAdvance()
	{
		return callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CellSignalStrengthGsm::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CellSignalStrengthGsm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

