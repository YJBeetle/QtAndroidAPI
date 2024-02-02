#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityCdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityCdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityCdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellIdentityCdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellIdentityCdma::getBasestationId() const
	{
		return callMethod<jint>(
			"getBasestationId",
			"()I"
		);
	}
	inline jint CellIdentityCdma::getLatitude() const
	{
		return callMethod<jint>(
			"getLatitude",
			"()I"
		);
	}
	inline jint CellIdentityCdma::getLongitude() const
	{
		return callMethod<jint>(
			"getLongitude",
			"()I"
		);
	}
	inline jint CellIdentityCdma::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	inline jint CellIdentityCdma::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	inline jint CellIdentityCdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityCdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityCdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "./CellIdentity.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
