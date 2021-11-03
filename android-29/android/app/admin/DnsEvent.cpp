#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./DnsEvent.hpp"

namespace android::app::admin
{
	// Fields
	JObject DnsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.DnsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DnsEvent::DnsEvent(QJniObject obj) : android::app::admin::NetworkEvent(obj) {}
	
	// Constructors
	
	// Methods
	jint DnsEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DnsEvent::getHostname()
	{
		return callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;"
		);
	}
	JObject DnsEvent::getInetAddresses()
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/List;"
		);
	}
	jint DnsEvent::getTotalResolvedAddressCount()
	{
		return callMethod<jint>(
			"getTotalResolvedAddressCount",
			"()I"
		);
	}
	JString DnsEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DnsEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

