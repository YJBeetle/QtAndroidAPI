#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentity.def.hpp"
#include "./CellIdentityGsm.def.hpp"
#include "./CellSignalStrength.def.hpp"
#include "./CellSignalStrengthGsm.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoGsm.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellInfoGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellInfoGsm::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellInfoGsm::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::CellIdentityGsm CellInfoGsm::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityGsm;"
		);
	}
	inline android::telephony::CellSignalStrengthGsm CellInfoGsm::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthGsm;"
		);
	}
	inline jint CellInfoGsm::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellInfoGsm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfoGsm::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

