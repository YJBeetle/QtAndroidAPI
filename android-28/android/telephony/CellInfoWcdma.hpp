#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentityWcdma.def.hpp"
#include "./CellSignalStrengthWcdma.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoWcdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellInfoWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellInfoWcdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellInfoWcdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::CellIdentityWcdma CellInfoWcdma::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityWcdma;"
		);
	}
	inline android::telephony::CellSignalStrengthWcdma CellInfoWcdma::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthWcdma;"
		);
	}
	inline jint CellInfoWcdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellInfoWcdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfoWcdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
