#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentity.def.hpp"
#include "./CellIdentityCdma.def.hpp"
#include "./CellSignalStrength.def.hpp"
#include "./CellSignalStrengthCdma.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoCdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellInfoCdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellInfoCdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellInfoCdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::CellIdentityCdma CellInfoCdma::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityCdma;"
		);
	}
	inline android::telephony::CellSignalStrengthCdma CellInfoCdma::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthCdma;"
		);
	}
	inline jint CellInfoCdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellInfoCdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfoCdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./CellInfo.hpp"

