#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SipProfile.def.hpp"

namespace android::net::sip
{
	// Fields
	inline JObject SipProfile::CREATOR()
	{
		return getStaticObjectField(
			"android.net.sip.SipProfile",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SipProfile::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SipProfile::getAuthUserName() const
	{
		return callObjectMethod(
			"getAuthUserName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SipProfile::getAutoRegistration() const
	{
		return callMethod<jboolean>(
			"getAutoRegistration",
			"()Z"
		);
	}
	inline JString SipProfile::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipProfile::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline jint SipProfile::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JString SipProfile::getProfileName() const
	{
		return callObjectMethod(
			"getProfileName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipProfile::getProtocol() const
	{
		return callObjectMethod(
			"getProtocol",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipProfile::getProxyAddress() const
	{
		return callObjectMethod(
			"getProxyAddress",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SipProfile::getSendKeepAlive() const
	{
		return callMethod<jboolean>(
			"getSendKeepAlive",
			"()Z"
		);
	}
	inline JString SipProfile::getSipDomain() const
	{
		return callObjectMethod(
			"getSipDomain",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipProfile::getUriString() const
	{
		return callObjectMethod(
			"getUriString",
			"()Ljava/lang/String;"
		);
	}
	inline JString SipProfile::getUserName() const
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
	inline void SipProfile::setCallingUid(jint arg0) const
	{
		callMethod<void>(
			"setCallingUid",
			"(I)V",
			arg0
		);
	}
	inline void SipProfile::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::sip

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::sip;
#endif
