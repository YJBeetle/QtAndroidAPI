#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./IpPrefix.hpp"

namespace android::net
{
	// Fields
	JObject IpPrefix::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpPrefix",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	IpPrefix::IpPrefix(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IpPrefix::contains(java::net::InetAddress arg0)
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/net/InetAddress;)Z",
			arg0.object()
		);
	}
	jint IpPrefix::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean IpPrefix::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::net::InetAddress IpPrefix::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint IpPrefix::getPrefixLength()
	{
		return callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	JByteArray IpPrefix::getRawAddress()
	{
		return callObjectMethod(
			"getRawAddress",
			"()[B"
		);
	}
	jint IpPrefix::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString IpPrefix::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void IpPrefix::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

