#include "../../os/Parcel.hpp"
#include "../../../java/net/InetAddress.hpp"
#include "./NsdServiceInfo.hpp"

namespace android::net::nsd
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
	
	NsdServiceInfo::NsdServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NsdServiceInfo::NsdServiceInfo()
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
	void NsdServiceInfo::setAttribute(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void NsdServiceInfo::setHost(java::net::InetAddress arg0)
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
	void NsdServiceInfo::setServiceType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setServiceType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring NsdServiceInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void NsdServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::nsd

