#pragma once

#ifndef ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_USERCREDENTIAL
#define ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_USERCREDENTIAL

#include "../../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	class Credential_UserCredential : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setUsername(jstring arg0);
		void setPassword(jstring arg0);
		void setEapType(jint arg0);
		QAndroidJniObject getUsername();
		jint getEapType();
		void setNonEapInnerMethod(jstring arg0);
		QAndroidJniObject getNonEapInnerMethod();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getPassword();
	};
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

#include "../../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::hotspot2::pps
{
	// Fields
	QAndroidJniObject Credential_UserCredential::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Credential_UserCredential::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"()V");
	}
	void Credential_UserCredential::__constructor(__jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Credential_UserCredential::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Credential_UserCredential::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Credential_UserCredential::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void Credential_UserCredential::setUsername(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Credential_UserCredential::setPassword(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Credential_UserCredential::setEapType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEapType",
			"(I)V",
			arg0);
	}
	QAndroidJniObject Credential_UserCredential::getUsername()
	{
		return __thiz.callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;");
	}
	jint Credential_UserCredential::getEapType()
	{
		return __thiz.callMethod<jint>(
			"getEapType",
			"()I");
	}
	void Credential_UserCredential::setNonEapInnerMethod(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Credential_UserCredential::getNonEapInnerMethod()
	{
		return __thiz.callObjectMethod(
			"getNonEapInnerMethod",
			"()Ljava/lang/String;");
	}
	jint Credential_UserCredential::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Credential_UserCredential::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject Credential_UserCredential::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::net::wifi::hotspot2::pps

namespace android::net::wifi::hotspot2::pps
{
	class Credential_UserCredential : public __jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential
	{
	public:
		Credential_UserCredential(QAndroidJniObject obj) { __thiz = obj; }
		Credential_UserCredential()
		{
			__constructor();
		}
		Credential_UserCredential(__jni_impl::android::net::wifi::hotspot2::pps::Credential_UserCredential arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net::wifi::hotspot2::pps

#endif // ANDROID_NET_WIFI_HOTSPOT2_PPS_CREDENTIAL_USERCREDENTIAL

