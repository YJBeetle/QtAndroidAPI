#include "./NetworkCapabilities.hpp"
#include "./NetworkSpecifier.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NetworkRequest.hpp"

namespace android::net
{
	// Fields
	JObject NetworkRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.NetworkRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkRequest::NetworkRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean NetworkRequest::canBeSatisfiedBy(android::net::NetworkCapabilities arg0)
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkCapabilities;)Z",
			arg0.object()
		);
	}
	jint NetworkRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::NetworkSpecifier NetworkRequest::getNetworkSpecifier()
	{
		return callObjectMethod(
			"getNetworkSpecifier",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	jboolean NetworkRequest::hasCapability(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	jboolean NetworkRequest::hasTransport(jint arg0)
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	jint NetworkRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString NetworkRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

