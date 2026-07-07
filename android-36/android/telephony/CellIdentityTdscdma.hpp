#pragma once

#include "../os/Parcel.def.hpp"
#include "./ClosedSubscriberGroupInfo.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityTdscdma.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellIdentityTdscdma::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellIdentityTdscdma::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CellIdentityTdscdma::getAdditionalPlmns() const
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	inline jint CellIdentityTdscdma::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	inline android::telephony::ClosedSubscriberGroupInfo CellIdentityTdscdma::getClosedSubscriberGroupInfo() const
	{
		return callObjectMethod(
			"getClosedSubscriberGroupInfo",
			"()Landroid/telephony/ClosedSubscriberGroupInfo;"
		);
	}
	inline jint CellIdentityTdscdma::getCpid() const
	{
		return callMethod<jint>(
			"getCpid",
			"()I"
		);
	}
	inline jint CellIdentityTdscdma::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	inline JString CellIdentityTdscdma::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityTdscdma::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityTdscdma::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityTdscdma::getUarfcn() const
	{
		return callMethod<jint>(
			"getUarfcn",
			"()I"
		);
	}
	inline jint CellIdentityTdscdma::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityTdscdma::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
