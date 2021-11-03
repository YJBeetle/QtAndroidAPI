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
	jint SipProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SipProfile::getAuthUserName() const
	{
		return callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;"
		);
	}
	jboolean SipProfile::getAutoRegistration() const
	{
		return callMethod<jboolean>(
			"getAutoRegistration",
			"()Z"
		);
	}
	JString SipProfile::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	jint SipProfile::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString SipProfile::getProfileName() const
	{
		return callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getProxyAddress() const
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;"
		);
	}
	jboolean SipProfile::getSendKeepAlive() const
	{
		return callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z"
		);
	}
	JString SipProfile::getSipDomain() const
	{
		return callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getUriString() const
	{
		return callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;"
		);
	}
	JString SipProfile::getUserName() const
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
	void SipProfile::setCallingUid(jint arg0) const
	{
		callMethod<void>(
			"setCallingUid",
			"(I)V",
			arg0
		);
	}
	void SipProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::sip

