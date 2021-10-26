#pragma once

#ifndef ANDROID_NET_NSD_NSDSERVICEINFO
#define ANDROID_NET_NSD_NSDSERVICEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::nsd
{
	class NsdServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject getHost();
		jint getPort();
		QAndroidJniObject getAttributes();
		void setAttribute(jstring arg0, jstring arg1);
		void setAttribute(const QString &arg0, const QString &arg1);
		jstring getServiceType();
		void removeAttribute(jstring arg0);
		void removeAttribute(const QString &arg0);
		void setServiceType(jstring arg0);
		void setServiceType(const QString &arg0);
		void setHost(__jni_impl::java::net::InetAddress arg0);
		void setPort(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getServiceName();
		void setServiceName(jstring arg0);
		void setServiceName(const QString &arg0);
	};
} // namespace __jni_impl::android::net::nsd

#include "../../../java/net/InetAddress.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::nsd
{
	// Fields
	QAndroidJniObject NsdServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.nsd.NsdServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void NsdServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.nsd.NsdServiceInfo",
			"()V"
		);
	}
	
	// Methods
	jstring NsdServiceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NsdServiceInfo::getHost()
	{
		return __thiz.callObjectMethod(
			"getHost",
			"()Ljava/net/InetAddress;"
		);
	}
	jint NsdServiceInfo::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	QAndroidJniObject NsdServiceInfo::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/Map;"
		);
	}
	void NsdServiceInfo::setAttribute(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void NsdServiceInfo::setAttribute(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring NsdServiceInfo::getServiceType()
	{
		return __thiz.callObjectMethod(
			"getServiceType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NsdServiceInfo::removeAttribute(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NsdServiceInfo::removeAttribute(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NsdServiceInfo::setServiceType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NsdServiceInfo::setServiceType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NsdServiceInfo::setHost(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"setHost",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void NsdServiceInfo::setPort(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPort",
			"(I)V",
			arg0
		);
	}
	jint NsdServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NsdServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring NsdServiceInfo::getServiceName()
	{
		return __thiz.callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NsdServiceInfo::setServiceName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setServiceName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NsdServiceInfo::setServiceName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setServiceName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::net::nsd

namespace android::net::nsd
{
	class NsdServiceInfo : public __jni_impl::android::net::nsd::NsdServiceInfo
	{
	public:
		NsdServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		NsdServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::net::nsd

#endif // ANDROID_NET_NSD_NSDSERVICEINFO

