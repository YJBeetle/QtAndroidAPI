#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jint arg0);
		static QAndroidJniObject newInstance(jint arg0, jstring arg1);
		static QAndroidJniObject newInstance(jint arg0, const QString &arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::p2p::nsd

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::p2p::nsd
{
	// Fields
	
	// Constructors
	void WifiP2pServiceRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WifiP2pServiceRequest::newInstance(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(I)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0
		);
	}
	QAndroidJniObject WifiP2pServiceRequest::newInstance(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(ILjava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject WifiP2pServiceRequest::newInstance(jint arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.wifi.p2p.nsd.WifiP2pServiceRequest",
			"newInstance",
			"(ILjava/lang/String;)Landroid/net/wifi/p2p/nsd/WifiP2pServiceRequest;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint WifiP2pServiceRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiP2pServiceRequest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiP2pServiceRequest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void WifiP2pServiceRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::p2p::nsd

namespace android::net::wifi::p2p::nsd
{
	class WifiP2pServiceRequest : public __jni_impl::android::net::wifi::p2p::nsd::WifiP2pServiceRequest
	{
	public:
		WifiP2pServiceRequest(QAndroidJniObject obj) { __thiz = obj; }
		WifiP2pServiceRequest()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::p2p::nsd

