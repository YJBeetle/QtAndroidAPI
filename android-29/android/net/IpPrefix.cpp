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
	
	IpPrefix::IpPrefix(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean IpPrefix::contains(java::net::InetAddress arg0)
	{
		return __thiz.callMethod<jboolean>(
			"contains",
			"(Ljava/net/InetAddress;)Z",
			arg0.__jniObject().object()
		);
	}
	jint IpPrefix::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean IpPrefix::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject IpPrefix::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint IpPrefix::getPrefixLength()
	{
		return __thiz.callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	jbyteArray IpPrefix::getRawAddress()
	{
		return __thiz.callObjectMethod(
			"getRawAddress",
			"()[B"
		).object<jbyteArray>();
	}
	jint IpPrefix::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring IpPrefix::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IpPrefix::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

