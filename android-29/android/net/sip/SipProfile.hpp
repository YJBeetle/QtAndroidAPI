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
		jint describeContents();
		jstring getAuthUserName();
		jboolean getAutoRegistration();
		jstring getDisplayName();
		jstring getPassword();
		jint getPort();
		jstring getProfileName();
		jstring getProtocol();
		jstring getProxyAddress();
		jboolean getSendKeepAlive();
		jstring getSipDomain();
		jstring getUriString();
		jstring getUserName();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void SipProfile::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipProfile",
			"(V)V");
	}
	
	// Methods
	jint SipProfile::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring SipProfile::getAuthUserName()
	{
		return __thiz.callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SipProfile::getAutoRegistration()
	{
		return __thiz.callMethod<jboolean>(
			"getAutoRegistration",
			"()Z"
		);
	}
	jstring SipProfile::getDisplayName()
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SipProfile::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring SipProfile::getProfileName()
	{
		return __thiz.callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getProtocol()
	{
		return __thiz.callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getProxyAddress()
	{
		return __thiz.callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SipProfile::getSendKeepAlive()
	{
		return __thiz.callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z"
		);
	}
	jstring SipProfile::getSipDomain()
	{
		return __thiz.callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getUriString()
	{
		return __thiz.callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SipProfile::getUserName()
	{
		return __thiz.callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SipProfile::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

