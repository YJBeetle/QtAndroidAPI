#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class InetAddress;
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
		jint describeContents();
		QAndroidJniObject getAttributes();
		QAndroidJniObject getHost();
		jint getPort();
		jstring getServiceName();
		jstring getServiceType();
		void removeAttribute(jstring arg0);
		void removeAttribute(const QString &arg0);
		void setAttribute(jstring arg0, jstring arg1);
		void setAttribute(const QString &arg0, const QString &arg1);
		void setHost(__jni_impl::java::net::InetAddress arg0);
		void setPort(jint arg0);
		void setServiceName(jstring arg0);
		void setServiceName(const QString &arg0);
		void setServiceType(jstring arg0);
		void setServiceType(const QString &arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::nsd

#include "../../os/Parcel.hpp"
#include "../../../java/net/InetAddress.hpp"

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
	jint NsdServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
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
	jstring NsdServiceInfo::getServiceName()
	{
		return __thiz.callObjectMethod(
			"getServiceName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring NsdServiceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

