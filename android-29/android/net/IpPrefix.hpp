#pragma once

#ifndef ANDROID_NET_IPPREFIX
#define ANDROID_NET_IPPREFIX

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net
{
	class IpPrefix : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean contains(__jni_impl::java::net::InetAddress arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		jint getPrefixLength();
		jbyteArray getRawAddress();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net
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
	
	// Constructors
	void IpPrefix::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpPrefix",
			"(V)V");
	}
	
	// Methods
	jboolean IpPrefix::contains(__jni_impl::java::net::InetAddress arg0)
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
	void IpPrefix::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpPrefix : public __jni_impl::android::net::IpPrefix
	{
	public:
		IpPrefix(QAndroidJniObject obj) { __thiz = obj; }
		IpPrefix()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPPREFIX

