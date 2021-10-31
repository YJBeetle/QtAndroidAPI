#include "../../../os/Parcel.hpp"
#include "./RangingRequest.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	__JniBaseClass RangingRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.RangingRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	RangingRequest::RangingRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint RangingRequest::getDefaultRttBurstSize()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getDefaultRttBurstSize",
			"()I"
		);
	}
	jint RangingRequest::getMaxPeers()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getMaxPeers",
			"()I"
		);
	}
	jint RangingRequest::getMaxRttBurstSize()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getMaxRttBurstSize",
			"()I"
		);
	}
	jint RangingRequest::getMinRttBurstSize()
	{
		return callStaticMethod<jint>(
			"android.net.wifi.rtt.RangingRequest",
			"getMinRttBurstSize",
			"()I"
		);
	}
	jint RangingRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RangingRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint RangingRequest::getRttBurstSize()
	{
		return callMethod<jint>(
			"getRttBurstSize",
			"()I"
		);
	}
	jint RangingRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RangingRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RangingRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

