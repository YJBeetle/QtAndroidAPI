#include "../../../../os/Parcel.hpp"
#include "./WifiP2pServiceRequest.hpp"

namespace android::net::wifi::p2p::nsd
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pServiceRequest::WifiP2pServiceRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject WifiP2pServiceRequest::newInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(I)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pServiceRequest::newInstance(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(ILjava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0,
			arg1
		);
	}
	jint WifiP2pServiceRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pServiceRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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

