#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "./WifiP2pServiceInfo.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	jint WifiP2pServiceInfo::SERVICE_TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_ALL"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_BONJOUR()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_BONJOUR"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_UPNP()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_UPNP"
		);
	}
	jint WifiP2pServiceInfo::SERVICE_TYPE_VENDOR_SPECIFIC()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.nsd.WifiP2pServiceInfo",
			"SERVICE_TYPE_VENDOR_SPECIFIC"
		);
	}
	
	// Constructors
	
	// Methods
	jint WifiP2pServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiP2pServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiP2pServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p::nsd

