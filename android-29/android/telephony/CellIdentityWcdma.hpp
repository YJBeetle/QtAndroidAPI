#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityWcdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityWcdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityWcdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellIdentityWcdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellIdentityWcdma::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	inline jint CellIdentityWcdma::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	inline jint CellIdentityWcdma::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	inline JString CellIdentityWcdma::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityWcdma::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	inline JString CellIdentityWcdma::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityWcdma::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityWcdma::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	inline jint CellIdentityWcdma::getUarfcn() const
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	inline jint CellIdentityWcdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityWcdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityWcdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
