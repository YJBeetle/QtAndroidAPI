#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InterfaceAddress.hpp"
#include "./LinkAddress.hpp"

namespace android::net
{
	// Fields
	QAndroidJniObject LinkAddress::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LinkAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	LinkAddress::LinkAddress(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint LinkAddress::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LinkAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject LinkAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint LinkAddress::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	jint LinkAddress::getPrefixLength()
	{
		return __thiz.callMethod<jint>(
			"getPrefixLength",
			"()I"
		);
	}
	jint LinkAddress::getScope()
	{
		return __thiz.callMethod<jint>(
			"getScope",
			"()I"
		);
	}
	jint LinkAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LinkAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LinkAddress::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

