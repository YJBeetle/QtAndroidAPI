#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthCdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthCdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthCdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthCdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthCdma::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getCdmaDbm() const
	{
		return callMethod<jint>(
			"getCdmaDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getCdmaEcio() const
	{
		return callMethod<jint>(
			"getCdmaEcio",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getCdmaLevel() const
	{
		return callMethod<jint>(
			"getCdmaLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getEvdoDbm() const
	{
		return callMethod<jint>(
			"getEvdoDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getEvdoEcio() const
	{
		return callMethod<jint>(
			"getEvdoEcio",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getEvdoLevel() const
	{
		return callMethod<jint>(
			"getEvdoLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getEvdoSnr() const
	{
		return callMethod<jint>(
			"getEvdoSnr",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthCdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthCdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthCdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

