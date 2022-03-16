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
	
	// Constructors
	
	// Methods
	jint NetworkRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean NetworkRequest::hasCapability(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCapability",
			"(I)Z",
			arg0
		);
	}
	jboolean NetworkRequest::hasTransport(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasTransport",
			"(I)Z",
			arg0
		);
	}
	jint NetworkRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString NetworkRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

