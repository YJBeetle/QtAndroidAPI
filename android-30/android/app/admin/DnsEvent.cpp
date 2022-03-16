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
	
	// Constructors
	
	// Methods
	jint DnsEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DnsEvent::getHostname() const
	{
		return callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;"
		);
	}
	JObject DnsEvent::getInetAddresses() const
	{
		return callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/List;"
		);
	}
	jint DnsEvent::getTotalResolvedAddressCount() const
	{
		return callMethod<jint>(
			"getTotalResolvedAddressCount",
			"()I"
		);
	}
	JString DnsEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DnsEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

