#pragma once

#ifndef ANDROID_NET_LINKADDRESS
#define ANDROID_NET_LINKADDRESS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InterfaceAddress;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class LinkAddress : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getAddress();
		jint getPrefixLength();
		jint getFlags();
		jint getScope();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../../java/net/InterfaceAddress.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject LinkAddress::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.LinkAddress",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void LinkAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LinkAddress",
			"(V)V");
	}
	
	// Methods
	jboolean LinkAddress::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject LinkAddress::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint LinkAddress::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject LinkAddress::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/net/InetAddress;");
	}
	jint LinkAddress::getPrefixLength()
	{
		return __thiz.callMethod<jint>(
			"getPrefixLength",
			"()I");
	}
	jint LinkAddress::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I");
	}
	jint LinkAddress::getScope()
	{
		return __thiz.callMethod<jint>(
			"getScope",
			"()I");
	}
	jint LinkAddress::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void LinkAddress::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class LinkAddress : public __jni_impl::android::net::LinkAddress
	{
	public:
		LinkAddress(QAndroidJniObject obj) { __thiz = obj; }
		LinkAddress()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_LINKADDRESS

