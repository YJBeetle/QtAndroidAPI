#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"
#include "./IpPrefix.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject IpPrefix::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpPrefix",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	IpPrefix::IpPrefix(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean IpPrefix::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject IpPrefix::getAddress()
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
	jbyteArray IpPrefix::getRawAddress()
	{
		return callObjectMethod(
			"getRawAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jint IpPrefix::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring IpPrefix::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
