#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityGsm.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityGsm::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityGsm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellIdentityGsm::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellIdentityGsm::getArfcn() const
	{
		return callMethod<jint>(
			"getArfcn",
			"()I"
		);
	}
	inline jint CellIdentityGsm::getBsic() const
	{
		return callMethod<jint>(
			"getBsic",
			"()I"
		);
	}
	inline jint CellIdentityGsm::getCid() const
	{
		return callMethod<jint>(
			"getCid",
			"()I"
		);
	}
	inline jint CellIdentityGsm::getLac() const
	{
		return callMethod<jint>(
			"getLac",
			"()I"
		);
	}
	inline jint CellIdentityGsm::getMcc() const
	{
		return callMethod<jint>(
			"getMcc",
			"()I"
		);
	}
	inline JString CellIdentityGsm::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityGsm::getMnc() const
	{
		return callMethod<jint>(
			"getMnc",
			"()I"
		);
	}
	inline JString CellIdentityGsm::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityGsm::getMobileNetworkOperator() const
	{
		return callObjectMethod(
			"getMobileNetworkOperator",
			"()Ljava/lang/String;"
		);
	}
	inline jint CellIdentityGsm::getPsc() const
	{
		return callMethod<jint>(
			"getPsc",
			"()I"
		);
	}
	inline jint CellIdentityGsm::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityGsm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityGsm::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
