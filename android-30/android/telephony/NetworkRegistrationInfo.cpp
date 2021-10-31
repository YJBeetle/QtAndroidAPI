#include "../os/Parcel.hpp"
#include "./CellIdentity.hpp"
#include "./NetworkRegistrationInfo.hpp"

namespace android::telephony
{
	// Fields
	__JniBaseClass NetworkRegistrationInfo::CREATOR()
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
	
	// QAndroidJniObject forward
	NetworkRegistrationInfo::NetworkRegistrationInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint NetworkRegistrationInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkRegistrationInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint NetworkRegistrationInfo::getAccessNetworkTechnology()
	{
		return callMethod<jint>(
			"getAccessNetworkTechnology",
			"()I"
		);
	}
	__JniBaseClass NetworkRegistrationInfo::getAvailableServices()
	{
		return callObjectMethod(
			"getAvailableServices",
			"()Ljava/util/List;"
		);
	}
	android::telephony::CellIdentity NetworkRegistrationInfo::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentity;"
		);
	}
	jint NetworkRegistrationInfo::getDomain()
	{
		return callMethod<jint>(
			"getDomain",
			"()I"
		);
	}
	jstring NetworkRegistrationInfo::getRegisteredPlmn()
	{
		return callObjectMethod(
			"getRegisteredPlmn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NetworkRegistrationInfo::getTransportType()
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint NetworkRegistrationInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NetworkRegistrationInfo::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	jboolean NetworkRegistrationInfo::isRoaming()
	{
		return callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	jboolean NetworkRegistrationInfo::isSearching()
	{
		return callMethod<jboolean>(
			"isSearching",
			"()Z"
		);
	}
	jstring NetworkRegistrationInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NetworkRegistrationInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

