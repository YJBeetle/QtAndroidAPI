#include "../../os/Parcel.hpp"
#include "./DnsEvent.hpp"

namespace android::app::admin
{
	// Fields
	__JniBaseClass DnsEvent::CREATOR()
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
	jstring DnsEvent::getHostname()
	{
		return callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass DnsEvent::getInetAddresses()
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
	jstring DnsEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

