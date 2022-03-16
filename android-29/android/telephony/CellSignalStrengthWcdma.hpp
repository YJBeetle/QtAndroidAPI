#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellSignalStrengthWcdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellSignalStrengthWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellSignalStrengthWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellSignalStrengthWcdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellSignalStrengthWcdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrengthWcdma::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthWcdma::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrengthWcdma::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrengthWcdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellSignalStrengthWcdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellSignalStrengthWcdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

