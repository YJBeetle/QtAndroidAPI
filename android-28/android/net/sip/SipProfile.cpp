#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./SipProfile.hpp"

namespace android::net::sip
{
	// Fields
	JObject SipProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.net.sip.SipProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SipProfile::SipProfile(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SipProfile::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SipProfile::getAuthUserName()
	{
		return callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;"
		);
	}
	jboolean SipProfile::getAutoRegistration()
	{
		return callMethod<jboolean>(
			"getAutoRegistration",
			"()Z"
		);
	}
	JString SipProfile::getDisplayName()
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	jint SipProfile::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString SipProfile::getProfileName()
	{
		return callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getProtocol()
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getProxyAddress()
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;"
		);
	}
	jboolean SipProfile::getSendKeepAlive()
	{
		return callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z"
		);
	}
	JString SipProfile::getSipDomain()
	{
		return callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getUriString()
	{
		return callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getUserName()
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
	void SipProfile::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::sip

