#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthNr.hpp"

namespace android::telephony
{
	// Fields
	JObject CellSignalStrengthNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint CellSignalStrengthNr::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellSignalStrengthNr::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint CellSignalStrengthNr::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrp() const
	{
		return callMethod<jint>(
			"getCsiRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiRsrq() const
	{
		return callMethod<jint>(
			"getCsiRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getCsiSinr() const
	{
		return callMethod<jint>(
			"getCsiSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrp() const
	{
		return callMethod<jint>(
			"getSsRsrp",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsRsrq() const
	{
		return callMethod<jint>(
			"getSsRsrq",
			"()I"
		);
	}
	jint CellSignalStrengthNr::getSsSinr() const
	{
		return callMethod<jint>(
			"getSsSinr",
			"()I"
		);
	}
	jint CellSignalStrengthNr::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellSignalStrengthNr::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellSignalStrengthNr::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

