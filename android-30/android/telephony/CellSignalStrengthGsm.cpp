#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthGsm::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthGsm::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellSignalStrengthGsm::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getBitErrorRate() const
	{
		return callMethod<jint>(
			"getBitErrorRate",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::getTimingAdvance() const
	{
		return callMethod<jint>(
			"getTimingAdvance",
			"()I"
		);
	}
	jint CellSignalStrengthGsm::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellSignalStrengthGsm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellSignalStrengthGsm::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

