#pragma once

#ifndef ANDROID_NET_PROXYINFO
#define ANDROID_NET_PROXYINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class ProxyInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getHost();
		jint getPort();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1);
		static QAndroidJniObject buildPacProxy(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject getPacFileUrl();
		jarray getExclusionList();
	};
} // namespace __jni_impl::android::net

#include "Uri.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject ProxyInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.ProxyInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ProxyInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.ProxyInfo",
			"(V)V");
	}
	
	// Methods
	jboolean ProxyInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ProxyInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProxyInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ProxyInfo::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProxyInfo::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint ProxyInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ProxyInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ProxyInfo::buildDirectProxy(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;ILjava/util/List;)Landroid/net/ProxyInfo;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ProxyInfo::buildDirectProxy(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ProxyInfo::buildPacProxy(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildPacProxy",
			"(Landroid/net/Uri;)Landroid/net/ProxyInfo;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ProxyInfo::getPacFileUrl()
	{
		return __thiz.callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	jarray ProxyInfo::getExclusionList()
	{
		return __thiz.callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class ProxyInfo : public __jni_impl::android::net::ProxyInfo
	{
	public:
		ProxyInfo(QAndroidJniObject obj) { __thiz = obj; }
		ProxyInfo()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_PROXYINFO

