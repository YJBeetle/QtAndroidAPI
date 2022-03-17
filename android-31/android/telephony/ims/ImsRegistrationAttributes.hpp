#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ImsRegistrationAttributes.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline jint ImsRegistrationAttributes::ATTR_EPDG_OVER_CELL_INTERNET()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsRegistrationAttributes",
			"ATTR_EPDG_OVER_CELL_INTERNET"
		);
	}
	inline JObject ImsRegistrationAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRegistrationAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ImsRegistrationAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ImsRegistrationAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ImsRegistrationAttributes::getAttributeFlags() const
	{
		return callMethod<jint>(
			"getAttributeFlags",
			"()I"
		);
	}
	inline JObject ImsRegistrationAttributes::getFeatureTags() const
	{
		return callObjectMethod(
			"getFeatureTags",
			"()Ljava/util/Set;"
		);
	}
	inline jint ImsRegistrationAttributes::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	inline jint ImsRegistrationAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ImsRegistrationAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ImsRegistrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

// Base class headers

