#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentityNr.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentityNr::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentityNr",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellIdentityNr::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CellIdentityNr::getMccString() const
	{
		return callObjectMethod(
			"getMccString",
			"()Ljava/lang/String;"
		);
	}
	inline JString CellIdentityNr::getMncString() const
	{
		return callObjectMethod(
			"getMncString",
			"()Ljava/lang/String;"
		);
	}
	inline jlong CellIdentityNr::getNci() const
	{
		return callMethod<jlong>(
			"getNci",
			"()J"
		);
	}
	inline jint CellIdentityNr::getNrarfcn() const
	{
		return callMethod<jint>(
			"getNrarfcn",
			"()I"
		);
	}
	inline jint CellIdentityNr::getPci() const
	{
		return callMethod<jint>(
			"getPci",
			"()I"
		);
	}
	inline jint CellIdentityNr::getTac() const
	{
		return callMethod<jint>(
			"getTac",
			"()I"
		);
	}
	inline jint CellIdentityNr::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CellIdentityNr::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CellIdentityNr::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

