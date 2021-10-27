#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::net
{
	class InterfaceAddress;
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
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAddress();
		jint getFlags();
		jint getPrefixLength();
		jint getScope();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"
#include "../../java/net/InetAddress.hpp"
#include "../../java/net/InterfaceAddress.hpp"

namespace __jni_impl::android::net
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
	
	// Constructors
	void LinkAddress::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.LinkAddress",
			"(V)V");
	}
	
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
	void LinkAddress::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

