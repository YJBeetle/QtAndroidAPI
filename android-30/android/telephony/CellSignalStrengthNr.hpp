#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthNr.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthNr::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthNr::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthNr::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getCsiRsrp() const
	{
		return callMethod<jint>(
			"getCsiRsrp",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getCsiRsrq() const
	{
		return callMethod<jint>(
			"getCsiRsrq",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getCsiSinr() const
	{
		return callMethod<jint>(
			"getCsiSinr",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getSsRsrp() const
	{
		return callMethod<jint>(
			"getSsRsrp",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getSsRsrq() const
	{
		return callMethod<jint>(
			"getSsRsrq",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::getSsSinr() const
	{
		return callMethod<jint>(
			"getSsSinr",
			"()I"
		);
	}
	inline jint CellSignalStrengthNr::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthNr::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthNr::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

// Base class headers
#include "./CellSignalStrength.hpp"

