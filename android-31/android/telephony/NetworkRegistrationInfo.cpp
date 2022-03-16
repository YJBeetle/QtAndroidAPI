#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkRegistrationInfo.hpp"

namespace android::telephony
{
	// Fields
	JObject NetworkRegistrationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.NetworkRegistrationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint NetworkRegistrationInfo::DOMAIN_CS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_CS"
		);
	}
	jint NetworkRegistrationInfo::DOMAIN_CS_PS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_CS_PS"
		);
	}
	jint NetworkRegistrationInfo::DOMAIN_PS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_PS"
		);
	}
	jint NetworkRegistrationInfo::DOMAIN_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"DOMAIN_UNKNOWN"
		);
	}
	jint NetworkRegistrationInfo::NR_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_CONNECTED"
		);
	}
	jint NetworkRegistrationInfo::NR_STATE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_NONE"
		);
	}
	jint NetworkRegistrationInfo::NR_STATE_NOT_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_NOT_RESTRICTED"
		);
	}
	jint NetworkRegistrationInfo::NR_STATE_RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"NR_STATE_RESTRICTED"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_DATA()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_DATA"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_EMERGENCY"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_SMS"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_UNKNOWN"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_VIDEO"
		);
	}
	jint NetworkRegistrationInfo::SERVICE_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkRegistrationInfo",
			"SERVICE_TYPE_VOICE"
		);
	}
	
	// Constructors
	
	// Methods
	jint NetworkRegistrationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkRegistrationInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint NetworkRegistrationInfo::getAccessNetworkTechnology() const
	{
		return callMethod<jint>(
			"getAccessNetworkTechnology",
			"()I"
		);
	}
	JObject NetworkRegistrationInfo::getAvailableServices() const
	{
		return callObjectMethod(
			"getAvailableServices",
			"()Ljava/util/List;"
		);
	}
	android::telephony::CellIdentity NetworkRegistrationInfo::getCellIdentity() const
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	jint NetworkRegistrationInfo::getDomain() const
	{
		return callMethod<jint>(
			"getDomain",
			"()I"
		);
	}
	JString NetworkRegistrationInfo::getRegisteredPlmn() const
	{
		return callObjectMethod(
			"getRegisteredPlmn",
			"()Ljava/lang/String;"
		);
	}
	jint NetworkRegistrationInfo::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint NetworkRegistrationInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NetworkRegistrationInfo::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jboolean NetworkRegistrationInfo::isRoaming() const
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	jboolean NetworkRegistrationInfo::isSearching() const
	{
		return callMethod<jboolean>(
			"isSearching",
			"()Z"
		);
	}
	JString NetworkRegistrationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkRegistrationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

