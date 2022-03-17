#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentityTdscdma.def.hpp"
#include "./CellSignalStrengthTdscdma.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoTdscdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellInfoTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellInfoTdscdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellInfoTdscdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telephony::CellIdentityTdscdma CellInfoTdscdma::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityTdscdma;"
		);
	}
	inline android::telephony::CellSignalStrengthTdscdma CellInfoTdscdma::getCellSignalStrength() const
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthTdscdma;"
		);
	}
	inline jint CellInfoTdscdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellInfoTdscdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellInfoTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
