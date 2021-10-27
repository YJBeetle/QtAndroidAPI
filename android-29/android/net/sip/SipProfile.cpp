#include "../../os/Parcel.hpp"
#include "./SipProfile.hpp"

namespace android::net::sip
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
	
	SipProfile::SipProfile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void SipProfile::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::sip

