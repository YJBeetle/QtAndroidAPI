#pragma once

#ifndef ANDROID_NET_SIP_SIPPROFILE
#define ANDROID_NET_SIP_SIPPROFILE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::sip
{
	class SipProfile : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getPort();
		QAndroidJniObject getProtocol();
		QAndroidJniObject getDisplayName();
		QAndroidJniObject getUriString();
		QAndroidJniObject getAuthUserName();
		QAndroidJniObject getSipDomain();
		QAndroidJniObject getProfileName();
		jboolean getSendKeepAlive();
		jboolean getAutoRegistration();
		QAndroidJniObject getProxyAddress();
		QAndroidJniObject getPassword();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getUserName();
	};
} // namespace __jni_impl::android::net::sip

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::sip
{
	// Fields
	QAndroidJniObject SipProfile::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.sip.SipProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void SipProfile::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile",
			"(V)V");
	}
	
	// Methods
	jint SipProfile::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I");
	}
	QAndroidJniObject SipProfile::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getUriString()
	{
		return __thiz.callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getAuthUserName()
	{
		return __thiz.callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getSipDomain()
	{
		return __thiz.callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getProfileName()
	{
		return __thiz.callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;");
	}
	jboolean SipProfile::getSendKeepAlive()
	{
		return __thiz.callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z");
	}
	jboolean SipProfile::getAutoRegistration()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoRegistration",
			"()Z");
	}
	QAndroidJniObject SipProfile::getProxyAddress()
	{
		return __thiz.callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SipProfile::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;");
	}
	jint SipProfile::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SipProfile::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SipProfile::getUserName()
	{
		return __thiz.callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::net::sip

namespace android::net::sip
{
	class SipProfile : public __jni_impl::android::net::sip::SipProfile
	{
	public:
		SipProfile(QAndroidJniObject obj) { __thiz = obj; }
		SipProfile()
		{
			__constructor();
		}
	};
} // namespace android::net::sip

#endif // ANDROID_NET_SIP_SIPPROFILE

