#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./WifiP2pServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QJniObject forward
	WifiP2pServiceRequest::WifiP2pServiceRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::net::wifi::p2p::nsd::WifiP2pServiceRequest WifiP2pServiceRequest::newInstance(jint arg0)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(I)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0
		);
	}
	android::net::wifi::p2p::nsd::WifiP2pServiceRequest WifiP2pServiceRequest::newInstance(jint arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(ILjava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0,
			arg1.object<jstring>()
		);
	}
	jint WifiP2pServiceRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pServiceRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiP2pServiceRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiP2pServiceRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p::nsd

