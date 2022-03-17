#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellIdentity.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject CellIdentity::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellIdentity",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CellIdentity::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CellIdentity::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CellIdentity::getOperatorAlphaLong() const
	{
		return callObjectMethod(
			"getOperatorAlphaLong",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString CellIdentity::getOperatorAlphaShort() const
	{
		return callObjectMethod(
			"getOperatorAlphaShort",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CellIdentity::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void CellIdentity::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

