#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentity.def.hpp"
#include "./CellSignalStrength.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoNr.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellInfoNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellInfoNr::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::CellIdentity CellInfoNr::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	inline android::telephony::CellSignalStrength CellInfoNr::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrength;"
		);
	}
	inline jint CellInfoNr::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellInfoNr::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfoNr::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

