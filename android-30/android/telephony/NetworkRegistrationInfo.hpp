#pragma once

#include "../os/Parcel.def.hpp"
#include "./CellIdentity.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkRegistrationInfo.def.hpp"

namespace android::telephony
{
	// Fields
	inline JObject NetworkRegistrationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NetworkRegistrationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint NetworkRegistrationInfo::DOMAIN_CS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_CS"
		);
	}
	inline jint NetworkRegistrationInfo::DOMAIN_CS_PS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_CS_PS"
		);
	}
	inline jint NetworkRegistrationInfo::DOMAIN_PS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_PS"
		);
	}
	inline jint NetworkRegistrationInfo::DOMAIN_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_UNKNOWN"
		);
	}
	inline jint NetworkRegistrationInfo::NR_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_CONNECTED"
		);
	}
	inline jint NetworkRegistrationInfo::NR_STATE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_NONE"
		);
	}
	inline jint NetworkRegistrationInfo::NR_STATE_NOT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_NOT_RESTRICTED"
		);
	}
	inline jint NetworkRegistrationInfo::NR_STATE_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_RESTRICTED"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_DATA"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_EMERGENCY"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_SMS"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_UNKNOWN"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_VIDEO"
		);
	}
	inline jint NetworkRegistrationInfo::SERVICE_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_VOICE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NetworkRegistrationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NetworkRegistrationInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint NetworkRegistrationInfo::getAccessNetworkTechnology() const
	{
		return callMethod<jint>(
			"getAccessNetworkTechnology",
			"()I"
		);
	}
	inline JObject NetworkRegistrationInfo::getAvailableServices() const
	{
		return callObjectMethod(
			"getAvailableServices",
			"()Ljava/util/List;"
		);
	}
	inline android::telephony::CellIdentity NetworkRegistrationInfo::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	inline jint NetworkRegistrationInfo::getDomain() const
	{
		return callMethod<jint>(
			"getDomain",
			"()I"
		);
	}
	inline JString NetworkRegistrationInfo::getRegisteredPlmn() const
	{
		return callObjectMethod(
			"getRegisteredPlmn",
			"()Ljava/lang/String;"
		);
	}
	inline jint NetworkRegistrationInfo::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	inline jint NetworkRegistrationInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean NetworkRegistrationInfo::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	inline jboolean NetworkRegistrationInfo::isRoaming() const
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	inline jboolean NetworkRegistrationInfo::isSearching() const
	{
		return callMethod<jboolean>(
			"isSearching",
			"()Z"
		);
	}
	inline JString NetworkRegistrationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NetworkRegistrationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
