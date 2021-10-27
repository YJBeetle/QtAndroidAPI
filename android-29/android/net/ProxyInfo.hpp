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
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1);
		static QAndroidJniObject buildDirectProxy(const QString &arg0, jint arg1);
		static QAndroidJniObject buildDirectProxy(jstring arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject buildDirectProxy(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject buildPacProxy(__jni_impl::android::net::Uri arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getExclusionList();
		jstring getHost();
		QAndroidJniObject getPacFileUrl();
		jint getPort();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
	QAndroidJniObject ProxyInfo::buildDirectProxy(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;I)Landroid/net/ProxyInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
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
	QAndroidJniObject ProxyInfo::buildDirectProxy(const QString &arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.ProxyInfo",
			"buildDirectProxy",
			"(Ljava/lang/String;ILjava/util/List;)Landroid/net/ProxyInfo;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
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
	jint ProxyInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ProxyInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray ProxyInfo::getExclusionList()
	{
		return __thiz.callObjectMethod(
			"getExclusionList",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ProxyInfo::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ProxyInfo::getPacFileUrl()
	{
		return __thiz.callObjectMethod(
			"getPacFileUrl",
			"()Landroid/net/Uri;"
		);
	}
	jint ProxyInfo::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jint ProxyInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ProxyInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

