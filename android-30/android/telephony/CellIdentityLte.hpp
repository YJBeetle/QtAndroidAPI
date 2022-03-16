#pragma once

#include "../../JIntArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./ClosedSubscriberGroupInfo.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityLte.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityLte::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityLte",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellIdentityLte::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CellIdentityLte::getAdditionalPlmns() const
	{
		return callObjectMethod(
			"getAdditionalPlmns",
			"()Ljava/util/Set;"
		);
	}
	inline JIntArray CellIdentityLte::getBands() const
	{
		return callObjectMethod(
			"getBands",
			"()[I"
		);
	}
	inline jint CellIdentityLte::getBandwidth() const
	{
		return callMethod<jint>(
			"getBandwidth",
			"()I"
		);
	}
	inline jint CellIdentityLte::getCi() const
	{
		return callMethod<jint>(
			"getCi",
			"()I"
		);
	}
	inline android::telephony::ClosedSubscriberGroupInfo CellIdentityLte::getClosedSubscriberGroupInfo() const
	{
		return callObjectMethod(
			"getClosedSubscriberGroupInfo",
			"()Landroid/telephony/ClosedSubscriberGroupInfo;"
		);
	}
	inline jint CellIdentityLte::getEarfcn() const
	{
		return callMethod<jint>(
			"getEarfcn",
			"()I"
		);
	}
	inline jint CellIdentityLte::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	inline JString CellIdentityLte::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityLte::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	inline JString CellIdentityLte::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityLte::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityLte::getPci() const
	{
		return callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	inline jint CellIdentityLte::getTac() const
	{
		return callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	inline jint CellIdentityLte::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityLte::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityLte::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

